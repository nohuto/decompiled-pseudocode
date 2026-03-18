/*
 * XREFs of ?PowerPolSleepingWakeWakeArrivedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00867D0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1C00019B8 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?PowerPolicyGetCurrentWakeReason@FxPkgPnp@@QEAAKXZ @ 0x1C00105A8 (-PowerPolicyGetCurrentWakeReason@FxPkgPnp@@QEAAKXZ.c)
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C0011740 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     ?GetHandle@FxDeviceBase@@QEAAPEAUWDFDEVICE__@@XZ @ 0x1C001B0A4 (-GetHandle@FxDeviceBase@@QEAAPEAUWDFDEVICE__@@XZ.c)
 *     ?Invoke@FxPowerDeviceArmWakeFromSx@@QEAAJPEAUWDFDEVICE__@@EEPEAW4FxCxCallbackProgress@@@Z @ 0x1C001B8F8 (-Invoke@FxPowerDeviceArmWakeFromSx@@QEAAJPEAUWDFDEVICE__@@EEPEAW4FxCxCallbackProgress@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSleepingWakeWakeArrivedNP(FxPkgPnp *This)
{
  WDFDEVICE__ *Handle; // rax
  unsigned __int8 v3; // r8
  unsigned __int8 v4; // r9
  int v5; // eax
  FxDevice *m_Device; // rcx
  WDFDEVICE__ *_a1; // rax
  unsigned int _a2; // edx
  WDFDEVICE__ *v10; // rax
  unsigned int v11; // edx
  unsigned __int16 v12; // r9
  FxCxCallbackProgress progress; // [rsp+50h] [rbp+8h] BYREF

  progress = FxCxCallbackProgressInitialized;
  FxPkgPnp::PowerPolicyGetCurrentWakeReason(This);
  Handle = FxDeviceBase::GetHandle(This->m_DeviceBase);
  v5 = FxPowerDeviceArmWakeFromSx::Invoke(
         &This->m_PowerPolicyMachine.m_Owner->m_DeviceArmWakeFromSx,
         Handle,
         v3,
         v4,
         &progress);
  m_Device = This->m_Device;
  if ( v5 < 0 )
  {
    if ( progress == FxCxCallbackProgressInitialized )
    {
      _a1 = FxDeviceBase::GetHandle(m_Device);
      WPP_IFR_SF_qL(This->m_Globals, 2u, 0xCu, 0x1Bu, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1, _a2);
      return 34237LL;
    }
    v10 = FxDeviceBase::GetHandle(m_Device);
    v12 = 28;
    goto LABEL_5;
  }
  if ( FxDevice::IsPdo(m_Device) && This->PowerEnableWakeAtBusOverload(This) < 0 )
  {
    v10 = FxDeviceBase::GetHandle(This->m_DeviceBase);
    v12 = 29;
LABEL_5:
    WPP_IFR_SF_qL(This->m_Globals, 2u, 0xCu, v12, WPP_PowerPolicyStateMachine_cpp_Traceguids, v10, v11);
    return 34075LL;
  }
  FxPkgPnp::PowerProcessEvent(This, 0x1000u, 0);
  return 1472LL;
}
