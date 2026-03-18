/*
 * XREFs of imp_WdfRegistryQueryMemory @ 0x1C005D8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAV1@@Z @ 0x1C0004E44 (-_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C000A094 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000A0E0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B520 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000CF7C (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001CB80 (memmove.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0058968 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C00595BC (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_qZd @ 0x1C005CC58 (WPP_IFR_SF_qZd.c)
 *     ?_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z @ 0x1C005EE64 (-_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z.c)
 */

int __fastcall imp_WdfRegistryQueryMemory(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        const _UNICODE_STRING *ValueName,
        _POOL_TYPE PoolType,
        _WDF_OBJECT_ATTRIBUTES *MemoryAttributes,
        WDFMEMORY__ **Memory,
        unsigned int *ValueType)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  void **v11; // r14
  int result; // eax
  void *v13; // r9
  unsigned int v14; // r8d
  unsigned int v15; // r15d
  FX_POOL_TRACKER *v16; // r12
  int v17; // edi
  signed int v18; // eax
  unsigned int v19; // r15d
  unsigned int Tag; // r9d
  FxMemoryObject *v21; // rbx
  void *v22; // rax
  unsigned __int16 v23; // r9
  const _GUID *Value; // [rsp+20h] [rbp-30h]
  FxMemoryObject *pObject; // [rsp+40h] [rbp-10h] BYREF
  void *retaddr; // [rsp+88h] [rbp+38h]
  unsigned int dataLength; // [rsp+90h] [rbp+40h] BYREF
  FxRegKey *pKey; // [rsp+A0h] [rbp+50h] BYREF
  _POOL_TYPE v29; // [rsp+A8h] [rbp+58h]

  v29 = PoolType;
  pKey = 0LL;
  dataLength = 0;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Key,
    0x1006u,
    (void **)&pKey);
  m_Globals = pKey->m_Globals;
  if ( !ValueName )
    FxVerifierNullBugCheck(m_Globals, (ULONG_PTR)retaddr);
  v11 = (void **)Memory;
  if ( !Memory )
    FxVerifierNullBugCheck(m_Globals, (ULONG_PTR)retaddr);
  *Memory = 0LL;
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( result >= 0 )
  {
    if ( m_Globals->FxVerifierOn && WPP_GLOBAL_WDF_Control.Dpc.DeferredRoutine )
      WPP_GLOBAL_WDF_Control.Dpc.DeferredRoutine((_KDPC *)(unsigned int)PoolType, retaddr, (void *)m_Globals->Tag, v13);
    result = FxValidateObjectAttributes(m_Globals, MemoryAttributes, 0);
    if ( result >= 0 )
    {
      result = FxValidateUnicodeString(m_Globals, ValueName);
      if ( result >= 0 )
      {
        result = FxRegKey::_QueryValue(pKey->m_Globals, pKey->m_Key, ValueName, 0, 0LL, &dataLength, 0LL);
        if ( (int)(result + 0x80000000) < 0 || result == -2147483643 )
        {
          v15 = dataLength;
          if ( !dataLength )
          {
            WPP_IFR_SF_qZd(m_Globals, 0, v14, 0xFu, Value, Key, ValueName);
            return -1073741687;
          }
          v16 = (FX_POOL_TRACKER *)FxPoolAllocator(
                                     m_Globals,
                                     &m_Globals->FxPoolFrameworks,
                                     1u,
                                     dataLength,
                                     m_Globals->Tag,
                                     retaddr);
          if ( !v16 )
          {
            v17 = -1073741670;
            WPP_IFR_SF_qL(m_Globals, 2u, 2u, 0x10u, WPP_FxRegistryAPI_cpp_Traceguids, Key, 0xC000009A);
            return v17;
          }
          v18 = FxRegKey::_QueryValue(pKey->m_Globals, pKey->m_Key, ValueName, v15, v16, &dataLength, ValueType);
          v17 = v18;
          if ( v18 < 0 )
          {
            v23 = 18;
          }
          else
          {
            v19 = dataLength;
            Tag = m_Globals->Tag;
            pObject = 0LL;
            v18 = FxMemoryObject::_Create(m_Globals, MemoryAttributes, v29, Tag, dataLength, &pObject);
            v17 = v18;
            if ( v18 >= 0 )
            {
              v21 = pObject;
              v17 = FxObject::Commit(pObject, (_FX_DRIVER_GLOBALS *)MemoryAttributes, v11, 0LL, 1u);
              if ( v17 < 0 )
              {
                FxObject::ClearEvtCallbacks(v21);
                ((void (*)(void))v21->DeleteObject)();
              }
              else
              {
                v22 = (void *)v21->GetBuffer(&v21->IFxMemory);
                memmove(v22, v16, v19);
              }
              goto LABEL_23;
            }
            v23 = 17;
          }
          WPP_IFR_SF_qL(m_Globals, 2u, 2u, v23, WPP_FxRegistryAPI_cpp_Traceguids, Key, v18);
LABEL_23:
          FxPoolFree(v16);
          return v17;
        }
      }
    }
  }
  return result;
}
