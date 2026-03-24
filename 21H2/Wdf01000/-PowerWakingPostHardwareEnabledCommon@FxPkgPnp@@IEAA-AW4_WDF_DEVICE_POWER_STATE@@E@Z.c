/*
 * XREFs of ?PowerWakingPostHardwareEnabledCommon@FxPkgPnp@@IEAA?AW4_WDF_DEVICE_POWER_STATE@@E@Z @ 0x1C001C528
 * Callers:
 *     ?PowerWakingPostHardwareEnabled@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C001C510 (-PowerWakingPostHardwareEnabled@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerWakingPostHardwareEnabledNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C001C730 (-PowerWakingPostHardwareEnabledNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0011910 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x1C0016E78 (-InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@.c)
 *     WPP_IFR_SF_qqLd @ 0x1C006A7CC (WPP_IFR_SF_qqLd.c)
 */

__int64 __fastcall FxPkgPnp::PowerWakingPostHardwareEnabledCommon(FxPkgPnp *this, unsigned __int8 NonPageable)
{
  unsigned __int64 ObjectHandleUnchecked; // rax
  int v5; // r8d
  __int64 v6; // r9
  int v7; // eax
  const void *_a2; // rax
  __int64 v9; // rdx
  int globals; // r8d
  FxCxCallbackProgress progress; // [rsp+60h] [rbp+8h] BYREF

  progress = FxCxCallbackProgressInitialized;
  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  *(_DWORD *)(v6 + 32) = v5;
  *(_QWORD *)(v6 + 24) = ObjectHandleUnchecked;
  v7 = FxPrePostCallback::InvokeStateful((FxPrePostCallback *)v6, &progress, FxCxCleanupAfterPreFailure);
  if ( v7 >= 0 )
  {
    FxPkgPnp::PowerPolicyProcessEvent(this, PwrPolPowerUpHwStarted, v7);
    return 873LL;
  }
  else
  {
    _a2 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_qqLd(
      this->m_Globals,
      v9,
      0xCu,
      0x1Du,
      WPP_PowerStateMachine_cpp_Traceguids,
      _a2,
      *(const void **)(v9 + 144),
      this->m_DevicePowerState,
      globals);
    if ( progress )
      return NonPageable != 0 ? 33638 : 869;
    else
      return NonPageable != 0 ? 33596 : 827;
  }
}
