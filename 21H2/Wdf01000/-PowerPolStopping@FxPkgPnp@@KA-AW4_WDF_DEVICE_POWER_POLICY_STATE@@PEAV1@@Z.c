/*
 * XREFs of ?PowerPolStopping@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008B5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyBlockChildrenPowerUp@FxPkgPnp@@AEAAXXZ @ 0x1C000C4A4 (-PowerPolicyBlockChildrenPowerUp@FxPkgPnp@@AEAAXXZ.c)
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C00158AC (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolStopping(FxPkgPnp *This, _FX_DRIVER_GLOBALS *a2)
{
  FxPkgPnp::PowerPolicyBlockChildrenPowerUp(This, a2);
  FxPkgPnp::PowerProcessEvent(This, 0x80u, 0);
  return 1472LL;
}
