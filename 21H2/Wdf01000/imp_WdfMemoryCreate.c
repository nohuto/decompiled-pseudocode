/*
 * XREFs of imp_WdfMemoryCreate @ 0x1C0005910
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0005890 (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00058D8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0005B30 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAV1@@Z @ 0x1C0005FF8 (-_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00062C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0032F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfMemoryCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _POOL_TYPE PoolType,
        unsigned int PoolTag,
        unsigned __int64 BufferSize,
        WDFMEMORY__ **Memory,
        void **Buffer)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  WDFMEMORY__ **v11; // rdi
  unsigned __int8 v12; // dl
  int result; // eax
  unsigned __int64 v14; // r14
  FxMemoryObject *v15; // rbx
  int v16; // esi
  void **v17; // rdi
  FxMemoryObject *pBuffer; // [rsp+30h] [rbp-28h] BYREF
  WDFMEMORY__ *hMemory; // [rsp+38h] [rbp-20h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]
  FxObject *pParent; // [rsp+60h] [rbp+8h] BYREF

  pBuffer = 0LL;
  m_Globals = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  hMemory = 0LL;
  if ( (int)FxValidateObjectAttributesForParentHandle((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], Attributes, 0) >= 0 )
  {
    pParent = 0LL;
    FxObjectHandleGetPtr(m_Globals, (unsigned __int64)Attributes->ParentObject, 0x1000u, (void **)&pParent);
    m_Globals = pParent->m_Globals;
  }
  v11 = Memory;
  if ( !Memory )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( (PoolType & 0xFFFFFEFF) == 1 || (v12 = 2, (PoolType & 0xFFFFFEFF) == 5) )
    v12 = 1;
  result = FxVerifierCheckIrqlLevel(m_Globals, v12);
  if ( result >= 0 )
  {
    v14 = BufferSize;
    if ( BufferSize )
    {
      *v11 = 0LL;
      result = FxValidateObjectAttributes(m_Globals, Attributes, 0);
      if ( result >= 0 )
      {
        if ( !PoolTag )
          PoolTag = m_Globals->Tag;
        if ( m_Globals->FxVerifierOn && FxLibraryGlobals.VfCheckNxPoolType )
          FxLibraryGlobals.VfCheckNxPoolType(PoolType, retaddr, PoolTag);
        result = FxMemoryObject::_Create(m_Globals, Attributes, PoolType, PoolTag, v14, &pBuffer);
        if ( result >= 0 )
        {
          v15 = pBuffer;
          v16 = FxObject::Commit(pBuffer, Attributes, (void **)&hMemory, 0LL, 1u);
          if ( v16 < 0 )
          {
            FxObject::ClearEvtCallbacks(v15);
            ((void (*)(void))v15->DeleteObject)();
          }
          else
          {
            *v11 = hMemory;
            v17 = Buffer;
            if ( Buffer )
              *v17 = (void *)v15->GetBuffer(&v15->IFxMemory);
          }
          return v16;
        }
      }
    }
    else
    {
      WPP_IFR_SF_d(m_Globals, 2u, 0x12u, 0xAu, WPP_FxMemoryBufferApi_cpp_Traceguids, -1073741811);
      return -1073741811;
    }
  }
  return result;
}
