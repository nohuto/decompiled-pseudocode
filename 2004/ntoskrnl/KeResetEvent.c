/*
 * XREFs of KeResetEvent @ 0x140297C10
 * Callers:
 *     PopUpdateWatchdogNoWorkersEvent @ 0x140275F20 (PopUpdateWatchdogNoWorkersEvent.c)
 *     CcUnmapVacbArray @ 0x1402BEA50 (CcUnmapVacbArray.c)
 *     PopFxIdleWorker @ 0x1402C9B84 (PopFxIdleWorker.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1402CE730 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1402D0FD4 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1402D4070 (MiTrimUnusedPageFileRegionsWorker.c)
 *     PnpLockDeviceActionQueue @ 0x1402D8314 (PnpLockDeviceActionQueue.c)
 *     MiRetryNonPagedAllocation @ 0x1402E1CAC (MiRetryNonPagedAllocation.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403031C0 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreHelperWorker @ 0x1403036C0 (SmKmStoreHelperWorker.c)
 *     SmKmStoreHelperWaitForCommand @ 0x140304A60 (SmKmStoreHelperWaitForCommand.c)
 *     MmStoreFlushOutstandingEvictions @ 0x140311254 (MmStoreFlushOutstandingEvictions.c)
 *     MiIssueSynchronousFlush @ 0x14033C5B0 (MiIssueSynchronousFlush.c)
 *     PnpRequestDeviceAction @ 0x14036DAE4 (PnpRequestDeviceAction.c)
 *     ExUnregisterCallback @ 0x14037F540 (ExUnregisterCallback.c)
 *     MiProcessDereferenceList @ 0x140385268 (MiProcessDereferenceList.c)
 *     MiMarkSessionDeletePending @ 0x140387498 (MiMarkSessionDeletePending.c)
 *     PopFxAllocatePowerIrp @ 0x140397120 (PopFxAllocatePowerIrp.c)
 *     PopPepUpdateConstraints @ 0x14039D7DC (PopPepUpdateConstraints.c)
 *     MiQueueWorkingSetRequest @ 0x1403A2ED4 (MiQueueWorkingSetRequest.c)
 *     MiSignalNonPagedPoolWatchers @ 0x1403B2188 (MiSignalNonPagedPoolWatchers.c)
 *     MiUpdateAvailableEvents @ 0x1403B2A94 (MiUpdateAvailableEvents.c)
 *     MiDereferenceSegmentThread @ 0x1403BA4A0 (MiDereferenceSegmentThread.c)
 *     MiModifiedPageWriter @ 0x1403BC140 (MiModifiedPageWriter.c)
 *     MiSyncCommitSignals @ 0x1403BCC54 (MiSyncCommitSignals.c)
 *     MiStoreEvictThread @ 0x1403BE290 (MiStoreEvictThread.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403C5070 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiWaitForFreePagesToZero @ 0x14054AAEC (MiWaitForFreePagesToZero.c)
 *     MiWaitForAvailablePages @ 0x140556C04 (MiWaitForAvailablePages.c)
 *     MiWaitForFreePage @ 0x140556D5C (MiWaitForFreePage.c)
 *     MiDrainCrossPartitionUsage @ 0x14055CBFC (MiDrainCrossPartitionUsage.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x140565F0C (PopFxIssueComponentPerfStateChanges.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x140571574 (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     EtwpCovSampCaptureContextStop @ 0x1405A94FC (EtwpCovSampCaptureContextStop.c)
 *     sub_1405B9C20 @ 0x1405B9C20 (sub_1405B9C20.c)
 *     WdtpTimerCallback @ 0x1405C1320 (WdtpTimerCallback.c)
 *     NtNotifyChangeMultipleKeys @ 0x1405E2200 (NtNotifyChangeMultipleKeys.c)
 *     IopQueryXxxInformation @ 0x140605A8C (IopQueryXxxInformation.c)
 *     NtSetInformationJobObject @ 0x14061AF00 (NtSetInformationJobObject.c)
 *     IopMountVolume @ 0x140634C68 (IopMountVolume.c)
 *     CmpLockRegistryFreezeAware @ 0x140640060 (CmpLockRegistryFreezeAware.c)
 *     PnpInsertEventInQueue @ 0x140648AB0 (PnpInsertEventInQueue.c)
 *     CmUnloadKey @ 0x14064FEBC (CmUnloadKey.c)
 *     CmpLinkHiveToMaster @ 0x140650940 (CmpLinkHiveToMaster.c)
 *     SPCallServerHandleQueryPolicy @ 0x14066E740 (SPCallServerHandleQueryPolicy.c)
 *     IopXxxControlFile @ 0x140674CF0 (IopXxxControlFile.c)
 *     IopDeleteFile @ 0x140678F40 (IopDeleteFile.c)
 *     NtWriteFile @ 0x14068B600 (NtWriteFile.c)
 *     NtReadFile @ 0x14068C230 (NtReadFile.c)
 *     IopGetSetSecurityObject @ 0x14068C9D0 (IopGetSetSecurityObject.c)
 *     BuildQueryDirectoryIrp @ 0x14068CF20 (BuildQueryDirectoryIrp.c)
 *     NtLockFile @ 0x14069F3F0 (NtLockFile.c)
 *     NtResetEvent @ 0x1406BD490 (NtResetEvent.c)
 *     EtwpSynchronizeWithLogger @ 0x1406C6C5C (EtwpSynchronizeWithLogger.c)
 *     EtwpStopTrace @ 0x1406C75AC (EtwpStopTrace.c)
 *     EtwpLogger @ 0x1406C9F80 (EtwpLogger.c)
 *     NtClearEvent @ 0x1406DB4D0 (NtClearEvent.c)
 *     NtReadFileScatter @ 0x1406EBFB0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1406EC5C0 (NtWriteFileGather.c)
 *     IopCancelIrpsInThreadList @ 0x1406EEBA8 (IopCancelIrpsInThreadList.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406FCF10 (NtNotifyChangeDirectoryFileEx.c)
 *     NtSetVolumeInformationFile @ 0x14075AA70 (NtSetVolumeInformationFile.c)
 *     WmipCopyFromEventQueues @ 0x14075C658 (WmipCopyFromEventQueues.c)
 *     ArbArbiterHandler @ 0x14075EC00 (ArbArbiterHandler.c)
 *     PoUnregisterPowerSettingCallback @ 0x14075FEA0 (PoUnregisterPowerSettingCallback.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x140762630 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PfGenerateTrace @ 0x1407642B4 (PfGenerateTrace.c)
 *     IopInvalidateVolumesForDevice @ 0x140769260 (IopInvalidateVolumesForDevice.c)
 *     IoSetInformation @ 0x140769B10 (IoSetInformation.c)
 *     IopCreateArcName @ 0x14076DB08 (IopCreateArcName.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x14077A99C (SPCallServerHandleWaitForDisplayWindow.c)
 *     PopQueueBatteryStatusTimeout @ 0x14077C84C (PopQueueBatteryStatusTimeout.c)
 *     PfTLoggingWorker @ 0x14078E8F0 (PfTLoggingWorker.c)
 *     PfTInitialize @ 0x1407AC9FC (PfTInitialize.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1407B7150 (IoRegisterFsRegistrationChangeMountAware.c)
 *     CmUnregisterMachineHiveLoadedNotification @ 0x140866A50 (CmUnregisterMachineHiveLoadedNotification.c)
 *     NtWaitForDebugEvent @ 0x140883360 (NtWaitForDebugEvent.c)
 *     DbgkpRemoveErrorPort @ 0x140883F84 (DbgkpRemoveErrorPort.c)
 *     IopSendMessageToTrackService @ 0x14088F040 (IopSendMessageToTrackService.c)
 *     IoCancelFileOpen @ 0x140890560 (IoCancelFileOpen.c)
 *     IopFreeBandwidthContract @ 0x140897FD0 (IopFreeBandwidthContract.c)
 *     PopFxUpdateVetoMaskWork @ 0x1408E21D0 (PopFxUpdateVetoMaskWork.c)
 *     PopSetSystemAwayMode @ 0x1408E43C0 (PopSetSystemAwayMode.c)
 *     PopThermalReadCounters @ 0x1408E4860 (PopThermalReadCounters.c)
 *     TtmiRetrieveEventFromQueue @ 0x1409021C0 (TtmiRetrieveEventFromQueue.c)
 *     RawQueryFsSizeInfo @ 0x14090C0A8 (RawQueryFsSizeInfo.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x14093F530 (EtwpCovSampCaptureWorkerThread.c)
 *     sub_14095E9EC @ 0x14095E9EC (sub_14095E9EC.c)
 *     PfpScenCtxPrefetchWait @ 0x14098D8D4 (PfpScenCtxPrefetchWait.c)
 *     PopNewWakeInfo @ 0x1409951DC (PopNewWakeInfo.c)
 *     PfpScenCtxQueryScenarioInformation @ 0x1409953F0 (PfpScenCtxQueryScenarioInformation.c)
 *     IoShutdownSystem @ 0x1409A7F68 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x1409A82C4 (IopShutdownBaseFileSystems.c)
 *     AnFwDisplayFade @ 0x1409EEC00 (AnFwDisplayFade.c)
 *     MiInitializePagedPoolEvents @ 0x140A47300 (MiInitializePagedPoolEvents.c)
 *     IopGetBootDiskInformation @ 0x140A8CE7C (IopGetBootDiskInformation.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

LONG __stdcall KeResetEvent(PRKEVENT Event)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 CurrentIrql; // si
  LONG SignalState; // edi
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *v10; // r9
  int v11; // edx
  bool v12; // zf
  int v13; // [rsp+40h] [rbp+8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v1 = (-1LL << (CurrentIrql + 1)) & 4;
    v2 = (unsigned int)v1 | SchedulerAssist[5];
    SchedulerAssist[5] = v2;
  }
  v13 = 0;
  while ( _interlockedbittestandset(&Event->Header.Lock, 7u) )
  {
    do
      KeYieldProcessorEx(&v13, v1, v2, (__int64)SchedulerAssist);
    while ( (Event->Header.LockNV & 0x80u) != 0 );
  }
  SignalState = Event->Header.SignalState;
  Event->Header.SignalState = 0;
  _InterlockedAnd(&Event->Header.Lock, 0xFFFFFF7F);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v8 = KeGetCurrentIrql();
      if ( v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v10 = CurrentPrcb->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v12 = (v11 & v10[5]) == 0;
        v10[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return SignalState;
}
