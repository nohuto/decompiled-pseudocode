/*
 * XREFs of ?PowerGotoDx@FxPkgPnp@@IEAAXXZ @ 0x1C00114C4
 * Callers:
 *     ?PowerGotoDxArmedForWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C000E090 (-PowerGotoDxArmedForWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0011B20 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C0012A54 (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?GetTargetDevicePowerStateFromPendingDevicePowerDownIrp@FxPkgPnp@@QEAA?AW4_WDF_POWER_DEVICE_STATE@@XZ @ 0x1C001BED8 (-GetTargetDevicePowerStateFromPendingDevicePowerDownIrp@FxPkgPnp@@QEAA-AW4_WDF_POWER_DEVICE_STAT.c)
 *     ?Suspend@FxSelfManagedIoMachine@@QEAAJW4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C001C5C8 (-Suspend@FxSelfManagedIoMachine@@QEAAJW4_WDF_POWER_DEVICE_STATE@@@Z.c)
 */

void __fastcall FxPkgPnp::PowerGotoDx(FxPkgPnp *this)
{
  _WDF_POWER_DEVICE_STATE TargetDevicePowerStateFromPendingDevicePowerDownIrp; // eax
  FxSelfManagedIoMachine *v3; // r11
  int _a1; // eax
  unsigned __int8 v5; // r8

  if ( this->m_SelfManagedIoMachine )
  {
    TargetDevicePowerStateFromPendingDevicePowerDownIrp = FxPkgPnp::GetTargetDevicePowerStateFromPendingDevicePowerDownIrp(this);
    _a1 = FxSelfManagedIoMachine::Suspend(v3, TargetDevicePowerStateFromPendingDevicePowerDownIrp);
    if ( _a1 < 0 )
    {
      WPP_IFR_SF_d(this->m_Globals, 2u, 0xCu, 0x15u, WPP_PowerStateMachine_cpp_Traceguids, _a1);
      this->m_PowerMachine.m_IoCallbackFailure = 1;
    }
  }
  FxPkgIo::StopProcessingForPower(
    (FxPkgIo *)this->m_DeviceBase[3].m_ChildListHead.Blink,
    FxIoStopProcessingForPowerHold);
  FxPkgPnp::PowerPolicyProcessEvent(this, PwrPolPowerDownIoStopped, v5);
}
