/*
 * XREFs of ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C000D528
 * Callers:
 *     ?PowerGotoDxIoStoppedCommon@FxPkgPnp@@IEAAEE@Z @ 0x1C000CFC0 (-PowerGotoDxIoStoppedCommon@FxPkgPnp@@IEAAEE@Z.c)
 *     ?Suspending@FxSelfManagedIoMachine@@KA?AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgress@@@Z @ 0x1C000EBF0 (-Suspending@FxSelfManagedIoMachine@@KA-AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProg.c)
 *     ?PnpEventFailedSurpriseRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0083EE0 (-PnpEventFailedSurpriseRemoved@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventRemovedPdoSurpriseRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0084870 (-PnpEventRemovedPdoSurpriseRemoved@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventSurpriseRemoveIoStarted@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0084B20 (-PnpEventSurpriseRemoveIoStarted@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventSurpriseRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0084BE0 (-PnpEventSurpriseRemoved@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpReleaseHardware@FxPkgPnp@@IEAAJXZ @ 0x1C0084F24 (-PnpReleaseHardware@FxPkgPnp@@IEAAJXZ.c)
 *     ?PowerConnectInterruptFailed@FxPkgPnp@@IEAAXXZ @ 0x1C00867CC (-PowerConnectInterruptFailed@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerGotoD3Stopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0086BA0 (-PowerGotoD3Stopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerInitialPostHardwareEnabledFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0087010 (-PowerInitialPostHardwareEnabledFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerInitialPowerUpFailedPowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C00870F0 (-PowerInitialPowerUpFailedPowerDown@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerUpFailedPowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C00876F0 (-PowerUpFailedPowerDown@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerUpFailedPowerDownNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0087730 (-PowerUpFailedPowerDownNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerWakingPostHardwareEnabledFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0087960 (-PowerWakingPostHardwareEnabledFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerWakingPostHardwareEnabledFailedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C00879F0 (-PowerWakingPostHardwareEnabledFailedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerPolDisarmingWakeForSystemSleepCompletePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008ABD0 (-PowerPolDisarmingWakeForSystemSleepCompletePowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STA.c)
 *     ?PowerPolS0WakeDisarm@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008AE20 (-PowerPolS0WakeDisarm@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStoppingDisarmWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008B780 (-PowerPolStoppingDisarmWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSystemWakeDeviceWokeDisarm@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008BBA0 (-PowerPolSystemWakeDeviceWokeDisarm@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolTimerExpiredWakeCapableRevertArmWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008BF60 (-PowerPolTimerExpiredWakeCapableRevertArmWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PE.c)
 *     ?PowerPolTimerExpiredWakeCompletedDisarm@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008C290 (-PowerPolTimerExpiredWakeCompletedDisarm@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@.c)
 *     ?PowerPolTimerExpiredWakeSucceeded@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008C3E0 (-PowerPolTimerExpiredWakeSucceeded@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolWokeFromS0NotifyDriver@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008C770 (-PowerPolWokeFromS0NotifyDriver@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ @ 0x1C008C974 (-PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ.c)
 *     ?Cleanup@FxSelfManagedIoMachine@@KA?AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgress@@@Z @ 0x1C008DF40 (-Cleanup@FxSelfManagedIoMachine@@KA-AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgres.c)
 *     ?Flushing@FxSelfManagedIoMachine@@KA?AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgress@@@Z @ 0x1C008DF80 (-Flushing@FxSelfManagedIoMachine@@KA-AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgre.c)
 *     ?InitStartedFailedPost@FxSelfManagedIoMachine@@KA?AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgress@@@Z @ 0x1C008DFC0 (-InitStartedFailedPost@FxSelfManagedIoMachine@@KA-AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxC.c)
 *     ?RestartedFailedPost@FxSelfManagedIoMachine@@KA?AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgress@@@Z @ 0x1C008E000 (-RestartedFailedPost@FxSelfManagedIoMachine@@KA-AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?IssuePreCxCallbacksStateless@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1C00398CE (-IssuePreCxCallbacksStateless@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z.c)
 *     ?IssuePostCxCallbacks@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1C008A270 (-IssuePostCxCallbacks@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z.c)
 */

__int64 __fastcall FxPrePostCallback::InvokeStateless(FxPrePostCallback *this)
{
  FxDevice *m_Device; // rsi
  int v3; // edi
  int v5; // eax
  int v6; // eax
  unsigned int v7; // eax

  m_Device = this->m_PkgPnp->m_Device;
  if ( m_Device->m_CxDeviceInfoListHead.Flink == &m_Device->m_CxDeviceInfoListHead )
  {
    v3 = this->InvokeClient(this);
  }
  else
  {
    v3 = FxPrePostCallback::IssuePreCxCallbacksStateless(this, this->m_PkgPnp->m_Device);
    v5 = this->InvokeClient(this);
    if ( v3 >= 0 )
      v3 = v5;
    v6 = FxPrePostCallback::IssuePostCxCallbacks(this, m_Device);
    if ( v3 >= 0 )
      v3 = v6;
  }
  if ( this->m_PkgPnp->m_CompanionTarget )
  {
    v7 = ((__int64 (__fastcall *)(FxPrePostCallback *))this->InvokeCompanionCallback)(this);
    if ( v3 >= 0 )
      return v7;
  }
  return (unsigned int)v3;
}
