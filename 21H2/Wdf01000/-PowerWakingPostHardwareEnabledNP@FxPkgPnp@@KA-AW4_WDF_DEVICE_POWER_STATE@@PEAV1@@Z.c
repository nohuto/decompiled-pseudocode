/*
 * XREFs of ?PowerWakingPostHardwareEnabledNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C000D870
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerWakingPostHardwareEnabledCommon@FxPkgPnp@@IEAA?AW4_WDF_DEVICE_POWER_STATE@@E@Z @ 0x1C000D8A8 (-PowerWakingPostHardwareEnabledCommon@FxPkgPnp@@IEAA-AW4_WDF_DEVICE_POWER_STATE@@E@Z.c)
 */

_WDF_DEVICE_POWER_STATE __fastcall FxPkgPnp::PowerWakingPostHardwareEnabledNP(FxPkgPnp *This)
{
  return FxPkgPnp::PowerWakingPostHardwareEnabledCommon(This, 1u);
}
