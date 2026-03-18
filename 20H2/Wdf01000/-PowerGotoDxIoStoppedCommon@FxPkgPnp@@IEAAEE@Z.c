/*
 * XREFs of ?PowerGotoDxIoStoppedCommon@FxPkgPnp@@IEAAEE@Z @ 0x1C001C05C
 * Callers:
 *     ?PowerGotoDNotZeroIoStoppedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C000E3F0 (-PowerGotoDNotZeroIoStoppedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDNotZeroIoStopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0011390 (-PowerGotoDNotZeroIoStopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDxIoStoppedArmedForWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C007D490 (-PowerGotoDxIoStoppedArmedForWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDxIoStoppedArmedForWakeNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C007D4C0 (-PowerGotoDxIoStoppedArmedForWakeNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z @ 0x1C00047E4 (-PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z.c)
 *     ?NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z @ 0x1C000483C (-NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z.c)
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x1C0004BD4 (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 *     ?Invoke@FxPnpDeviceD0ExitPreInterruptsDisabled@@QEAAJPEAUWDFDEVICE__@@W4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C0004DC8 (-Invoke@FxPnpDeviceD0ExitPreInterruptsDisabled@@QEAAJPEAUWDFDEVICE__@@W4_WDF_POWER_DEVICE_STATE@.c)
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C0010BF4 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 *     ?PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C00113B4 (-PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z.c)
 *     ?GetTargetDevicePowerStateFromPendingDevicePowerDownIrp@FxPkgPnp@@QEAA?AW4_WDF_POWER_DEVICE_STATE@@XZ @ 0x1C001BE28 (-GetTargetDevicePowerStateFromPendingDevicePowerDownIrp@FxPkgPnp@@QEAA-AW4_WDF_POWER_DEVICE_STAT.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qqLd @ 0x1C0069E6C (WPP_IFR_SF_qqLd.c)
 */

unsigned __int8 __fastcall FxPkgPnp::PowerGotoDxIoStoppedCommon(FxPkgPnp *this, unsigned __int8 NonPageable)
{
  char v4; // bl
  unsigned int _a4; // esi
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 v7; // r8
  const void *_a2; // rax
  __int64 v9; // rdx
  int globals; // r8d
  WDFDEVICE__ *v11; // rax
  const void *v12; // rax
  __int64 v13; // rdx
  int v14; // r10d
  unsigned int v15; // edx
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int8 v18; // r8
  __int64 v20; // rdx

  v4 = 0;
  _a4 = FxPkgPnp::GetTargetDevicePowerStateFromPendingDevicePowerDownIrp(this);
  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  *(_QWORD *)(v7 + 24) = ObjectHandleUnchecked;
  *(_DWORD *)(v7 + 32) = _a4;
  if ( (int)FxPrePostCallback::InvokeStateless((FxPrePostCallback *)v7) < 0 )
  {
    v4 = 1;
    _a2 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_qqLd(
      this->m_Globals,
      v9,
      0xCu,
      0x16u,
      WPP_PowerStateMachine_cpp_Traceguids,
      _a2,
      *(const void **)(v9 + 144),
      _a4,
      globals);
  }
  if ( !FxPkgPnp::PowerDmaPowerDown(this) )
    v4 = 1;
  v11 = (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  if ( (int)FxPnpDeviceD0ExitPreInterruptsDisabled::Invoke(&this->m_DeviceD0ExitPreInterruptsDisabled, v11, _a4) < 0 )
  {
    v4 = 1;
    v12 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_qqLd(
      this->m_Globals,
      v13,
      0xCu,
      0x17u,
      WPP_PowerStateMachine_cpp_Traceguids,
      v12,
      *(const void **)(v13 + 144),
      _a4,
      v14);
  }
  if ( NonPageable )
  {
    v15 = 1;
  }
  else
  {
    v15 = 16;
    if ( this->m_SharedPower.m_WaitWakeIrp || this->m_WakeInterruptsKeepConnected == 1 )
    {
      v15 = 80;
      this->m_WakeInterruptsKeepConnected = 0;
    }
  }
  if ( (int)FxPkgPnp::NotifyResourceObjectsDx(this, v15) < 0 )
    v4 = 1;
  v16 = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  *(_QWORD *)(v17 + 32) = v16;
  *(_DWORD *)(v17 + 40) = _a4;
  if ( (int)FxPrePostCallback::InvokeStateless((FxPrePostCallback *)v17) < 0 )
    v4 = 1;
  this->PowerParentPowerDereference(this);
  FxPkgPnp::PowerSetDevicePowerState(this, _a4);
  if ( this->m_PowerMachine.m_IoCallbackFailure )
  {
    this->m_PowerMachine.m_IoCallbackFailure = 0;
    v4 = 1;
  }
  if ( v4 )
  {
    this->m_PowerMachine.m_PowerDownFailure = 1;
    return 0;
  }
  else
  {
    FxPkgPnp::PowerSendPowerDownEvents(this, FxPowerDownTypeExplicit, v18);
    LOBYTE(v20) = 1;
    this->PowerReleasePendingDeviceIrp(this, v20);
    return 1;
  }
}
