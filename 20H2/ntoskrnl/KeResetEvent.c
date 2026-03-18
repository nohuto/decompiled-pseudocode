/*
 * XREFs of KeResetEvent @ 0x140209F50
 * Callers:
 *     PopFxIdleWorker @ 0x1402467F4 (PopFxIdleWorker.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140254D40 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14025722C (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14025C8B0 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     CcUnmapVacbArray @ 0x14029A450 (CcUnmapVacbArray.c)
 *     MiIssueSynchronousFlush @ 0x14030F1D8 (MiIssueSynchronousFlush.c)
 *     MmStoreFlushOutstandingEvictions @ 0x14031ABD8 (MmStoreFlushOutstandingEvictions.c)
 *     MiRetryNonPagedAllocation @ 0x140333F40 (MiRetryNonPagedAllocation.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x14033FAF8 (PopUpdateWatchdogNoWorkersEvent.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140345720 (MiTrimUnusedPageFileRegionsWorker.c)
 *     SmKmStoreHelperWaitForCommand @ 0x140358194 (SmKmStoreHelperWaitForCommand.c)
 *     SmKmStoreHelperWorker @ 0x140358340 (SmKmStoreHelperWorker.c)
 *     PnpLockDeviceActionQueue @ 0x140362B34 (PnpLockDeviceActionQueue.c)
 *     PnpRequestDeviceAction @ 0x14036E774 (PnpRequestDeviceAction.c)
 *     ExUnregisterCallback @ 0x140381270 (ExUnregisterCallback.c)
 *     MiProcessDereferenceList @ 0x140387414 (MiProcessDereferenceList.c)
 *     MiMarkSessionDeletePending @ 0x140389658 (MiMarkSessionDeletePending.c)
 *     PopFxAllocatePowerIrp @ 0x1403995A0 (PopFxAllocatePowerIrp.c)
 *     PopPepUpdateConstraints @ 0x14039CBCC (PopPepUpdateConstraints.c)
 *     MiQueueWorkingSetRequest @ 0x1403A5294 (MiQueueWorkingSetRequest.c)
 *     MiSignalNonPagedPoolWatchers @ 0x1403B4AF8 (MiSignalNonPagedPoolWatchers.c)
 *     MiUpdateAvailableEvents @ 0x1403B5404 (MiUpdateAvailableEvents.c)
 *     MiDereferenceSegmentThread @ 0x1403BC920 (MiDereferenceSegmentThread.c)
 *     MiModifiedPageWriter @ 0x1403BE5C0 (MiModifiedPageWriter.c)
 *     MiSyncCommitSignals @ 0x1403BF0D4 (MiSyncCommitSignals.c)
 *     MiStoreEvictThread @ 0x1403C07B0 (MiStoreEvictThread.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403C7A60 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     IopValidateAndGetWriteParameters @ 0x1403F11C0 (IopValidateAndGetWriteParameters.c)
 *     MiWaitForFreePagesToZero @ 0x14054E4BC (MiWaitForFreePagesToZero.c)
 *     MiWaitForAvailablePages @ 0x14055A5D4 (MiWaitForAvailablePages.c)
 *     MiWaitForFreePage @ 0x14055A72C (MiWaitForFreePage.c)
 *     MiDrainCrossPartitionUsage @ 0x1405605CC (MiDrainCrossPartitionUsage.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x140569940 (PopFxIssueComponentPerfStateChanges.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x140574FA4 (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     EtwpCovSampCaptureContextStop @ 0x1405AD05C (EtwpCovSampCaptureContextStop.c)
 *     sub_1405BD780 @ 0x1405BD780 (sub_1405BD780.c)
 *     WdtpTimerCallback @ 0x1405C4FA0 (WdtpTimerCallback.c)
 *     NtCopyFileChunk @ 0x1405CBD40 (NtCopyFileChunk.c)
 *     IopReadFile @ 0x1405CC21C (IopReadFile.c)
 *     CmpLinkHiveToMaster @ 0x1405DA88C (CmpLinkHiveToMaster.c)
 *     NtNotifyChangeMultipleKeys @ 0x1405F7BF0 (NtNotifyChangeMultipleKeys.c)
 *     NtWriteFile @ 0x1405F84C0 (NtWriteFile.c)
 *     NtReadFile @ 0x1405F9240 (NtReadFile.c)
 *     IopGetSetSecurityObject @ 0x1405F9B20 (IopGetSetSecurityObject.c)
 *     BuildQueryDirectoryIrp @ 0x1405FA070 (BuildQueryDirectoryIrp.c)
 *     IopDeleteFile @ 0x1405FE150 (IopDeleteFile.c)
 *     IopXxxControlFile @ 0x14060FB00 (IopXxxControlFile.c)
 *     IopQueryXxxInformation @ 0x140634898 (IopQueryXxxInformation.c)
 *     PnpInsertEventInQueue @ 0x14064AECC (PnpInsertEventInQueue.c)
 *     NtSetInformationJobObject @ 0x140661780 (NtSetInformationJobObject.c)
 *     SPCallServerHandleQueryPolicy @ 0x140688AF0 (SPCallServerHandleQueryPolicy.c)
 *     CmUnloadKey @ 0x1406A219C (CmUnloadKey.c)
 *     NtClearEvent @ 0x1406B2DF0 (NtClearEvent.c)
 *     NtLockFile @ 0x1406B3730 (NtLockFile.c)
 *     NtReadFileScatter @ 0x1406C05A0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1406C0D40 (NtWriteFileGather.c)
 *     IopCancelIrpsInThreadList @ 0x1406C2AC8 (IopCancelIrpsInThreadList.c)
 *     IopMountVolume @ 0x1406CC9E8 (IopMountVolume.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406CFAE0 (NtNotifyChangeDirectoryFileEx.c)
 *     NtResetEvent @ 0x1406D1170 (NtResetEvent.c)
 *     CmpLockRegistryFreezeAware @ 0x140701310 (CmpLockRegistryFreezeAware.c)
 *     EtwpSynchronizeWithLogger @ 0x14071269C (EtwpSynchronizeWithLogger.c)
 *     EtwpStopTrace @ 0x140713944 (EtwpStopTrace.c)
 *     EtwpLogger @ 0x140715350 (EtwpLogger.c)
 *     NtSetVolumeInformationFile @ 0x140769230 (NtSetVolumeInformationFile.c)
 *     WmipCopyFromEventQueues @ 0x14076ADC8 (WmipCopyFromEventQueues.c)
 *     ArbArbiterHandler @ 0x14076D270 (ArbArbiterHandler.c)
 *     PoUnregisterPowerSettingCallback @ 0x14076E510 (PoUnregisterPowerSettingCallback.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x140770C40 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PfGenerateTrace @ 0x1407728C4 (PfGenerateTrace.c)
 *     IopInvalidateVolumesForDevice @ 0x140777870 (IopInvalidateVolumesForDevice.c)
 *     IoSetInformation @ 0x140778120 (IoSetInformation.c)
 *     IopCreateArcName @ 0x14077C538 (IopCreateArcName.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x140788F9C (SPCallServerHandleWaitForDisplayWindow.c)
 *     PopQueueBatteryStatusTimeout @ 0x14078AE4C (PopQueueBatteryStatusTimeout.c)
 *     PfTLoggingWorker @ 0x14079B030 (PfTLoggingWorker.c)
 *     PfTInitialize @ 0x1407BA93C (PfTInitialize.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1407C5980 (IoRegisterFsRegistrationChangeMountAware.c)
 *     CmUnregisterMachineHiveLoadedNotification @ 0x14086C470 (CmUnregisterMachineHiveLoadedNotification.c)
 *     NtWaitForDebugEvent @ 0x140888EB0 (NtWaitForDebugEvent.c)
 *     DbgkpRemoveErrorPort @ 0x140889AD4 (DbgkpRemoveErrorPort.c)
 *     IopSendMessageToTrackService @ 0x140894B00 (IopSendMessageToTrackService.c)
 *     IoCancelFileOpen @ 0x140896050 (IoCancelFileOpen.c)
 *     IopFreeBandwidthContract @ 0x14089DAF4 (IopFreeBandwidthContract.c)
 *     PopFxUpdateVetoMaskWork @ 0x1408E8010 (PopFxUpdateVetoMaskWork.c)
 *     PopSetSystemAwayMode @ 0x1408E9FD0 (PopSetSystemAwayMode.c)
 *     PopThermalReadCounters @ 0x1408EA470 (PopThermalReadCounters.c)
 *     TtmiRetrieveEventFromQueue @ 0x140907DDC (TtmiRetrieveEventFromQueue.c)
 *     RawQueryFsSizeInfo @ 0x140911CD8 (RawQueryFsSizeInfo.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1409452F0 (EtwpCovSampCaptureWorkerThread.c)
 *     sub_1409647BC @ 0x1409647BC (sub_1409647BC.c)
 *     PfpScenCtxPrefetchWait @ 0x1409938C4 (PfpScenCtxPrefetchWait.c)
 *     PopNewWakeInfo @ 0x14099B33C (PopNewWakeInfo.c)
 *     PfpScenCtxQueryScenarioInformation @ 0x14099B550 (PfpScenCtxQueryScenarioInformation.c)
 *     IoShutdownSystem @ 0x1409ADED8 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x1409AE234 (IopShutdownBaseFileSystems.c)
 *     AnFwDisplayFade @ 0x1409F4C00 (AnFwDisplayFade.c)
 *     MiInitializePagedPoolEvents @ 0x140A4D59C (MiInitializePagedPoolEvents.c)
 *     IopGetBootDiskInformation @ 0x140A92B7C (IopGetBootDiskInformation.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
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
