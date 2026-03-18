/*
 * XREFs of ?_PowerProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1C0017020
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0016CA4 (-PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C0017090 (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 */

void __fastcall FxPkgPnp::_PowerProcessEventInner(FxPkgPnp *This, _FX_DRIVER_GLOBALS *Info, void *WorkerContext)
{
  FxWaitLockInternal *p_m_StateMachineLock; // rsi

  p_m_StateMachineLock = &This->m_PowerMachine.m_StateMachineLock;
  FxWaitLockInternal::AcquireLock(&This->m_PowerMachine.m_StateMachineLock, Info, 0LL);
  FxPkgPnp::PowerProcessEventInner(This, (FxPostProcessInfo *)Info);
  p_m_StateMachineLock->m_OwningThread = 0LL;
  KeSetEvent(&p_m_StateMachineLock->m_Event.m_Event, 0, 0);
  KeLeaveCriticalRegion();
}
