/*
 * XREFs of ?PowerGotoD3Stopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0086BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z @ 0x1C000D138 (-PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z.c)
 *     ?NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z @ 0x1C000D17C (-NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z.c)
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x1C000D200 (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C000D528 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C000F808 (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C0012A38 (-PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z.c)
 *     ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@Z @ 0x1C0018474 (-ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qqLd @ 0x1C0077C28 (WPP_IFR_SF_qqLd.c)
 */

__int64 __fastcall FxPkgPnp::PowerGotoD3Stopped(FxPkgPnp *This)
{
  char v2; // bl
  FxSelfManagedIoMachine *m_SelfManagedIoMachine; // rcx
  int _a1; // eax
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 v6; // rdx
  const void *v7; // rax
  __int64 v8; // rdx
  int v9; // r8d
  unsigned __int64 v10; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, _WDF_POWER_DEVICE_STATE); // rax
  const void *v12; // rax
  __int64 v13; // rdx
  int v14; // r10d
  unsigned __int64 v15; // rax
  __int64 v16; // r8
  unsigned __int8 v17; // r8

  v2 = 0;
  m_SelfManagedIoMachine = This->m_SelfManagedIoMachine;
  if ( m_SelfManagedIoMachine )
  {
    m_SelfManagedIoMachine->m_DeviceSelfManagedIoSuspend.m_TargetState = WdfPowerDeviceD3Final;
    _a1 = FxSelfManagedIoMachine::ProcessEvent(m_SelfManagedIoMachine, (_FX_DRIVER_GLOBALS *)4, 0LL);
    if ( _a1 < 0 )
    {
      WPP_IFR_SF_d(This->m_Globals, 2u, 0xCu, 0x11u, WPP_PowerStateMachine_cpp_Traceguids, _a1);
      v2 = 1;
    }
  }
  FxPkgIo::StopProcessingForPower(
    (FxPkgIo *)This->m_DeviceBase[3].m_ChildListHead.Blink,
    FxIoStopProcessingForPowerHold);
  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
  *(_QWORD *)(v6 + 24) = ObjectHandleUnchecked;
  *(_DWORD *)(v6 + 32) = 5;
  if ( (int)FxPrePostCallback::InvokeStateless((FxPrePostCallback *)v6) < 0 )
  {
    v2 = 1;
    v7 = (const void *)FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
    WPP_IFR_SF_qqLd(
      This->m_Globals,
      v8,
      0xCu,
      0x12u,
      WPP_PowerStateMachine_cpp_Traceguids,
      v7,
      *(const void **)(v8 + 144),
      5u,
      v9);
  }
  if ( !FxPkgPnp::PowerDmaPowerDown(This) )
    v2 = 1;
  v10 = FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
  m_Method = This->m_DeviceD0ExitPreInterruptsDisabled.m_Method;
  if ( m_Method && m_Method((WDFDEVICE__ *)v10, WdfPowerDeviceD3Final) < 0 )
  {
    v2 = 1;
    v12 = (const void *)FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
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
  v15 = FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
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
