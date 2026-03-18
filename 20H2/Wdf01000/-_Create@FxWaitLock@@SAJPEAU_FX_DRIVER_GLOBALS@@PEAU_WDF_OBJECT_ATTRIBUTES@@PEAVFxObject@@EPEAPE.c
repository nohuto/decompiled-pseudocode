/*
 * XREFs of ?_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPEAUWDFWAITLOCK__@@@Z @ 0x1C0061990
 * Callers:
 *     imp_WdfWaitLockCreate @ 0x1C005E5D0 (imp_WdfWaitLockCreate.c)
 *     ?InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C0088F08 (-InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 * Callees:
 *     ??0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00051A4 (--0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B520 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000BF84 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C00595BC (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ??0FxWaitLockInternal@@QEAA@XZ @ 0x1C0061954 (--0FxWaitLockInternal@@QEAA@XZ.c)
 */

__int64 __fastcall FxWaitLock::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxObject *ParentObject,
        unsigned __int8 AssignDriverAsDefaultParent,
        WDFWAITLOCK__ **LockHandle)
{
  _POOL_TYPE v8; // edx
  FxObject *v10; // rax
  FxObject *v11; // rdi
  int v13; // ebx

  v8 = ExDefaultNonPagedPoolType;
  *LockHandle = 0LL;
  v10 = FxObjectHandleAlloc(FxDriverGlobals, v8, 0x90uLL, 0, Attributes, 0, FxObjectTypeExternal);
  v11 = v10;
  if ( v10 )
  {
    FxObject::FxObject(v10, 0x1023u, 0x90u, FxDriverGlobals);
    FxWaitLockInternal::FxWaitLockInternal((FxWaitLockInternal *)&v11[1]);
    v11->__vftable = (FxObject_vtbl *)FxResourceCm::`vftable';
  }
  else
  {
    v11 = 0LL;
  }
  if ( v11 )
  {
    KeInitializeEvent((PRKEVENT)&v11[1], SynchronizationEvent, 1u);
    LOBYTE(v11[1].m_ObjectFlags) = 1;
    v13 = FxObject::Commit(
            v11,
            (_FX_DRIVER_GLOBALS *)Attributes,
            (void **)LockHandle,
            ParentObject,
            AssignDriverAsDefaultParent);
    if ( v13 < 0 )
    {
      FxObject::ClearEvtCallbacks(v11);
      ((void (*)(void))v11->DeleteObject)();
    }
    return (unsigned int)v13;
  }
  else
  {
    WPP_IFR_SF_d(FxDriverGlobals, 2u, 0xDu, 0xAu, WPP_FxWaitLock_cpp_Traceguids, -1073741670);
    return 3221225626LL;
  }
}
