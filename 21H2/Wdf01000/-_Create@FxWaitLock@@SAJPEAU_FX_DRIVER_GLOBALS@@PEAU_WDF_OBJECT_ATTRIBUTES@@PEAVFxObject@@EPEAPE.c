/*
 * XREFs of ?_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPEAUWDFWAITLOCK__@@@Z @ 0x1C00233E4
 * Callers:
 *     ?InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C001ED40 (-InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 *     imp_WdfWaitLockCreate @ 0x1C0023340 (imp_WdfWaitLockCreate.c)
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0005B30 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0006B70 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ??0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0016188 (--0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??0FxWaitLockInternal@@QEAA@XZ @ 0x1C00239E0 (--0FxWaitLockInternal@@QEAA@XZ.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0032F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxWaitLock::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxObject *ParentObject,
        unsigned __int8 AssignDriverAsDefaultParent,
        WDFWAITLOCK__ **LockHandle)
{
  FxObject *v9; // rax
  FxObject *v10; // rdi
  int v11; // ebx
  FxPoolTypeOrPoolFlags v13; // [rsp+40h] [rbp-28h] BYREF

  *(_QWORD *)&v13.UsePoolType = 0LL;
  v13.u.PoolFlags = 64LL;
  *LockHandle = 0LL;
  v9 = (FxObject *)FxObjectHandleAllocCommon(FxDriverGlobals, &v13, 0x90uLL, 0, Attributes, 0, FxObjectTypeExternal);
  v10 = v9;
  if ( v9 )
  {
    FxObject::FxObject(v9, 0x1023u, 0x90u, FxDriverGlobals);
    FxWaitLockInternal::FxWaitLockInternal((FxWaitLockInternal *)&v10[1]);
    v10->__vftable = (FxObject_vtbl *)FxObject::`vftable';
    KeInitializeEvent((PRKEVENT)&v10[1], SynchronizationEvent, 1u);
    LOBYTE(v10[1].m_ObjectFlags) = 1;
    v11 = FxObject::Commit(
            v10,
            (_FX_DRIVER_GLOBALS *)Attributes,
            (void **)LockHandle,
            ParentObject,
            AssignDriverAsDefaultParent);
    if ( v11 < 0 )
    {
      FxObject::ClearEvtCallbacks(v10);
      v10->DeleteObject(v10);
    }
    return (unsigned int)v11;
  }
  else
  {
    WPP_IFR_SF_d(FxDriverGlobals, 2u, 0xDu, 0xAu, WPP_FxWaitLock_cpp_Traceguids, -1073741670);
    return 3221225626LL;
  }
}
