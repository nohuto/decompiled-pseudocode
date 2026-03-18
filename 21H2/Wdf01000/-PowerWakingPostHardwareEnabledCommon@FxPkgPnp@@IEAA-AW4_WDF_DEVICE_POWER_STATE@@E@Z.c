/*
 * XREFs of ?PowerWakingPostHardwareEnabledCommon@FxPkgPnp@@IEAA?AW4_WDF_DEVICE_POWER_STATE@@E@Z @ 0x1C000D8A8
 * Callers:
 *     ?PowerWakingPostHardwareEnabledNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C000D870 (-PowerWakingPostHardwareEnabledNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerWakingPostHardwareEnabled@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C000D890 (-PowerWakingPostHardwareEnabled@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x1C001120C (-InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0015C14 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     WPP_IFR_SF_qqLd @ 0x1C0077C28 (WPP_IFR_SF_qqLd.c)
 */

__int64 __fastcall FxPkgPnp::PowerWakingPostHardwareEnabledCommon(FxPkgPnp *this, unsigned __int8 NonPageable)
{
  unsigned __int64 ObjectHandleUnchecked; // rax
  int v5; // r8d
  __int64 v6; // r9
  int v7; // eax
  const void *_a2; // rax
  __int64 v10; // rdx
  int globals; // r8d
  FxCxCallbackProgress progress; // [rsp+60h] [rbp+8h] BYREF

  progress = FxCxCallbackProgressInitialized;
  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  *(_DWORD *)(v6 + 32) = v5;
  *(_QWORD *)(v6 + 24) = ObjectHandleUnchecked;
  v7 = FxPrePostCallback::InvokeStateful((FxPrePostCallback *)v6, &progress, FxCxCleanupAfterPreFailure);
  if ( v7 < 0 )
  {
    _a2 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_qqLd(
      this->m_Globals,
      v10,
      0xCu,
      0x1Du,
      WPP_PowerStateMachine_cpp_Traceguids,
      _a2,
      *(const void **)(v10 + 144),
      this->m_DevicePowerState,
      globals);
    if ( progress )
      return NonPageable != 0 ? 33638 : 869;
    else
      return NonPageable != 0 ? 33596 : 827;
  }
  else
  {
    FxPkgPnp::PowerPolicyProcessEvent(this, PwrPolPowerUpHwStarted, v7);
    return 873LL;
  }
}
