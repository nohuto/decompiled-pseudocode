/*
 * XREFs of ?_PowerProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1C0011A70
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C00122C0 (-PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 */

void __fastcall FxPkgPnp::_PowerProcessEventInner(FxPkgPnp *This, FxPostProcessInfo *Info, void *WorkerContext)
{
  FxWaitLockInternal *p_m_StateMachineLock; // rbx

  p_m_StateMachineLock = &This->m_PowerMachine.m_StateMachineLock;
  KeEnterCriticalRegion();
  if ( KeWaitForSingleObject(p_m_StateMachineLock, Executive, 0, 0, 0LL) == 258 )
    KeLeaveCriticalRegion();
  else
    p_m_StateMachineLock->m_OwningThread = KeGetCurrentThread();
  FxPkgPnp::PowerProcessEventInner(This, Info);
  p_m_StateMachineLock->m_OwningThread = 0LL;
  KeSetEvent(&p_m_StateMachineLock->m_Event.m_Event, 0, 0);
  KeLeaveCriticalRegion();
}
