/*
 * XREFs of ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x1C0016F18
 * Callers:
 *     ?PowerWaking@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0017DC0 (-PowerWaking@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?Restarting@FxSelfManagedIoMachine@@KA?AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgress@@@Z @ 0x1C00192A0 (-Restarting@FxSelfManagedIoMachine@@KA-AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProg.c)
 *     ?PowerWakingNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C001A0D0 (-PowerWakingNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?Invoke@FxPowerDeviceArmWakeFromS0@@QEAAJPEAUWDFDEVICE__@@PEAW4FxCxCallbackProgress@@@Z @ 0x1C001B8D4 (-Invoke@FxPowerDeviceArmWakeFromS0@@QEAAJPEAUWDFDEVICE__@@PEAW4FxCxCallbackProgress@@@Z.c)
 *     ?Invoke@FxPowerDeviceArmWakeFromSx@@QEAAJPEAUWDFDEVICE__@@EEPEAW4FxCxCallbackProgress@@@Z @ 0x1C001B8F8 (-Invoke@FxPowerDeviceArmWakeFromSx@@QEAAJPEAUWDFDEVICE__@@EEPEAW4FxCxCallbackProgress@@@Z.c)
 *     ?PowerD0StartingPostHardwareEnabled@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C001BEB0 (-PowerD0StartingPostHardwareEnabled@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerWakingPostHardwareEnabledCommon@FxPkgPnp@@IEAA?AW4_WDF_DEVICE_POWER_STATE@@E@Z @ 0x1C001C2F8 (-PowerWakingPostHardwareEnabledCommon@FxPkgPnp@@IEAA-AW4_WDF_DEVICE_POWER_STATE@@E@Z.c)
 *     ?PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z @ 0x1C007B148 (-PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z.c)
 *     ?PowerD0Starting@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C007CDC0 (-PowerD0Starting@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?Init@FxSelfManagedIoMachine@@KA?AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgress@@@Z @ 0x1C008AA50 (-Init@FxSelfManagedIoMachine@@KA-AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgress@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ?IssueCleanupCxCallbacks@FxPrePostCallback@@QEAAXPEAVFxDevice@@@Z @ 0x1C008519C (-IssueCleanupCxCallbacks@FxPrePostCallback@@QEAAXPEAVFxDevice@@@Z.c)
 *     ?IssuePostCxCallbacks@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1C0085218 (-IssuePostCxCallbacks@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z.c)
 *     ?IssuePreCxCallbacksStateful@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1C00852B8 (-IssuePreCxCallbacksStateful@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z.c)
 */

__int64 __fastcall FxPrePostCallback::InvokeStateful(
        FxPrePostCallback *this,
        FxCxCallbackProgress *Progress,
        FxCxCallbackCleanupAction CleanupAction)
{
  FxCxCallbackProgress v4; // di
  int v7; // esi
  FxDevice *m_Device; // rbp
  FxPrePostCallback *v9; // rcx

  v4 = FxCxCallbackProgressInitialized;
  if ( this->m_PkgPnp->m_CompanionTarget )
  {
    v7 = ((__int64 (__fastcall *)(FxPrePostCallback *))this->InvokeCompanionCallback)(this);
    if ( v7 < 0 )
      goto $exit;
  }
  m_Device = this->m_PkgPnp->m_Device;
  if ( m_Device->m_CxDeviceInfoListHead.Flink == &m_Device->m_CxDeviceInfoListHead )
  {
    v7 = this->InvokeClient(this);
    v4 = FxCxCallbackProgressClientCalled;
    if ( v7 >= 0 )
      v4 = FxCxCallbackProgressClientSucceeded;
    goto $exit;
  }
  v7 = FxPrePostCallback::IssuePreCxCallbacksStateful(this, this->m_PkgPnp->m_Device);
  v9 = this;
  if ( v7 < 0 )
  {
LABEL_11:
    FxPrePostCallback::IssueCleanupCxCallbacks(v9, m_Device);
    goto $exit;
  }
  v7 = this->InvokeClient(this);
  v4 = FxCxCallbackProgressClientCalled;
  if ( v7 >= 0 )
  {
    v4 = FxCxCallbackProgressClientSucceeded;
    v7 = FxPrePostCallback::IssuePostCxCallbacks(this, m_Device);
    goto $exit;
  }
  if ( CleanupAction == FxCxCleanupAfterPreOrClientFailure )
  {
    v9 = this;
    goto LABEL_11;
  }
$exit:
  if ( Progress )
    *Progress = v4;
  return (unsigned int)v7;
}
