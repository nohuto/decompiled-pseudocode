/*
 * XREFs of ?PowerPolStarted@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0018450
 * Callers:
 *     <none>
 * Callees:
 *     ?DisableTimer@FxPowerIdleMachine@@QEAAEXZ @ 0x1C0016EA4 (-DisableTimer@FxPowerIdleMachine@@QEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolStarted(FxPkgPnp *This)
{
  FxPowerIdleMachine::DisableTimer(&This->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine);
  return 1472LL;
}
