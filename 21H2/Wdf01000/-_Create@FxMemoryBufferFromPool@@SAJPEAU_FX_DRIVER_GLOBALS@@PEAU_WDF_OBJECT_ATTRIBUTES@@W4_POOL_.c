/*
 * XREFs of ?_Create@FxMemoryBufferFromPool@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAVFxMemoryObject@@@Z @ 0x1C000FBCC
 * Callers:
 *     ?_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAV1@@Z @ 0x1C0005FF8 (-_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_.c)
 * Callees:
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0006B70 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C000FDA8 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ??0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z @ 0x1C001275C (--0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C002D504 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0032F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxMemoryBufferFromPool::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _POOL_TYPE PoolType,
        ULONG PoolTag,
        unsigned __int64 BufferSize,
        FxMemoryObject **Buffer)
{
  _WDF_OBJECT_ATTRIBUTES *v10; // rdx
  unsigned __int8 IsPagedPoolType; // r14
  FxDeviceBase *v12; // rbp
  FxMemoryObject *v13; // rax
  FxMemoryObject *v14; // rbx
  SIZE_T v15; // rax
  FxMemoryObject_vtbl *PoolWithTag; // rax
  FxMemoryObject *v18; // rax
  FxPoolTypeOrPoolFlags v19; // [rsp+40h] [rbp-28h] BYREF

  IsPagedPoolType = FxIsPagedPoolType(PoolType);
  if ( IsPagedPoolType && (v12 = FxDeviceBase::_SearchForDevice(FxDriverGlobals, v10)) != 0LL )
  {
    *(_QWORD *)&v19.UsePoolType = 0LL;
    v19.u.PoolFlags = 64LL;
    v13 = (FxMemoryObject *)FxObjectHandleAllocCommon(
                              FxDriverGlobals,
                              &v19,
                              0x80uLL,
                              0,
                              Attributes,
                              0,
                              FxObjectTypeExternal);
    v14 = v13;
    if ( v13 )
    {
      FxMemoryObject::FxMemoryObject(v13, FxDriverGlobals, 0x80u, BufferSize);
      v14[1].FxObject::__vftable = 0LL;
      v14->FxObject::__vftable = (FxMemoryObject_vtbl *)FxMemoryPagedBufferFromPool::`vftable'{for `FxObject'};
      v14->IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryBufferFromPool::`vftable'{for `IFxMemory'};
      v14->m_DeviceBase = v12;
    }
    else
    {
      v14 = 0LL;
    }
    if ( !v14 )
      return 3221225626LL;
  }
  else
  {
    *(_QWORD *)&v19.UsePoolType = 0LL;
    v19.u.PoolFlags = 64LL;
    v18 = (FxMemoryObject *)FxObjectHandleAllocCommon(
                              FxDriverGlobals,
                              &v19,
                              0x80uLL,
                              0,
                              Attributes,
                              0,
                              FxObjectTypeExternal);
    v14 = v18;
    if ( !v18 )
      return 3221225626LL;
    FxMemoryObject::FxMemoryObject(v18, FxDriverGlobals, 0x80u, BufferSize);
    v14[1].FxObject::__vftable = 0LL;
    v14->FxObject::__vftable = (FxMemoryObject_vtbl *)FxMemoryPagedBufferFromPool::`vftable'{for `FxObject'};
    v14->IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryBufferFromPool::`vftable'{for `IFxMemory'};
  }
  v15 = v14->GetBufferSize(&v14->IFxMemory);
  PoolWithTag = (FxMemoryObject_vtbl *)ExAllocatePoolWithTag(PoolType, v15, PoolTag);
  v14[1].FxObject::__vftable = PoolWithTag;
  if ( !PoolWithTag )
  {
    FxObject::ClearEvtCallbacks(v14);
    ((void (*)(void))v14->DeleteObject)();
    return 3221225626LL;
  }
  if ( IsPagedPoolType )
    v14->m_ObjectFlags |= 0x11u;
  *Buffer = v14;
  return 0LL;
}
