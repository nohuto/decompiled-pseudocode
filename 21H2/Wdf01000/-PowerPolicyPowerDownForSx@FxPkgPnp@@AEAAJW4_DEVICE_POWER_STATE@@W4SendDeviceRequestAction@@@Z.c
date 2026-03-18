/*
 * XREFs of ?PowerPolicyPowerDownForSx@FxPkgPnp@@AEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestAction@@@Z @ 0x1C000C2E0
 * Callers:
 *     ?PowerPolSleepingNoWakePowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C000C290 (-PowerPolSleepingNoWakePowerDown@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSleepingWakePowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008AFF0 (-PowerPolSleepingWakePowerDown@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestAction@@W4RequestDIrpReason@@@Z @ 0x1C000C360 (-PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestActi.c)
 *     ?PowerPolicyBlockChildrenPowerUp@FxPkgPnp@@AEAAXXZ @ 0x1C000C4A4 (-PowerPolicyBlockChildrenPowerUp@FxPkgPnp@@AEAAXXZ.c)
 */

int __fastcall FxPkgPnp::PowerPolicyPowerDownForSx(
        FxPkgPnp *this,
        _DEVICE_POWER_STATE DxState,
        SendDeviceRequestAction Action)
{
  FxPkgPnp::PowerPolicyBlockChildrenPowerUp(this);
  return FxPkgPnp::PowerPolicySendDevicePowerRequest(this, DxState, Action, RequestDxForSx);
}
