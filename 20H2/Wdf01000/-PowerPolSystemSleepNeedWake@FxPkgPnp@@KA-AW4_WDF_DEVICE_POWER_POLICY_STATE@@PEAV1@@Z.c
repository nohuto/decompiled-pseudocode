/*
 * XREFs of ?PowerPolSystemSleepNeedWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0086FD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ?DisableTimer@FxPowerIdleMachine@@QEAAEXZ @ 0x1C000E6A4 (-DisableTimer@FxPowerIdleMachine@@QEAAEXZ.c)
 *     ?PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestAction@@W4RequestDIrpReason@@@Z @ 0x1C001C6D0 (-PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestActi.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSystemSleepNeedWake(FxPkgPnp *This)
{
  int _a1; // eax

  FxPowerIdleMachine::DisableTimer(&This->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine);
  _a1 = FxPkgPnp::PowerPolicySendDevicePowerRequest(This, (POWER_STATE)1, Retry, 4u);
  if ( _a1 >= 0 )
    return 1472LL;
  WPP_IFR_SF_d(This->m_Globals, 3u, 0xCu, 0x16u, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1);
  return 1324LL;
}
