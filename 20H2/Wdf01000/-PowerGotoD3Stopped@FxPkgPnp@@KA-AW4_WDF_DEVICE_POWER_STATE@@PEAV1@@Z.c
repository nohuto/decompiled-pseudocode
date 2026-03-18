/*
 * XREFs of ?PowerGotoD3Stopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C007D280
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z @ 0x1C00047E4 (-PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z.c)
 *     ?NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z @ 0x1C000483C (-NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z.c)
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x1C0004BD4 (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C0010BF4 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 *     ?PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C00113B4 (-PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z.c)
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C0012A54 (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?GetHandle@FxDeviceBase@@QEAAPEAUWDFDEVICE__@@XZ @ 0x1C001B0A4 (-GetHandle@FxDeviceBase@@QEAAPEAUWDFDEVICE__@@XZ.c)
 *     ?Invoke@FxPnpDeviceD0ExitPreHwDisabled@@QEAAJPEAUWDFDEVICE__@@W4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C001BE88 (-Invoke@FxPnpDeviceD0ExitPreHwDisabled@@QEAAJPEAUWDFDEVICE__@@W4_WDF_POWER_DEVICE_STATE@@@Z.c)
 *     ?Suspend@FxSelfManagedIoMachine@@QEAAJW4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C001C518 (-Suspend@FxSelfManagedIoMachine@@QEAAJW4_WDF_POWER_DEVICE_STATE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qqLd @ 0x1C0069E6C (WPP_IFR_SF_qqLd.c)
 */

__int64 __fastcall FxPkgPnp::PowerGotoD3Stopped(FxPkgPnp *This)
{
  char v2; // bl
  FxSelfManagedIoMachine *m_SelfManagedIoMachine; // rcx
  int _a1; // eax
  WDFDEVICE__ *Handle; // rax
  WDFDEVICE__ *v6; // rax
  __int64 v7; // rdx
  int v8; // r8d
  WDFDEVICE__ *v9; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, _WDF_POWER_DEVICE_STATE); // rax
  int v11; // r8d
  WDFDEVICE__ *v12; // rax
  __int64 v13; // rdx
  int v14; // r8d
  WDFDEVICE__ *v15; // rax
  __int64 v16; // r8
  unsigned __int8 v17; // r8

  v2 = 0;
  m_SelfManagedIoMachine = This->m_SelfManagedIoMachine;
  if ( m_SelfManagedIoMachine )
  {
    _a1 = FxSelfManagedIoMachine::Suspend(m_SelfManagedIoMachine, WdfPowerDeviceD3Final);
    if ( _a1 < 0 )
    {
      WPP_IFR_SF_d(This->m_Globals, 2u, 0xCu, 0x11u, WPP_PowerStateMachine_cpp_Traceguids, _a1);
      v2 = 1;
    }
  }
  FxPkgIo::StopProcessingForPower(
    (FxPkgIo *)This->m_DeviceBase[3].m_ChildListHead.Blink,
    FxIoStopProcessingForPowerHold);
  Handle = FxDeviceBase::GetHandle(This->m_DeviceBase);
  if ( (int)FxPnpDeviceD0ExitPreHwDisabled::Invoke(
              &This->m_DeviceD0ExitPreHardwareDisabled,
              Handle,
              WdfPowerDeviceD3Final) < 0 )
  {
    v2 = 1;
    v6 = FxDeviceBase::GetHandle(This->m_DeviceBase);
    WPP_IFR_SF_qqLd(
      This->m_Globals,
      v7,
      0xCu,
      0x12u,
      WPP_PowerStateMachine_cpp_Traceguids,
      v6,
      *(const void **)(v7 + 144),
      5u,
      v8);
  }
  if ( !FxPkgPnp::PowerDmaPowerDown(This) )
    v2 = 1;
  v9 = FxDeviceBase::GetHandle(This->m_DeviceBase);
  m_Method = This->m_DeviceD0ExitPreInterruptsDisabled.m_Method;
  if ( m_Method )
    v11 = m_Method(v9, WdfPowerDeviceD3Final);
  else
    v11 = 0;
  if ( v11 < 0 )
  {
    v2 = 1;
    v12 = FxDeviceBase::GetHandle(This->m_DeviceBase);
    WPP_IFR_SF_qqLd(
      This->m_Globals,
      v13,
      0xCu,
      0x13u,
      WPP_PowerStateMachine_cpp_Traceguids,
      v12,
      *(const void **)(v13 + 144),
      5u,
      v14);
  }
  if ( (int)FxPkgPnp::NotifyResourceObjectsDx(This, 4u) < 0 )
    v2 = 1;
  v15 = FxDeviceBase::GetHandle(This->m_DeviceBase);
  *(_QWORD *)(v16 + 32) = v15;
  *(_DWORD *)(v16 + 40) = 5;
  if ( (int)FxPrePostCallback::InvokeStateless((FxPrePostCallback *)v16) < 0 )
    v2 = 1;
  FxPkgPnp::PowerSetDevicePowerState(This, 5);
  This->PowerParentPowerDereference(This);
  if ( v2 )
    return 848LL;
  FxPkgPnp::PowerSendPowerDownEvents(This, FxPowerDownTypeImplicit, v17);
  return 789LL;
}
