/*
 * XREFs of ?PowerPolSystemWakeDeviceToD0CompletePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0010BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?SimulateDevicePowerRequired@FxPoxInterface@@QEAAXXZ @ 0x1C0010394 (-SimulateDevicePowerRequired@FxPoxInterface@@QEAAXXZ.c)
 *     ?DeviceIsPoweredOn@FxPoxInterface@@QEAAXXZ @ 0x1C0010494 (-DeviceIsPoweredOn@FxPoxInterface@@QEAAXXZ.c)
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C0011530 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     ?Feature_Servicing_WdfPowerMgmtFixes__private_IsEnabled@@YAHXZ @ 0x1C001C824 (-Feature_Servicing_WdfPowerMgmtFixes__private_IsEnabled@@YAHXZ.c)
 *     ?SimulateDevicePowerRequiredForS0@FxPowerPolicyMachine@@QEAAXXZ @ 0x1C001CC0C (-SimulateDevicePowerRequiredForS0@FxPowerPolicyMachine@@QEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSystemWakeDeviceToD0CompletePowerUp(FxPkgPnp *This)
{
  if ( Feature_Servicing_WdfPowerMgmtFixes__private_IsEnabled() )
    FxPowerPolicyMachine::SimulateDevicePowerRequiredForS0(&This->m_PowerPolicyMachine);
  else
    FxPoxInterface::SimulateDevicePowerRequired(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  FxPoxInterface::DeviceIsPoweredOn(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  FxPkgPnp::PowerProcessEvent(This, PowerCompleteD0, 0);
  return 1472LL;
}
