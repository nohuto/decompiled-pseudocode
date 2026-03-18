/*
 * XREFs of ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x1C001120C
 * Callers:
 *     ?PowerWakingPostHardwareEnabledCommon@FxPkgPnp@@IEAA?AW4_WDF_DEVICE_POWER_STATE@@E@Z @ 0x1C000D8A8 (-PowerWakingPostHardwareEnabledCommon@FxPkgPnp@@IEAA-AW4_WDF_DEVICE_POWER_STATE@@E@Z.c)
 *     ?PowerWaking@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C000D920 (-PowerWaking@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?Restarting@FxSelfManagedIoMachine@@KA?AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgress@@@Z @ 0x1C000E860 (-Restarting@FxSelfManagedIoMachine@@KA-AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProg.c)
 *     ?PowerWakingNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C000F2B0 (-PowerWakingNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z @ 0x1C00217C0 (-PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z.c)
 *     ?PowerD0Starting@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C002FD50 (-PowerD0Starting@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerD0StartingPostHardwareEnabled@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0030D00 (-PowerD0StartingPostHardwareEnabled@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?Init@FxSelfManagedIoMachine@@KA?AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgress@@@Z @ 0x1C00331B0 (-Init@FxSelfManagedIoMachine@@KA-AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgress@@.c)
 *     ?PowerPolSleepingWakeWakeArrived@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008B120 (-PowerPolSleepingWakeWakeArrived@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSleepingWakeWakeArrivedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008B260 (-PowerPolSleepingWakeWakeArrivedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolTimerExpiredWakeCapableWakeArrived@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008C0B0 (-PowerPolTimerExpiredWakeCapableWakeArrived@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?IssueCleanupCxCallbacks@FxPrePostCallback@@QEAAXPEAVFxDevice@@@Z @ 0x1C008A1FC (-IssueCleanupCxCallbacks@FxPrePostCallback@@QEAAXPEAVFxDevice@@@Z.c)
 *     ?IssuePostCxCallbacks@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1C008A270 (-IssuePostCxCallbacks@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z.c)
 *     ?IssuePreCxCallbacksStateful@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1C008A2F8 (-IssuePreCxCallbacksStateful@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z.c)
 */

__int64 __fastcall FxPrePostCallback::InvokeStateful(
        FxPrePostCallback *this,
        FxCxCallbackProgress *Progress,
        FxCxCallbackCleanupAction CleanupAction)
{
  FxCxCallbackProgress v4; // di
  FxDevice *m_Device; // rbp
  int v8; // esi
  FxPrePostCallback *v10; // rcx

  v4 = FxCxCallbackProgressInitialized;
  if ( this->m_PkgPnp->m_CompanionTarget )
  {
    v8 = ((__int64 (__fastcall *)(FxPrePostCallback *))this->InvokeCompanionCallback)(this);
    if ( v8 < 0 )
      goto $exit;
  }
  m_Device = this->m_PkgPnp->m_Device;
  if ( m_Device->m_CxDeviceInfoListHead.Flink == &m_Device->m_CxDeviceInfoListHead )
  {
    v8 = this->InvokeClient(this);
    v4 = FxCxCallbackProgressClientCalled;
    if ( v8 >= 0 )
      v4 = FxCxCallbackProgressClientSucceeded;
    goto $exit;
  }
  v8 = FxPrePostCallback::IssuePreCxCallbacksStateful(this, this->m_PkgPnp->m_Device);
  v10 = this;
  if ( v8 < 0 )
  {
LABEL_15:
    FxPrePostCallback::IssueCleanupCxCallbacks(v10, m_Device);
    goto $exit;
  }
  v8 = this->InvokeClient(this);
  v4 = FxCxCallbackProgressClientCalled;
  if ( v8 >= 0 )
  {
    v4 = FxCxCallbackProgressClientSucceeded;
    v8 = FxPrePostCallback::IssuePostCxCallbacks(this, m_Device);
    goto $exit;
  }
  if ( CleanupAction == FxCxCleanupAfterPreOrClientFailure )
  {
    v10 = this;
    goto LABEL_15;
  }
$exit:
  if ( Progress )
    *Progress = v4;
  return (unsigned int)v8;
}
