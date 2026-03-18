/*
 * XREFs of ?_CreateAndInit@FxSelfManagedIoMachine@@SAJPEAPEAV1@PEAVFxPkgPnp@@@Z @ 0x1C008B4F0
 * Callers:
 *     ?RegisterCallbacks@FxPkgPnp@@QEAAJPEAU_WDF_PNPPOWER_EVENT_CALLBACKS@@@Z @ 0x1C0082330 (-RegisterCallbacks@FxPkgPnp@@QEAAJPEAU_WDF_PNPPOWER_EVENT_CALLBACKS@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00138C0 (WPP_IFR_SF_q.c)
 *     ??0FxSelfManagedIoMachine@@QEAA@PEAVFxPkgPnp@@@Z @ 0x1C008B224 (--0FxSelfManagedIoMachine@@QEAA@PEAVFxPkgPnp@@@Z.c)
 */

__int64 __fastcall FxSelfManagedIoMachine::_CreateAndInit(
        FxSelfManagedIoMachine **SelfManagedIoMachine,
        FxPkgPnp *PkgPnp)
{
  FX_POOL **v4; // rax
  FxSelfManagedIoMachine *v5; // rax
  FxSelfManagedIoMachine *v6; // rdi
  const void *ObjectHandleUnchecked; // rax
  __int64 result; // rax
  void *Caller; // [rsp+38h] [rbp+0h]

  *SelfManagedIoMachine = 0LL;
  v4 = FxPoolAllocator(
         PkgPnp->m_Globals,
         &PkgPnp->m_Globals->FxPoolFrameworks,
         ExDefaultNonPagedPoolType,
         0x118uLL,
         PkgPnp->m_Globals->Tag,
         Caller);
  if ( v4 )
  {
    FxSelfManagedIoMachine::FxSelfManagedIoMachine((FxSelfManagedIoMachine *)v4, PkgPnp);
    v6 = v5;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    KeInitializeEvent(&v6->m_StateMachineLock.m_Event.m_Event, SynchronizationEvent, 1u);
    v6->m_StateMachineLock.m_Event.m_DbgFlagIsInitialized = 1;
    result = 0LL;
    *SelfManagedIoMachine = v6;
  }
  else
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(PkgPnp->m_DeviceBase);
    WPP_IFR_SF_q(PkgPnp->m_Globals, 2u, 0xCu, 0xAu, WPP_SelfManagedIoStateMachine_cpp_Traceguids, ObjectHandleUnchecked);
    return 3221225626LL;
  }
  return result;
}
