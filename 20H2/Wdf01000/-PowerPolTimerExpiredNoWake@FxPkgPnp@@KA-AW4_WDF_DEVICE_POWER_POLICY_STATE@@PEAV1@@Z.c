/*
 * XREFs of ?PowerPolTimerExpiredNoWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C000E290
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyCanIdlePowerDown@FxPkgPnp@@AEAAEW4_DEVICE_POWER_STATE@@@Z @ 0x1C000E2E4 (-PowerPolicyCanIdlePowerDown@FxPkgPnp@@AEAAEW4_DEVICE_POWER_STATE@@@Z.c)
 *     ?NotifyDevicePowerDown@FxPoxInterface@@QEAAJXZ @ 0x1C001064C (-NotifyDevicePowerDown@FxPoxInterface@@QEAAJXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredNoWake(FxPkgPnp *This)
{
  if ( FxPoxInterface::NotifyDevicePowerDown(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface) >= 0 )
    return FxPkgPnp::PowerPolicyCanIdlePowerDown(This, This->m_PowerPolicyMachine.m_Owner->m_IdleSettings.DxState) != 0
         ? 1472
         : 1416;
  _InterlockedCompareExchange(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface.m_DirectedTransitionActive, 0, 0);
  return 1426LL;
}
