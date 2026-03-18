/*
 * XREFs of ?PowerPolS0WakeCompletePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C000F070
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C00158AC (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolS0WakeCompletePowerUp(FxPkgPnp *This)
{
  FxPkgPnp::PowerProcessEvent(This, PowerCompleteD0, 0);
  return 1472LL;
}
