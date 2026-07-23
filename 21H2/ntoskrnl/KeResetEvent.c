/*
 * XREFs of KeResetEvent @ 0x140269BE0
 * Callers:
 *     MiIssueSynchronousFlush @ 0x14022D920 (MiIssueSynchronousFlush.c)
 *     PnpLockDeviceActionQueue @ 0x140245730 (PnpLockDeviceActionQueue.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140255630 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiRetryNonPagedAllocation @ 0x140262BDC (MiRetryNonPagedAllocation.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x14026EA80 (PopUpdateWatchdogNoWorkersEvent.c)
 *     PopFxIdleWorker @ 0x140282274 (PopFxIdleWorker.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140288840 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14028AD2C (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreHelperWaitForCommand @ 0x1402914CC (SmKmStoreHelperWaitForCommand.c)
 *     SmKmStoreHelperWorker @ 0x140291670 (SmKmStoreHelperWorker.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140292A20 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MmStoreFlushOutstandingEvictions @ 0x14029F2F8 (MmStoreFlushOutstandingEvictions.c)
 *     CcUnmapVacbArray @ 0x14031DBC0 (CcUnmapVacbArray.c)
 *     PnpRequestDeviceAction @ 0x1403703A4 (PnpRequestDeviceAction.c)
 *     ExUnregisterCallback @ 0x1403814C0 (ExUnregisterCallback.c)
 *     MiProcessDereferenceList @ 0x140387CBC (MiProcessDereferenceList.c)
 *     MiMarkSessionDeletePending @ 0x140389F00 (MiMarkSessionDeletePending.c)
 *     PopFxAllocatePowerIrp @ 0x140399B60 (PopFxAllocatePowerIrp.c)
 *     PopPepUpdateConstraints @ 0x1403A06BC (PopPepUpdateConstraints.c)
 *     MiQueueWorkingSetRequest @ 0x1403A5CA4 (MiQueueWorkingSetRequest.c)
 *     MiSignalNonPagedPoolWatchers @ 0x1403B62E8 (MiSignalNonPagedPoolWatchers.c)
 *     MiUpdateAvailableEvents @ 0x1403B6BB4 (MiUpdateAvailableEvents.c)
 *     MiDereferenceSegmentThread @ 0x1403BD5A0 (MiDereferenceSegmentThread.c)
 *     MiModifiedPageWriter @ 0x1403BF240 (MiModifiedPageWriter.c)
 *     MiSyncCommitSignals @ 0x1403BFD54 (MiSyncCommitSignals.c)
 *     MiStoreEvictThread @ 0x1403C1430 (MiStoreEvictThread.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403C8990 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     IopValidateAndGetWriteParameters @ 0x1403F2068 (IopValidateAndGetWriteParameters.c)
 *     MiWaitForFreePagesToZero @ 0x1405501CC (MiWaitForFreePagesToZero.c)
 *     MiWaitForAvailablePages @ 0x14055C2E4 (MiWaitForAvailablePages.c)
 *     MiWaitForFreePage @ 0x14055C43C (MiWaitForFreePage.c)
 *     MiDrainCrossPartitionUsage @ 0x1405622DC (MiDrainCrossPartitionUsage.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x14056B598 (PopFxIssueComponentPerfStateChanges.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x140576BF4 (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     EtwpCovSampCaptureContextStop @ 0x1405AEC8C (EtwpCovSampCaptureContextStop.c)
 *     sub_1405BF400 @ 0x1405BF400 (sub_1405BF400.c)
 *     WdtpTimerCallback @ 0x1405C6A00 (WdtpTimerCallback.c)
 *     NtCopyFileChunk @ 0x1405CDD80 (NtCopyFileChunk.c)
 *     IopReadFile @ 0x1405CE318 (IopReadFile.c)
 *     IopMountVolume @ 0x1405DB490 (IopMountVolume.c)
 *     CmUnloadKey @ 0x1405DF54C (CmUnloadKey.c)
 *     NtClearEvent @ 0x1405E83C0 (NtClearEvent.c)
 *     NtReadFileScatter @ 0x1405F9040 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1405F97E0 (NtWriteFileGather.c)
 *     IopCancelIrpsInThreadList @ 0x1405FCD98 (IopCancelIrpsInThreadList.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x14060CF80 (NtNotifyChangeDirectoryFileEx.c)
 *     EtwpSynchronizeWithLogger @ 0x14061839C (EtwpSynchronizeWithLogger.c)
 *     EtwpLogger @ 0x14063A500 (EtwpLogger.c)
 *     IopGetSetSecurityObject @ 0x140644580 (IopGetSetSecurityObject.c)
 *     BuildQueryDirectoryIrp @ 0x140644AD0 (BuildQueryDirectoryIrp.c)
 *     NtNotifyChangeMultipleKeys @ 0x140658050 (NtNotifyChangeMultipleKeys.c)
 *     CmpLockRegistryFreezeAware @ 0x140667920 (CmpLockRegistryFreezeAware.c)
 *     NtResetEvent @ 0x140675560 (NtResetEvent.c)
 *     IopQueryXxxInformation @ 0x140677FF8 (IopQueryXxxInformation.c)
 *     NtSetInformationJobObject @ 0x14067DE60 (NtSetInformationJobObject.c)
 *     EtwpStopTrace @ 0x1406B529C (EtwpStopTrace.c)
 *     sub_1406ECCA0 @ 0x1406ECCA0 (sub_1406ECCA0.c)
 *     CmpLinkHiveToMaster @ 0x1406F8338 (CmpLinkHiveToMaster.c)
 *     PnpInsertEventInQueue @ 0x1406FE94C (PnpInsertEventInQueue.c)
 *     IopXxxControlFile @ 0x1407153F0 (IopXxxControlFile.c)
 *     IopDeleteFile @ 0x14071AB40 (IopDeleteFile.c)
 *     NtLockFile @ 0x14071FB70 (NtLockFile.c)
 *     NtSetVolumeInformationFile @ 0x14076D330 (NtSetVolumeInformationFile.c)
 *     WmipCopyFromEventQueues @ 0x14076EEF4 (WmipCopyFromEventQueues.c)
 *     ArbArbiterHandler @ 0x140771750 (ArbArbiterHandler.c)
 *     PoUnregisterPowerSettingCallback @ 0x140772840 (PoUnregisterPowerSettingCallback.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x140774DA0 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PfGenerateTrace @ 0x140776A34 (PfGenerateTrace.c)
 *     IopInvalidateVolumesForDevice @ 0x14077B9E0 (IopInvalidateVolumesForDevice.c)
 *     IoSetInformation @ 0x14077C290 (IoSetInformation.c)
 *     IopCreateArcName @ 0x1407804D8 (IopCreateArcName.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x14078CF3C (SPCallServerHandleWaitForDisplayWindow.c)
 *     PopQueueBatteryStatusTimeout @ 0x14078EDDC (PopQueueBatteryStatusTimeout.c)
 *     PfTLoggingWorker @ 0x1407AD160 (PfTLoggingWorker.c)
 *     PfTInitialize @ 0x1407BF25C (PfTInitialize.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1407C9F60 (IoRegisterFsRegistrationChangeMountAware.c)
 *     CmUnregisterMachineHiveLoadedNotification @ 0x14086A200 (CmUnregisterMachineHiveLoadedNotification.c)
 *     NtWaitForDebugEvent @ 0x1408865B0 (NtWaitForDebugEvent.c)
 *     DbgkpRemoveErrorPort @ 0x1408871D4 (DbgkpRemoveErrorPort.c)
 *     IopSendMessageToTrackService @ 0x140892220 (IopSendMessageToTrackService.c)
 *     IoCancelFileOpen @ 0x140893780 (IoCancelFileOpen.c)
 *     IopFreeBandwidthContract @ 0x14089B224 (IopFreeBandwidthContract.c)
 *     PopFxUpdateVetoMaskWork @ 0x1408E5970 (PopFxUpdateVetoMaskWork.c)
 *     PopSetSystemAwayMode @ 0x1408E7930 (PopSetSystemAwayMode.c)
 *     PopThermalReadCounters @ 0x1408E7DD0 (PopThermalReadCounters.c)
 *     TtmiRetrieveEventFromQueue @ 0x1409056EC (TtmiRetrieveEventFromQueue.c)
 *     RawQueryFsSizeInfo @ 0x14090F5E8 (RawQueryFsSizeInfo.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x140942C90 (EtwpCovSampCaptureWorkerThread.c)
 *     sub_14096221C @ 0x14096221C (sub_14096221C.c)
 *     PfpScenCtxPrefetchWait @ 0x1409918C4 (PfpScenCtxPrefetchWait.c)
 *     PopNewWakeInfo @ 0x14099952C (PopNewWakeInfo.c)
 *     PfpScenCtxQueryScenarioInformation @ 0x140999740 (PfpScenCtxQueryScenarioInformation.c)
 *     IoShutdownSystem @ 0x1409ABD08 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x1409AC064 (IopShutdownBaseFileSystems.c)
 *     AnFwDisplayFade @ 0x1409F2C00 (AnFwDisplayFade.c)
 *     MiInitializePagedPoolEvents @ 0x140A4FB3C (MiInitializePagedPoolEvents.c)
 *     IopGetBootDiskInformation @ 0x140A909DC (IopGetBootDiskInformation.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

LONG __stdcall KeResetEvent(PRKEVENT Event)
{
  unsigned __int8 CurrentIrql; // si
  LONG SignalState; // edi
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v6; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *v8; // r9
  int v9; // edx
  bool v10; // zf
  int v11; // [rsp+40h] [rbp+8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v11 = 0;
  while ( _interlockedbittestandset(&Event->Header.Lock, 7u) )
  {
    do
      KeYieldProcessorEx(&v11);
    while ( (Event->Header.LockNV & 0x80u) != 0 );
  }
  SignalState = Event->Header.SignalState;
  Event->Header.SignalState = 0;
  _InterlockedAnd(&Event->Header.Lock, 0xFFFFFF7F);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v6 = KeGetCurrentIrql();
      if ( v6 <= 0xFu && CurrentIrql <= 0xFu && v6 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v8 = CurrentPrcb->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v10 = (v9 & v8[5]) == 0;
        v8[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return SignalState;
}
