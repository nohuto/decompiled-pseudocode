/*
 * XREFs of KeResetEvent @ 0x1402055D0
 * Callers:
 *     CcUnmapVacbArray @ 0x14022BDD0 (CcUnmapVacbArray.c)
 *     PopFxIdleWorker @ 0x140236D54 (PopFxIdleWorker.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x14023B900 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14023E1A4 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreHelperWaitForCommand @ 0x1402C8EB4 (SmKmStoreHelperWaitForCommand.c)
 *     MiIssueSynchronousFlush @ 0x1402FFCB0 (MiIssueSynchronousFlush.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140309030 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreHelperWorker @ 0x140309210 (SmKmStoreHelperWorker.c)
 *     MmStoreFlushOutstandingEvictions @ 0x14030C454 (MmStoreFlushOutstandingEvictions.c)
 *     MiRetryNonPagedAllocation @ 0x140326EE4 (MiRetryNonPagedAllocation.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14034E9A0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x14035C0D0 (PopUpdateWatchdogNoWorkersEvent.c)
 *     PnpLockDeviceActionQueue @ 0x14035FFAC (PnpLockDeviceActionQueue.c)
 *     PnpRequestDeviceAction @ 0x14036BAD4 (PnpRequestDeviceAction.c)
 *     ExUnregisterCallback @ 0x14037EB50 (ExUnregisterCallback.c)
 *     MiProcessDereferenceList @ 0x1403842FC (MiProcessDereferenceList.c)
 *     MiMarkSessionDeletePending @ 0x140386528 (MiMarkSessionDeletePending.c)
 *     PopFxAllocatePowerIrp @ 0x140396510 (PopFxAllocatePowerIrp.c)
 *     PopPepUpdateConstraints @ 0x14039D04C (PopPepUpdateConstraints.c)
 *     MiQueueWorkingSetRequest @ 0x1403A2744 (MiQueueWorkingSetRequest.c)
 *     MiSignalNonPagedPoolWatchers @ 0x1403AC508 (MiSignalNonPagedPoolWatchers.c)
 *     MiUpdateAvailableEvents @ 0x1403ACE14 (MiUpdateAvailableEvents.c)
 *     MiDereferenceSegmentThread @ 0x1403B9130 (MiDereferenceSegmentThread.c)
 *     MiModifiedPageWriter @ 0x1403BAE20 (MiModifiedPageWriter.c)
 *     MiSyncCommitSignals @ 0x1403BB934 (MiSyncCommitSignals.c)
 *     MiStoreEvictThread @ 0x1403BD300 (MiStoreEvictThread.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403C4100 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiWaitForFreePagesToZero @ 0x14054A49C (MiWaitForFreePagesToZero.c)
 *     MiWaitForAvailablePages @ 0x1405565B4 (MiWaitForAvailablePages.c)
 *     MiWaitForFreePage @ 0x14055670C (MiWaitForFreePage.c)
 *     MiDrainCrossPartitionUsage @ 0x14055C5AC (MiDrainCrossPartitionUsage.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1405658BC (PopFxIssueComponentPerfStateChanges.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x140570F24 (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     EtwpCovSampCaptureContextStop @ 0x1405A8E0C (EtwpCovSampCaptureContextStop.c)
 *     sub_1405B9500 @ 0x1405B9500 (sub_1405B9500.c)
 *     WdtpTimerCallback @ 0x1405C0C00 (WdtpTimerCallback.c)
 *     IopGetSetSecurityObject @ 0x1405E3500 (IopGetSetSecurityObject.c)
 *     BuildQueryDirectoryIrp @ 0x1405E3A50 (BuildQueryDirectoryIrp.c)
 *     NtWriteFile @ 0x1405E3F90 (NtWriteFile.c)
 *     NtReadFile @ 0x1405E54D0 (NtReadFile.c)
 *     NtNotifyChangeMultipleKeys @ 0x1405F4060 (NtNotifyChangeMultipleKeys.c)
 *     SPCallServerHandleQueryPolicy @ 0x1405F66A0 (SPCallServerHandleQueryPolicy.c)
 *     IopXxxControlFile @ 0x1405FCC10 (IopXxxControlFile.c)
 *     IopDeleteFile @ 0x140600E60 (IopDeleteFile.c)
 *     IopQueryXxxInformation @ 0x14063AACC (IopQueryXxxInformation.c)
 *     CmUnloadKey @ 0x140659A98 (CmUnloadKey.c)
 *     NtSetInformationJobObject @ 0x140660620 (NtSetInformationJobObject.c)
 *     EtwpSynchronizeWithLogger @ 0x1406777EC (EtwpSynchronizeWithLogger.c)
 *     EtwpStopTrace @ 0x1406796F8 (EtwpStopTrace.c)
 *     EtwpLogger @ 0x14067AF70 (EtwpLogger.c)
 *     CmpLinkHiveToMaster @ 0x14068C2C8 (CmpLinkHiveToMaster.c)
 *     CmpLockRegistryFreezeAware @ 0x140691170 (CmpLockRegistryFreezeAware.c)
 *     NtLockFile @ 0x140699320 (NtLockFile.c)
 *     NtClearEvent @ 0x1406BA1C0 (NtClearEvent.c)
 *     NtResetEvent @ 0x1406C3FB0 (NtResetEvent.c)
 *     NtReadFileScatter @ 0x1406CACB0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1406CB2C0 (NtWriteFileGather.c)
 *     IopCancelIrpsInThreadList @ 0x1406CD8A8 (IopCancelIrpsInThreadList.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406D9E90 (NtNotifyChangeDirectoryFileEx.c)
 *     IopMountVolume @ 0x140701D54 (IopMountVolume.c)
 *     PnpInsertEventInQueue @ 0x14070AC58 (PnpInsertEventInQueue.c)
 *     NtSetVolumeInformationFile @ 0x140758BF0 (NtSetVolumeInformationFile.c)
 *     WmipCopyFromEventQueues @ 0x14075A754 (WmipCopyFromEventQueues.c)
 *     ArbArbiterHandler @ 0x14075C7B0 (ArbArbiterHandler.c)
 *     PoUnregisterPowerSettingCallback @ 0x14075DB90 (PoUnregisterPowerSettingCallback.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x140760D50 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PfGenerateTrace @ 0x1407629D4 (PfGenerateTrace.c)
 *     IopInvalidateVolumesForDevice @ 0x140766E80 (IopInvalidateVolumesForDevice.c)
 *     IoSetInformation @ 0x140767730 (IoSetInformation.c)
 *     IopCreateArcName @ 0x14076B368 (IopCreateArcName.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x14077858C (SPCallServerHandleWaitForDisplayWindow.c)
 *     PopQueueBatteryStatusTimeout @ 0x14077A43C (PopQueueBatteryStatusTimeout.c)
 *     PfTLoggingWorker @ 0x14078CA20 (PfTLoggingWorker.c)
 *     PfTInitialize @ 0x1407A989C (PfTInitialize.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1407B3FE0 (IoRegisterFsRegistrationChangeMountAware.c)
 *     CmUnregisterMachineHiveLoadedNotification @ 0x140865730 (CmUnregisterMachineHiveLoadedNotification.c)
 *     NtWaitForDebugEvent @ 0x140882040 (NtWaitForDebugEvent.c)
 *     DbgkpRemoveErrorPort @ 0x140882C64 (DbgkpRemoveErrorPort.c)
 *     IopSendMessageToTrackService @ 0x14088DD20 (IopSendMessageToTrackService.c)
 *     IoCancelFileOpen @ 0x14088F240 (IoCancelFileOpen.c)
 *     IopFreeBandwidthContract @ 0x140896CB0 (IopFreeBandwidthContract.c)
 *     PopFxUpdateVetoMaskWork @ 0x1408E0F50 (PopFxUpdateVetoMaskWork.c)
 *     PopSetSystemAwayMode @ 0x1408E3140 (PopSetSystemAwayMode.c)
 *     PopThermalReadCounters @ 0x1408E35E0 (PopThermalReadCounters.c)
 *     TtmiRetrieveEventFromQueue @ 0x140900ED0 (TtmiRetrieveEventFromQueue.c)
 *     RawQueryFsSizeInfo @ 0x14090ADF8 (RawQueryFsSizeInfo.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x14093E2B0 (EtwpCovSampCaptureWorkerThread.c)
 *     sub_14095D64C @ 0x14095D64C (sub_14095D64C.c)
 *     PfpScenCtxPrefetchWait @ 0x14098D0BC (PfpScenCtxPrefetchWait.c)
 *     PopNewWakeInfo @ 0x140993B9C (PopNewWakeInfo.c)
 *     PfpScenCtxQueryScenarioInformation @ 0x140993DB0 (PfpScenCtxQueryScenarioInformation.c)
 *     IoShutdownSystem @ 0x1409A7108 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x1409A7464 (IopShutdownBaseFileSystems.c)
 *     AnFwDisplayFade @ 0x1409EEC00 (AnFwDisplayFade.c)
 *     MiInitializePagedPoolEvents @ 0x140A41AA4 (MiInitializePagedPoolEvents.c)
 *     IopGetBootDiskInformation @ 0x140A8D88C (IopGetBootDiskInformation.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
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
