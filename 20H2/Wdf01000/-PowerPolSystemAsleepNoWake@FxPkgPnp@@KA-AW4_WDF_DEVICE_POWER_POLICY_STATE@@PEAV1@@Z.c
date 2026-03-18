/*
 * XREFs of ?PowerPolSystemAsleepNoWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00102F0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyCompleteSystemPowerIrp@FxPkgPnp@@IEAAXXZ @ 0x1C0010318 (-PowerPolicyCompleteSystemPowerIrp@FxPkgPnp@@IEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSystemAsleepNoWake(FxPkgPnp *This)
{
  This->m_PowerPolicyMachine.m_Owner->m_DevicePowerIrpTracker.m_DIrpRequestedForSIrp = RequestDIrpReasonInvalid;
  FxPkgPnp::PowerPolicyCompleteSystemPowerIrp(This);
  return 1472LL;
}
