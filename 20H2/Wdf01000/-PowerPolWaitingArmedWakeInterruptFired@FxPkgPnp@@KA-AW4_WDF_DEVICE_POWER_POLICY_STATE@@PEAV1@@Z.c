/*
 * XREFs of ?PowerPolWaitingArmedWakeInterruptFired@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0087B60
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyCancelWaitWake@FxPkgPnp@@IEAAEXZ @ 0x1C0087E84 (-PowerPolicyCancelWaitWake@FxPkgPnp@@IEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolWaitingArmedWakeInterruptFired(FxPkgPnp *This)
{
  __int64 result; // rax

  if ( FxPkgPnp::PowerPolicyCancelWaitWake(This) )
    return 1472LL;
  result = 1408LL;
  if ( !This->m_PowerPolicyMachine.m_Owner->m_WakeCompletionEventDropped )
    return 1472LL;
  return result;
}
