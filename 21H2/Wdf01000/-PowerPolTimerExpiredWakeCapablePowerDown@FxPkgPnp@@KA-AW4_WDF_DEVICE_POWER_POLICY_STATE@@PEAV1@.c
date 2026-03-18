/*
 * XREFs of ?PowerPolTimerExpiredWakeCapablePowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008BE60
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyCanIdlePowerDown@FxPkgPnp@@AEAAEW4_DEVICE_POWER_STATE@@@Z @ 0x1C000C184 (-PowerPolicyCanIdlePowerDown@FxPkgPnp@@AEAAEW4_DEVICE_POWER_STATE@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredWakeCapablePowerDown(FxPkgPnp *This)
{
  return FxPkgPnp::PowerPolicyCanIdlePowerDown(
           This,
           (_FX_DRIVER_GLOBALS *)(unsigned int)This->m_PowerPolicyMachine.m_Owner->m_IdleSettings.DxState) != 0
       ? 1472
       : 1338;
}
