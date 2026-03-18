/*
 * XREFs of imp_WdfMemoryCreate @ 0x1C000CE10
 * Callers:
 *     <none>
 * Callees:
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0004E28 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ?_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAV1@@Z @ 0x1C0004E44 (-_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000A0E0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B520 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000CF7C (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000CFA4 (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0059244 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0059E9C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
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
  _FX_DRIVER_GLOBALS *DriverName; // rbx
  WDFMEMORY__ **v11; // rdi
  bool IsPagedPoolType; // al
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
  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  hMemory = 0LL;
  if ( FxValidateObjectAttributesForParentHandle((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, Attributes, 0) >= 0 )
  {
    pParent = 0LL;
    FxObjectHandleGetPtr(DriverName, (unsigned __int64)Attributes->ParentObject, 0x1000u, (void **)&pParent);
    DriverName = pParent->m_Globals;
  }
  v11 = Memory;
  if ( !Memory )
    FxVerifierNullBugCheck(DriverName, retaddr);
  IsPagedPoolType = FxIsPagedPoolType(PoolType);
  result = FxVerifierCheckIrqlLevel(DriverName, 2 - IsPagedPoolType);
  if ( result >= 0 )
  {
    v14 = BufferSize;
    if ( BufferSize )
    {
      *v11 = 0LL;
      result = FxValidateObjectAttributes(DriverName, Attributes, 0);
      if ( result >= 0 )
      {
        if ( !PoolTag )
          PoolTag = DriverName->Tag;
        if ( DriverName->FxVerifierOn && FxLibraryGlobals.VfCheckNxPoolType )
          FxLibraryGlobals.VfCheckNxPoolType(PoolType, retaddr, PoolTag);
        result = FxMemoryObject::_Create(DriverName, Attributes, PoolType, PoolTag, v14, &pBuffer);
        if ( result >= 0 )
        {
          v15 = pBuffer;
          v16 = FxObject::Commit(pBuffer, (_FX_DRIVER_GLOBALS *)Attributes, (void **)&hMemory, 0LL, 1u);
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
      WPP_IFR_SF_d(DriverName, 2u, 0x12u, 0xAu, WPP_FxMemoryBufferApi_cpp_Traceguids, -1073741811);
      return -1073741811;
    }
  }
  return result;
}
