/*
 * XREFs of ?PowerPolStoppingResetDevice@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0086D30
 * Callers:
 *     <none>
 * Callees:
 *     ?DisableTimer@FxPowerIdleMachine@@QEAAEXZ @ 0x1C000E6A4 (-DisableTimer@FxPowerIdleMachine@@QEAAEXZ.c)
 *     ?RequestComponentActive@FxPoxInterface@@QEAAXXZ @ 0x1C000E934 (-RequestComponentActive@FxPoxInterface@@QEAAXXZ.c)
 *     ?PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestAction@@W4RequestDIrpReason@@@Z @ 0x1C001C6D0 (-PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestActi.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolStoppingResetDevice(FxPkgPnp *This)
{
  int v2; // eax
  unsigned int v3; // ecx

  FxPoxInterface::RequestComponentActive(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  FxPowerIdleMachine::DisableTimer(&This->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine);
  v2 = FxPkgPnp::PowerPolicySendDevicePowerRequest(This, (POWER_STATE)1, Retry, 0xAu);
  v3 = 1472;
  if ( v2 < 0 )
    return 1389;
  return v3;
}
