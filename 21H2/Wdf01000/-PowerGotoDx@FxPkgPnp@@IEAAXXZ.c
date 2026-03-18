/*
 * XREFs of ?PowerGotoDx@FxPkgPnp@@IEAAXXZ @ 0x1C000F798
 * Callers:
 *     ?PowerGotoDxArmedForWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C000F550 (-PowerGotoDxArmedForWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?GetTargetDevicePowerStateFromPendingDevicePowerDownIrp@FxPkgPnp@@QEAA?AW4_WDF_POWER_DEVICE_STATE@@XZ @ 0x1C000D280 (-GetTargetDevicePowerStateFromPendingDevicePowerDownIrp@FxPkgPnp@@QEAA-AW4_WDF_POWER_DEVICE_STAT.c)
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C000F808 (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0015C14 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@Z @ 0x1C0018474 (-ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 */

void __fastcall FxPkgPnp::PowerGotoDx(FxPkgPnp *this)
{
  FxSelfManagedIoMachine *m_SelfManagedIoMachine; // rdi
  unsigned __int8 v3; // r8
  int _a1; // eax

  m_SelfManagedIoMachine = this->m_SelfManagedIoMachine;
  if ( m_SelfManagedIoMachine )
  {
    m_SelfManagedIoMachine->m_DeviceSelfManagedIoSuspend.m_TargetState = FxPkgPnp::GetTargetDevicePowerStateFromPendingDevicePowerDownIrp(this);
    _a1 = FxSelfManagedIoMachine::ProcessEvent(m_SelfManagedIoMachine, SelfManagedIoEventSuspend, 0LL);
    if ( _a1 < 0 )
    {
      WPP_IFR_SF_d(this->m_Globals, 2u, 0xCu, 0x15u, WPP_PowerStateMachine_cpp_Traceguids, _a1);
      this->m_PowerMachine.m_IoCallbackFailure = 1;
    }
  }
  FxPkgIo::StopProcessingForPower(
    (FxPkgIo *)this->m_DeviceBase[3].m_ChildListHead.Blink,
    FxIoStopProcessingForPowerHold);
  FxPkgPnp::PowerPolicyProcessEvent(this, PwrPolPowerDownIoStopped, v3);
}
