/*
 * XREFs of KeEnumerateNextProcessor @ 0x140294050
 * Callers:
 *     PpmParkRecordNodeStatistics @ 0x14021C050 (PpmParkRecordNodeStatistics.c)
 *     PpmParkReportParkedCores @ 0x140235F70 (PpmParkReportParkedCores.c)
 *     PpmParkCalculateCoreParkingMask @ 0x1402396F0 (PpmParkCalculateCoreParkingMask.c)
 *     PpmParkUnblockIdle @ 0x14023A7D0 (PpmParkUnblockIdle.c)
 *     PpmParkReportUnparkedCores @ 0x14023A820 (PpmParkReportUnparkedCores.c)
 *     PpmPerfApplyProcessorStates @ 0x14023B5A0 (PpmPerfApplyProcessorStates.c)
 *     KiDpcRuntimeHistoryHashTableCleanupTimerCallback @ 0x14023C6B0 (KiDpcRuntimeHistoryHashTableCleanupTimerCallback.c)
 *     KiIntSteerUpdateDeviceInterruptMask @ 0x140248E38 (KiIntSteerUpdateDeviceInterruptMask.c)
 *     KeRemoveQueueDpcEx @ 0x14024E1A0 (KeRemoveQueueDpcEx.c)
 *     PpmCheckMakeupSkippedChecks @ 0x140293320 (PpmCheckMakeupSkippedChecks.c)
 *     PopQueueTargetDpc @ 0x140293BA0 (PopQueueTargetDpc.c)
 *     PpmParkDistributeUtility @ 0x140293CD0 (PpmParkDistributeUtility.c)
 *     PopCheckForIdleness @ 0x1402D66F0 (PopCheckForIdleness.c)
 *     KeFlushQueuedDpcs @ 0x1402D96F0 (KeFlushQueuedDpcs.c)
 *     KeFreezeExecution @ 0x1402DA0F0 (KeFreezeExecution.c)
 *     KiSendThawExecution @ 0x1402DA5B0 (KiSendThawExecution.c)
 *     KiSendFreeze @ 0x1402DA81C (KiSendFreeze.c)
 *     KiIpiEnlightenedGuestPriorityKick @ 0x1403000B0 (KiIpiEnlightenedGuestPriorityKick.c)
 *     KeIntSteerPeriodic @ 0x140300190 (KeIntSteerPeriodic.c)
 *     KiUpdateTime @ 0x140304060 (KiUpdateTime.c)
 *     PpmIdlePrepare @ 0x1403086B0 (PpmIdlePrepare.c)
 *     PpmIdleSelectStates @ 0x1403A1620 (PpmIdleSelectStates.c)
 *     HalGetMessageRoutingInfo @ 0x1403AFF80 (HalGetMessageRoutingInfo.c)
 *     PpmParkRegisterParking @ 0x1403CE6F8 (PpmParkRegisterParking.c)
 *     PpmParkApplyPolicy @ 0x1403CEDC4 (PpmParkApplyPolicy.c)
 *     PpmHeteroDetectHgsCores @ 0x1403CF218 (PpmHeteroDetectHgsCores.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x1403CF26C (PpmHeteroUpdateHgsConfiguration.c)
 *     KeEtwInitializeCpuStarvationProvider @ 0x1403DA43C (KeEtwInitializeCpuStarvationProvider.c)
 *     EmonAllocateResources @ 0x14051FFF8 (EmonAllocateResources.c)
 *     HvlpAffinityToHvProcessorSet @ 0x14054C8F0 (HvlpAffinityToHvProcessorSet.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x14055CF88 (IopAddLiveDumpPagesToPartialKernelDump.c)
 *     KiStartProfileTarget @ 0x140571A40 (KiStartProfileTarget.c)
 *     KiStopProfileTarget @ 0x140571D50 (KiStopProfileTarget.c)
 *     KeGetMostEfficientProcessorInMask @ 0x140571FDC (KeGetMostEfficientProcessorInMask.c)
 *     KiIntSteerLogStatus @ 0x140578454 (KiIntSteerLogStatus.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x140578BB4 (KiBugCheckRecoveryFreezeOtherProcessors.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x14057A2A0 (KiForceIdleUpdateSchedulerParkState.c)
 *     WheaFlushETWEventsSelectProcessor @ 0x14057C2F0 (WheaFlushETWEventsSelectProcessor.c)
 *     PoExecuteIdleCheck @ 0x1405C6C1C (PoExecuteIdleCheck.c)
 *     PpmEstimateIdleDuration @ 0x1405C7284 (PpmEstimateIdleDuration.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x1405C7798 (PpmIdleCheckCoordinatedDependency.c)
 *     PpmIdleWaitForDependentTransitions @ 0x1405C86F0 (PpmIdleWaitForDependentTransitions.c)
 *     PpmUnlockProcessors @ 0x1405C8FE4 (PpmUnlockProcessors.c)
 *     PpmCapturePerformanceDistribution @ 0x1405D6FBC (PpmCapturePerformanceDistribution.c)
 *     PpmCheckComputeHeteroResponse @ 0x1405D7BF0 (PpmCheckComputeHeteroResponse.c)
 *     PpmHeteroDistributeUtility @ 0x1405D7FF0 (PpmHeteroDistributeUtility.c)
 *     PpmEventHgsHardwareTable @ 0x1405D997C (PpmEventHgsHardwareTable.c)
 *     PopEtIsrDpcQuery @ 0x1406BE584 (PopEtIsrDpcQuery.c)
 *     PopProcessorInformation @ 0x1406C800C (PopProcessorInformation.c)
 *     ExProcessorCounterSetCallback @ 0x1406D0CB0 (ExProcessorCounterSetCallback.c)
 *     PpmPerfGetFrequencyBandStats @ 0x1407F9EBC (PpmPerfGetFrequencyBandStats.c)
 *     PpmPerfResetHistoryAll @ 0x14081A760 (PpmPerfResetHistoryAll.c)
 *     PpmCheckInitProcessors @ 0x140849690 (PpmCheckInitProcessors.c)
 *     PpmEventHeteroConfigUpdate @ 0x140849DF0 (PpmEventHeteroConfigUpdate.c)
 *     PpmHeteroDetectFavoredCores @ 0x14084A5BC (PpmHeteroDetectFavoredCores.c)
 *     PpmEventTraceControlCallback @ 0x140864680 (PpmEventTraceControlCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x140960E60 (KiSynchNumaCounterSetCallback.c)
 *     PpmPerfGetBrandedFrequency @ 0x14098EB00 (PpmPerfGetBrandedFrequency.c)
 *     PpmPerfResizeHistoryAll @ 0x14098EC78 (PpmPerfResizeHistoryAll.c)
 *     PopEndMirroring @ 0x140A4E4B0 (PopEndMirroring.c)
 *     KiConfigureSchedulingInformation @ 0x140A59154 (KiConfigureSchedulingInformation.c)
 *     IopLiveDumpCorralProcessors @ 0x140A660C0 (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpMarkImportantDumpData @ 0x140A66EB4 (IopLiveDumpMarkImportantDumpData.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x140A67248 (IopLiveDumpMarkRequiredDumpData.c)
 *     PnprQuiesceProcessors @ 0x140A68BE8 (PnprQuiesceProcessors.c)
 *     VslConnectSwInterrupt @ 0x140B12930 (VslConnectSwInterrupt.c)
 *     KiInitializeDpcRuntimeHistoryHashTables @ 0x140B24034 (KiInitializeDpcRuntimeHistoryHashTables.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeEnumerateNextProcessor(_DWORD *a1, unsigned __int16 **a2)
{
  unsigned int v3; // r8d
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r8

  if ( *a2 )
    v3 = **a2;
  else
    v3 = *((unsigned __int16 *)a2 + 8) + 1;
  v4 = (unsigned __int64)a2[1];
  if ( v4 )
  {
LABEL_4:
    _BitScanForward64(&v5, v4);
    a2[1] = (unsigned __int16 *)(v4 & ~(1LL << v5));
    *a1 = KiProcessorNumberToIndexMappingTable[64 * *((unsigned __int16 *)a2 + 8) + (unsigned __int8)v5];
    return 0LL;
  }
  else
  {
    while ( (unsigned __int16)++*((_WORD *)a2 + 8) < v3 )
    {
      v4 = *(_QWORD *)&(*a2)[4 * *((unsigned __int16 *)a2 + 8) + 4];
      a2[1] = (unsigned __int16 *)v4;
      if ( v4 )
        goto LABEL_4;
    }
    return 3221226021LL;
  }
}
