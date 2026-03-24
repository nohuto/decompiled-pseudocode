/*
 * XREFs of KeResetEvent @ 0x14027BC40
 * Callers:
 *     PopFxIdleWorker @ 0x140260DA4 (PopFxIdleWorker.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140267690 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiRetryNonPagedAllocation @ 0x140274C3C (MiRetryNonPagedAllocation.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x140280840 (PopUpdateWatchdogNoWorkersEvent.c)
 *     MiIssueSynchronousFlush @ 0x1402AF5C0 (MiIssueSynchronousFlush.c)
 *     PnpLockDeviceActionQueue @ 0x1402C6FF0 (PnpLockDeviceActionQueue.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1402D74F0 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1402D99DC (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreHelperWaitForCommand @ 0x1402E017C (SmKmStoreHelperWaitForCommand.c)
 *     SmKmStoreHelperWorker @ 0x1402E0320 (SmKmStoreHelperWorker.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1402E16D0 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     CcUnmapVacbArray @ 0x140312E70 (CcUnmapVacbArray.c)
 *     MmStoreFlushOutstandingEvictions @ 0x14035A558 (MmStoreFlushOutstandingEvictions.c)
 *     PnpRequestDeviceAction @ 0x140370854 (PnpRequestDeviceAction.c)
 *     ExUnregisterCallback @ 0x140381970 (ExUnregisterCallback.c)
 *     MiProcessDereferenceList @ 0x140387B6C (MiProcessDereferenceList.c)
 *     MiMarkSessionDeletePending @ 0x140389DB0 (MiMarkSessionDeletePending.c)
 *     PopFxAllocatePowerIrp @ 0x140399A10 (PopFxAllocatePowerIrp.c)
 *     PopPepUpdateConstraints @ 0x1403A056C (PopPepUpdateConstraints.c)
 *     MiQueueWorkingSetRequest @ 0x1403A5B54 (MiQueueWorkingSetRequest.c)
 *     MiSignalNonPagedPoolWatchers @ 0x1403B6178 (MiSignalNonPagedPoolWatchers.c)
 *     MiUpdateAvailableEvents @ 0x1403B6A44 (MiUpdateAvailableEvents.c)
 *     MiDereferenceSegmentThread @ 0x1403BD430 (MiDereferenceSegmentThread.c)
 *     MiModifiedPageWriter @ 0x1403BDB20 (MiModifiedPageWriter.c)
 *     MiSyncCommitSignals @ 0x1403BF928 (MiSyncCommitSignals.c)
 *     MiStoreEvictThread @ 0x1403C1000 (MiStoreEvictThread.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403C87F0 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     IopValidateAndGetWriteParameters @ 0x1403F2018 (IopValidateAndGetWriteParameters.c)
 *     MiWaitForFreePagesToZero @ 0x14054FF8C (MiWaitForFreePagesToZero.c)
 *     MiWaitForAvailablePages @ 0x14055C0A4 (MiWaitForAvailablePages.c)
 *     MiWaitForFreePage @ 0x14055C1FC (MiWaitForFreePage.c)
 *     MiDrainCrossPartitionUsage @ 0x14056209C (MiDrainCrossPartitionUsage.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x14056B358 (PopFxIssueComponentPerfStateChanges.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x1405769B4 (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     EtwpCovSampCaptureContextStop @ 0x1405AEA5C (EtwpCovSampCaptureContextStop.c)
 *     sub_1405BF1D0 @ 0x1405BF1D0 (sub_1405BF1D0.c)
 *     WdtpTimerCallback @ 0x1405C67D0 (WdtpTimerCallback.c)
 *     NtCopyFileChunk @ 0x1405CDD80 (NtCopyFileChunk.c)
 *     IopReadFile @ 0x1405CE318 (IopReadFile.c)
 *     sub_1405FD540 @ 0x1405FD540 (sub_1405FD540.c)
 *     NtSetInformationJobObject @ 0x140614200 (NtSetInformationJobObject.c)
 *     EtwpLogger @ 0x1406456F0 (EtwpLogger.c)
 *     IopGetSetSecurityObject @ 0x14064F760 (IopGetSetSecurityObject.c)
 *     BuildQueryDirectoryIrp @ 0x14064FCB0 (BuildQueryDirectoryIrp.c)
 *     NtNotifyChangeMultipleKeys @ 0x140663230 (NtNotifyChangeMultipleKeys.c)
 *     CmpLockRegistryFreezeAware @ 0x1406726F0 (CmpLockRegistryFreezeAware.c)
 *     NtClearEvent @ 0x140688F30 (NtClearEvent.c)
 *     NtReadFileScatter @ 0x140699E80 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x14069A620 (NtWriteFileGather.c)
 *     IopCancelIrpsInThreadList @ 0x14069DCC8 (IopCancelIrpsInThreadList.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406AE6E0 (NtNotifyChangeDirectoryFileEx.c)
 *     EtwpSynchronizeWithLogger @ 0x1406B8D9C (EtwpSynchronizeWithLogger.c)
 *     NtResetEvent @ 0x1406C6C70 (NtResetEvent.c)
 *     IopQueryXxxInformation @ 0x1406C9708 (IopQueryXxxInformation.c)
 *     EtwpStopTrace @ 0x1406DDFBC (EtwpStopTrace.c)
 *     IopMountVolume @ 0x1406E5720 (IopMountVolume.c)
 *     PnpInsertEventInQueue @ 0x1406E756C (PnpInsertEventInQueue.c)
 *     IopXxxControlFile @ 0x1406FE010 (IopXxxControlFile.c)
 *     IopDeleteFile @ 0x140703760 (IopDeleteFile.c)
 *     NtLockFile @ 0x140708790 (NtLockFile.c)
 *     CmUnloadKey @ 0x140719C78 (CmUnloadKey.c)
 *     CmpLinkHiveToMaster @ 0x14071E230 (CmpLinkHiveToMaster.c)
 *     NtSetVolumeInformationFile @ 0x14076D170 (NtSetVolumeInformationFile.c)
 *     WmipCopyFromEventQueues @ 0x14076ED34 (WmipCopyFromEventQueues.c)
 *     ArbArbiterHandler @ 0x140771590 (ArbArbiterHandler.c)
 *     PoUnregisterPowerSettingCallback @ 0x140772680 (PoUnregisterPowerSettingCallback.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x140774BE0 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PfGenerateTrace @ 0x140776874 (PfGenerateTrace.c)
 *     IopInvalidateVolumesForDevice @ 0x14077B820 (IopInvalidateVolumesForDevice.c)
 *     IoSetInformation @ 0x14077C0D0 (IoSetInformation.c)
 *     IopCreateArcName @ 0x140780318 (IopCreateArcName.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x14078CD7C (SPCallServerHandleWaitForDisplayWindow.c)
 *     PopQueueBatteryStatusTimeout @ 0x14078EC1C (PopQueueBatteryStatusTimeout.c)
 *     PfTLoggingWorker @ 0x1407ACF60 (PfTLoggingWorker.c)
 *     PfTInitialize @ 0x1407BED40 (PfTInitialize.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1407C9C40 (IoRegisterFsRegistrationChangeMountAware.c)
 *     CmUnregisterMachineHiveLoadedNotification @ 0x14086A0A0 (CmUnregisterMachineHiveLoadedNotification.c)
 *     NtWaitForDebugEvent @ 0x140886450 (NtWaitForDebugEvent.c)
 *     DbgkpRemoveErrorPort @ 0x140887074 (DbgkpRemoveErrorPort.c)
 *     IopSendMessageToTrackService @ 0x1408920C0 (IopSendMessageToTrackService.c)
 *     IoCancelFileOpen @ 0x140893620 (IoCancelFileOpen.c)
 *     IopFreeBandwidthContract @ 0x14089B0C4 (IopFreeBandwidthContract.c)
 *     PopFxUpdateVetoMaskWork @ 0x1408E5810 (PopFxUpdateVetoMaskWork.c)
 *     PopSetSystemAwayMode @ 0x1408E77D0 (PopSetSystemAwayMode.c)
 *     PopThermalReadCounters @ 0x1408E7C70 (PopThermalReadCounters.c)
 *     TtmiRetrieveEventFromQueue @ 0x14090558C (TtmiRetrieveEventFromQueue.c)
 *     RawQueryFsSizeInfo @ 0x14090F488 (RawQueryFsSizeInfo.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x140942AC0 (EtwpCovSampCaptureWorkerThread.c)
 *     sub_14096203C @ 0x14096203C (sub_14096203C.c)
 *     PfpScenCtxPrefetchWait @ 0x1409908C4 (PfpScenCtxPrefetchWait.c)
 *     PopNewWakeInfo @ 0x14099852C (PopNewWakeInfo.c)
 *     PfpScenCtxQueryScenarioInformation @ 0x140998740 (PfpScenCtxQueryScenarioInformation.c)
 *     IoShutdownSystem @ 0x1409AADD8 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x1409AB134 (IopShutdownBaseFileSystems.c)
 *     AnFwDisplayFade @ 0x1409F1C00 (AnFwDisplayFade.c)
 *     MiInitializePagedPoolEvents @ 0x140A4EB3C (MiInitializePagedPoolEvents.c)
 *     IopGetBootDiskInformation @ 0x140A8F9DC (IopGetBootDiskInformation.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
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
