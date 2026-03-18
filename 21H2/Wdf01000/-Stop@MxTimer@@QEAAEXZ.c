/*
 * XREFs of ?Stop@MxTimer@@QEAAEXZ @ 0x1C0011D90
 * Callers:
 *     ?Stop@FxTimer@@QEAAEE@Z @ 0x1C0003728 (-Stop@FxTimer@@QEAAEE@Z.c)
 *     ?CancelTimer@FxRequestBase@@QEAAEXZ @ 0x1C0005000 (-CancelTimer@FxRequestBase@@QEAAEXZ.c)
 *     ?CancelIdleTimer@FxPowerIdleMachine@@IEAAEXZ @ 0x1C0011D60 (-CancelIdleTimer@FxPowerIdleMachine@@IEAAEXZ.c)
 *     ?PowerPolicyEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z @ 0x1C001666C (-PowerPolicyEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z.c)
 *     ?PowerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_STATE@@@Z @ 0x1C0016A84 (-PowerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_STATE@@@Z.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall MxTimer::Stop(MxTimer *this)
{
  BOOLEAN result; // al
  struct _EX_TIMER *m_KernelExTimer; // rcx

  result = 1;
  if ( !this->m_Timer.m_IsExtTimer )
    return KeCancelTimer(&this->m_Timer.KernelTimer);
  m_KernelExTimer = this->m_Timer.m_KernelExTimer;
  if ( m_KernelExTimer )
    return ExCancelTimer(m_KernelExTimer, 0LL);
  return result;
}
