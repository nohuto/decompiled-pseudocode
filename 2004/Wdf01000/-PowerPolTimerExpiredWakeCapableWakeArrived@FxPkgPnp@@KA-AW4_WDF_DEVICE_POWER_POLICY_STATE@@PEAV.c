/*
 * XREFs of ?PowerPolTimerExpiredWakeCapableWakeArrived@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0087F40
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1C00019B8 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C0011740 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     ?GetHandle@FxDeviceBase@@QEAAPEAUWDFDEVICE__@@XZ @ 0x1C001B0CC (-GetHandle@FxDeviceBase@@QEAAPEAUWDFDEVICE__@@XZ.c)
 *     ?Invoke@FxPowerDeviceArmWakeFromS0@@QEAAJPEAUWDFDEVICE__@@PEAW4FxCxCallbackProgress@@@Z @ 0x1C001B984 (-Invoke@FxPowerDeviceArmWakeFromS0@@QEAAJPEAUWDFDEVICE__@@PEAW4FxCxCallbackProgress@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredWakeCapableWakeArrived(FxPkgPnp *This)
{
  WDFDEVICE__ *Handle; // rax
  int v3; // eax
  FxDevice *m_Device; // rcx
  WDFDEVICE__ *_a1; // rax
  unsigned int _a2; // edx
  WDFDEVICE__ *v8; // rax
  unsigned int v9; // edx
  unsigned __int16 v10; // r9
  FxCxCallbackProgress progress; // [rsp+50h] [rbp+8h] BYREF

  progress = FxCxCallbackProgressInitialized;
  Handle = FxDeviceBase::GetHandle(This->m_DeviceBase);
  v3 = FxPowerDeviceArmWakeFromS0::Invoke(&This->m_PowerPolicyMachine.m_Owner->m_DeviceArmWakeFromS0, Handle, &progress);
  m_Device = This->m_Device;
  if ( v3 < 0 )
  {
    if ( progress == FxCxCallbackProgressClientSucceeded )
    {
      _a1 = FxDeviceBase::GetHandle(m_Device);
      WPP_IFR_SF_qL(This->m_Globals, 2u, 0xCu, 0x22u, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1, _a2);
      return 1467LL;
    }
    v8 = FxDeviceBase::GetHandle(m_Device);
    v10 = 35;
    goto LABEL_5;
  }
  if ( FxDevice::IsPdo(m_Device) && This->PowerEnableWakeAtBusOverload(This) < 0 )
  {
    v8 = FxDeviceBase::GetHandle(This->m_DeviceBase);
    v10 = 36;
LABEL_5:
    WPP_IFR_SF_qL(This->m_Globals, 2u, 0xCu, v10, WPP_PowerPolicyStateMachine_cpp_Traceguids, v8, v9);
    return 1335LL;
  }
  FxPkgPnp::PowerProcessEvent(This, 0x1000u, 0);
  return 1472LL;
}
