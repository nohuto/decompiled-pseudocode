/*
 * XREFs of ?PowerFinalPowerDownFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0086B80
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerSendPowerDownFailureEvent@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z @ 0x1C00873E8 (-PowerSendPowerDownFailureEvent@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerFinalPowerDownFailed(FxPkgPnp *This)
{
  FxPkgPnp::PowerSendPowerDownFailureEvent(This, FxPowerDownTypeImplicit);
  return 789LL;
}
