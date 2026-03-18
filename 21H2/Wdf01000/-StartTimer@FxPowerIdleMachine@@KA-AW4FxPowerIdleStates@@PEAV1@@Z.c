/*
 * XREFs of ?StartTimer@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C00114C0
 * Callers:
 *     <none>
 * Callees:
 *     ?StartWithReturn@MxTimer@@QEAAET_LARGE_INTEGER@@K@Z @ 0x1C0069B00 (-StartWithReturn@MxTimer@@QEAAET_LARGE_INTEGER@@K@Z.c)
 */

__int64 __fastcall FxPowerIdleMachine::StartTimer(FxPowerIdleMachine *This)
{
  _LARGE_INTEGER m_PowerTimeout; // rdx

  This->m_Flags |= 8u;
  m_PowerTimeout = This->m_PowerTimeout;
  if ( This->m_PowerTimeoutTimer.m_Timer.m_IsExtTimer )
    MxTimer::StartWithReturn(&This->m_PowerTimeoutTimer, m_PowerTimeout, 0x64u);
  else
    KeSetCoalescableTimer(
      &This->m_PowerTimeoutTimer.m_Timer.KernelTimer,
      m_PowerTimeout,
      This->m_PowerTimeoutTimer.m_Timer.m_Period,
      0x64u,
      &This->m_PowerTimeoutTimer.m_Timer.TimerDpc);
  return 10LL;
}
