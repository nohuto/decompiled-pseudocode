/*
 * XREFs of ?_Create@FxMemoryBufferFromPool@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAVFxMemoryObject@@@Z @ 0x1C0055CD0
 * Callers:
 *     ?_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAV1@@Z @ 0x1C0004E44 (-_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_.c)
 * Callees:
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0004E28 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ??0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z @ 0x1C000514C (--0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000BF84 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C004DC40 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0059F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
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
  bool IsPagedPoolType; // r14
  FxDeviceBase *v12; // rsi
  FxMemoryObject *v13; // rax
  FxMemoryObject *v14; // rbx
  SIZE_T v16; // rax
  FxMemoryObject_vtbl *PoolWithTag; // rax

  IsPagedPoolType = FxIsPagedPoolType(PoolType);
  if ( IsPagedPoolType )
    v12 = FxDeviceBase::_SearchForDevice(FxDriverGlobals, v10);
  else
    v12 = 0LL;
  v13 = (FxMemoryObject *)FxObjectHandleAlloc(
                            FxDriverGlobals,
                            ExDefaultNonPagedPoolType,
                            0x80uLL,
                            0,
                            Attributes,
                            0,
                            FxObjectTypeExternal);
  v14 = v13;
  if ( v12 )
  {
    if ( v13 )
    {
      FxMemoryObject::FxMemoryObject(v13, FxDriverGlobals, 0x80u, BufferSize);
      v14->m_DeviceBase = v12;
      v14->FxObject::__vftable = (FxMemoryObject_vtbl *)FxMemoryPagedBufferFromPool::`vftable'{for `FxObject'};
LABEL_9:
      v14[1].FxObject::__vftable = 0LL;
      v14->IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryBufferFromPool::`vftable'{for `IFxMemory'};
      goto LABEL_11;
    }
  }
  else if ( v13 )
  {
    FxMemoryObject::FxMemoryObject(v13, FxDriverGlobals, 0x80u, BufferSize);
    v14->FxObject::__vftable = (FxMemoryObject_vtbl *)FxMemoryPagedBufferFromPool::`vftable'{for `FxObject'};
    goto LABEL_9;
  }
  v14 = 0LL;
LABEL_11:
  if ( !v14 )
    return 3221225626LL;
  v16 = v14->GetBufferSize(&v14->IFxMemory);
  PoolWithTag = (FxMemoryObject_vtbl *)ExAllocatePoolWithTag(PoolType, v16, PoolTag);
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
