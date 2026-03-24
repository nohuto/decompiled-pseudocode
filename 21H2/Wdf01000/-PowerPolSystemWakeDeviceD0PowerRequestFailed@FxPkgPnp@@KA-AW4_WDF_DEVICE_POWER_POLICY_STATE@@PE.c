/*
 * XREFs of ?PowerPolSystemWakeDeviceD0PowerRequestFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C001C8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SimulateDevicePowerRequired@FxPoxInterface@@QEAAXXZ @ 0x1C0010394 (-SimulateDevicePowerRequired@FxPoxInterface@@QEAAXXZ.c)
 *     ?Feature_Servicing_WdfPowerMgmtFixes__private_IsEnabled@@YAHXZ @ 0x1C001C824 (-Feature_Servicing_WdfPowerMgmtFixes__private_IsEnabled@@YAHXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSystemWakeDeviceD0PowerRequestFailed(FxPkgPnp *This)
{
  Feature_Servicing_WdfPowerMgmtFixes__private_IsEnabled();
  FxPoxInterface::SimulateDevicePowerRequired(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  return 1389LL;
}
