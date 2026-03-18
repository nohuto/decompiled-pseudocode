/*
 * XREFs of ?PowerPolPowerUpForSystemSleepNotSeen@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008AD40
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyCompleteSystemPowerIrp@FxPkgPnp@@IEAAXXZ @ 0x1C000CB78 (-PowerPolicyCompleteSystemPowerIrp@FxPkgPnp@@IEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolPowerUpForSystemSleepNotSeen(FxPkgPnp *This)
{
  if ( This->m_PendingSystemPowerIrp )
    FxPkgPnp::PowerPolicyCompleteSystemPowerIrp(This);
  return 1389LL;
}
