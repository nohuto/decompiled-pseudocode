/*
 * XREFs of KeResetEvent @ 0x1402A40D0
 * Callers:
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140237720 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140238330 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreHelperWorker @ 0x140253900 (SmKmStoreHelperWorker.c)
 *     PnpLockDeviceActionQueue @ 0x140253E78 (PnpLockDeviceActionQueue.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x140256C68 (PopUpdateWatchdogNoWorkersEvent.c)
 *     ExUnregisterCallback @ 0x14025DE40 (ExUnregisterCallback.c)
 *     MiRetryNonPagedAllocation @ 0x140284C74 (MiRetryNonPagedAllocation.c)
 *     CcUnmapVacbArray @ 0x1402853B0 (CcUnmapVacbArray.c)
 *     PnpRequestDeviceAction @ 0x1402DCF44 (PnpRequestDeviceAction.c)
 *     PopFxIdleWorker @ 0x140355424 (PopFxIdleWorker.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x14036A48C (PopPowerRequestEvaluatePendingRequestStatus.c)
 *     MmStoreFlushOutstandingEvictions @ 0x140373D18 (MmStoreFlushOutstandingEvictions.c)
 *     SmKmStoreHelperWaitForCommand @ 0x140379848 (SmKmStoreHelperWaitForCommand.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x14037A5F0 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiQueueWorkingSetRequest @ 0x1403867F4 (MiQueueWorkingSetRequest.c)
 *     MiProcessDereferenceList @ 0x140393EC0 (MiProcessDereferenceList.c)
 *     PopFxAllocatePowerIrp @ 0x1403A46E4 (PopFxAllocatePowerIrp.c)
 *     PopPepUpdateConstraints @ 0x1403B17EC (PopPepUpdateConstraints.c)
 *     MiSignalNonPagedPoolWatchers @ 0x1403C31D4 (MiSignalNonPagedPoolWatchers.c)
 *     MiUpdateAvailableEvents @ 0x1403C3E64 (MiUpdateAvailableEvents.c)
 *     MiDereferenceSegmentThread @ 0x1403CBBF0 (MiDereferenceSegmentThread.c)
 *     MiStoreEvictThread @ 0x1403CDBF0 (MiStoreEvictThread.c)
 *     MiSyncCommitSignals @ 0x1403CF698 (MiSyncCommitSignals.c)
 *     MiModifiedPageWriter @ 0x1403CFD20 (MiModifiedPageWriter.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403D8FF0 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     IopValidateAndGetWriteParameters @ 0x1404186A0 (IopValidateAndGetWriteParameters.c)
 *     CcInsertPrivateVolumeCacheMap @ 0x14053CFF4 (CcInsertPrivateVolumeCacheMap.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14059D170 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiWaitForAvailablePages @ 0x1405B81F0 (MiWaitForAvailablePages.c)
 *     MiWaitForFreePage @ 0x1405B8348 (MiWaitForFreePage.c)
 *     MiDrainCrossPartitionUsage @ 0x1405BE340 (MiDrainCrossPartitionUsage.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1405CCAC0 (PopFxIssueComponentPerfStateChanges.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x1405D6D4C (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     DifKeClearEventWrapper @ 0x1406128E0 (DifKeClearEventWrapper.c)
 *     DifKeResetEventWrapper @ 0x140615360 (DifKeResetEventWrapper.c)
 *     EtwpCovSampCaptureContextStop @ 0x140635EEC (EtwpCovSampCaptureContextStop.c)
 *     sub_140647CF0 @ 0x140647CF0 (sub_140647CF0.c)
 *     WdtpTimerCallback @ 0x14064FA50 (WdtpTimerCallback.c)
 *     NtCopyFileChunk @ 0x1406588A0 (NtCopyFileChunk.c)
 *     CmpLinkHiveToMaster @ 0x14067C9E8 (CmpLinkHiveToMaster.c)
 *     NtSetInformationJobObject @ 0x140685A20 (NtSetInformationJobObject.c)
 *     CmpLockRegistryFreezeAware @ 0x140689388 (CmpLockRegistryFreezeAware.c)
 *     IopMountVolume @ 0x14068E624 (IopMountVolume.c)
 *     CmUnloadKey @ 0x14069E454 (CmUnloadKey.c)
 *     IopCancelIrpsInThreadList @ 0x1406A4C58 (IopCancelIrpsInThreadList.c)
 *     NtClearEvent @ 0x1406A7150 (NtClearEvent.c)
 *     WmipCopyFromEventQueues @ 0x1406C3CA8 (WmipCopyFromEventQueues.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406C66B0 (NtNotifyChangeDirectoryFileEx.c)
 *     NtReadFileScatter @ 0x1406C6AF0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1406E3F70 (NtWriteFileGather.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x1406E825C (SPCallServerHandleWaitForDisplayWindow.c)
 *     EtwpSynchronizeWithLogger @ 0x1406EC9F8 (EtwpSynchronizeWithLogger.c)
 *     EtwpStopTrace @ 0x1406EDFEC (EtwpStopTrace.c)
 *     NtLockFile @ 0x14071D220 (NtLockFile.c)
 *     NtWriteFile @ 0x14071D850 (NtWriteFile.c)
 *     IopQueryXxxInformation @ 0x14071E6BC (IopQueryXxxInformation.c)
 *     IopGetSetSecurityObject @ 0x14071E8F0 (IopGetSetSecurityObject.c)
 *     IopDeleteFile @ 0x14072B630 (IopDeleteFile.c)
 *     IopCloseFile @ 0x14072E9E0 (IopCloseFile.c)
 *     IopXxxControlFile @ 0x1407308F0 (IopXxxControlFile.c)
 *     IopReadFile @ 0x14073A450 (IopReadFile.c)
 *     BuildQueryDirectoryIrp @ 0x1407563A0 (BuildQueryDirectoryIrp.c)
 *     PnpInsertEventInQueue @ 0x14078C398 (PnpInsertEventInQueue.c)
 *     EtwpLogger @ 0x140799440 (EtwpLogger.c)
 *     sub_1407D2C60 @ 0x1407D2C60 (sub_1407D2C60.c)
 *     NtResetEvent @ 0x1407E0340 (NtResetEvent.c)
 *     NtNotifyChangeMultipleKeys @ 0x1407E5600 (NtNotifyChangeMultipleKeys.c)
 *     PoUnregisterPowerSettingCallback @ 0x1407FC690 (PoUnregisterPowerSettingCallback.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x1408081E0 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     IopInvalidateVolumesForDevice @ 0x14080AB40 (IopInvalidateVolumesForDevice.c)
 *     IoSetInformation @ 0x14080AE60 (IoSetInformation.c)
 *     IopCreateArcName @ 0x14080F068 (IopCreateArcName.c)
 *     SshpSessionManagerSendControlEvent @ 0x140811238 (SshpSessionManagerSendControlEvent.c)
 *     PopCancelIgnoreBatteryStatusChange @ 0x14081CFDC (PopCancelIgnoreBatteryStatusChange.c)
 *     PfTInitialize @ 0x14084F9EC (PfTInitialize.c)
 *     ArbArbiterHandler @ 0x140852700 (ArbArbiterHandler.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140859F30 (IoRegisterFsRegistrationChangeMountAware.c)
 *     PfTLoggingWorker @ 0x140882180 (PfTLoggingWorker.c)
 *     NtWaitForDebugEvent @ 0x140929380 (NtWaitForDebugEvent.c)
 *     DbgkpRemoveErrorPort @ 0x140929F90 (DbgkpRemoveErrorPort.c)
 *     IopSendMessageToTrackService @ 0x140935044 (IopSendMessageToTrackService.c)
 *     IoCancelFileOpen @ 0x140935F60 (IoCancelFileOpen.c)
 *     IopFreeBandwidthContract @ 0x14093FC6C (IopFreeBandwidthContract.c)
 *     PfGenerateTrace @ 0x140988074 (PfGenerateTrace.c)
 *     PopFxUpdateVetoMaskWork @ 0x14098E120 (PopFxUpdateVetoMaskWork.c)
 *     PopSetSystemAwayMode @ 0x140990100 (PopSetSystemAwayMode.c)
 *     PopThermalReadCounters @ 0x140990634 (PopThermalReadCounters.c)
 *     TtmiRetrieveEventFromQueue @ 0x1409AB284 (TtmiRetrieveEventFromQueue.c)
 *     RawQueryFsSizeInfo @ 0x1409B5088 (RawQueryFsSizeInfo.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1409EF190 (EtwpCovSampCaptureWorkerThread.c)
 *     sub_140A0D5E8 @ 0x140A0D5E8 (sub_140A0D5E8.c)
 *     PopNewWakeInfo @ 0x140A517EC (PopNewWakeInfo.c)
 *     PfpScenCtxQueryScenarioInformation @ 0x140A52320 (PfpScenCtxQueryScenarioInformation.c)
 *     IoShutdownSystem @ 0x140A651B8 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x140A65554 (IopShutdownBaseFileSystems.c)
 *     PfpScenCtxPrefetchWait @ 0x140A6AACC (PfpScenCtxPrefetchWait.c)
 *     AnFwDisplayFade @ 0x140AAC1BC (AnFwDisplayFade.c)
 *     MiInitializePagedPoolEvents @ 0x140B078E4 (MiInitializePagedPoolEvents.c)
 *     IopGetBootDiskInformation @ 0x140B4F04C (IopGetBootDiskInformation.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

LONG __stdcall KeResetEvent(PRKEVENT Event)
{
  unsigned __int8 CurrentIrql; // di
  LONG SignalState; // esi
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
