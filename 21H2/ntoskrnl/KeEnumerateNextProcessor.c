/*
 * XREFs of KeEnumerateNextProcessor @ 0x1402CDD00
 * Callers:
 *     PpmParkReportParkedCores @ 0x140228C20 (PpmParkReportParkedCores.c)
 *     PpmCheckMakeupSkippedChecks @ 0x14022C5E0 (PpmCheckMakeupSkippedChecks.c)
 *     PpmParkCalculateCoreParkingMask @ 0x14022C800 (PpmParkCalculateCoreParkingMask.c)
 *     PpmParkUnblockIdle @ 0x14022E810 (PpmParkUnblockIdle.c)
 *     PpmParkReportUnparkedCores @ 0x14022E860 (PpmParkReportUnparkedCores.c)
 *     KiIntSteerUpdateDeviceInterruptMask @ 0x14023F2BC (KiIntSteerUpdateDeviceInterruptMask.c)
 *     KeRemoveQueueDpcEx @ 0x140246860 (KeRemoveQueueDpcEx.c)
 *     KiIpiEnlightenedGuestPriorityKick @ 0x140269334 (KiIpiEnlightenedGuestPriorityKick.c)
 *     PopQueueTargetDpc @ 0x1402698B0 (PopQueueTargetDpc.c)
 *     PopCheckForIdleness @ 0x14026F120 (PopCheckForIdleness.c)
 *     KeFlushQueuedDpcs @ 0x14029DA30 (KeFlushQueuedDpcs.c)
 *     PpmIdlePrepare @ 0x1402C9890 (PpmIdlePrepare.c)
 *     PpmParkSteerInterrupts @ 0x1402CD760 (PpmParkSteerInterrupts.c)
 *     KeIntSteerPeriodic @ 0x1402CDD80 (KeIntSteerPeriodic.c)
 *     PpmParkDistributeUtility @ 0x1402CF3F0 (PpmParkDistributeUtility.c)
 *     HalGetMessageRoutingInfo @ 0x140376ED0 (HalGetMessageRoutingInfo.c)
 *     PpmPerfApplyProcessorStates @ 0x140398AA0 (PpmPerfApplyProcessorStates.c)
 *     PpmParkRegisterParking @ 0x1403C1890 (PpmParkRegisterParking.c)
 *     PpmParkApplyPolicy @ 0x1403C20B4 (PpmParkApplyPolicy.c)
 *     PpmHeteroDetectHgsCores @ 0x1403C2568 (PpmHeteroDetectHgsCores.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x1403C25C4 (PpmHeteroUpdateHgsConfiguration.c)
 *     EmonAllocateResources @ 0x1404D33F8 (EmonAllocateResources.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1404FAAB0 (HvlpAffinityToHvProcessorSet.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x14050B9D8 (IopAddLiveDumpPagesToPartialKernelDump.c)
 *     KiStartProfileTarget @ 0x14051C2E0 (KiStartProfileTarget.c)
 *     KiStopProfileTarget @ 0x14051C5A0 (KiStopProfileTarget.c)
 *     KeFreezeExecution @ 0x14051D930 (KeFreezeExecution.c)
 *     KiSendFreeze @ 0x14051E3C0 (KiSendFreeze.c)
 *     KiSendThawExecution @ 0x14051E490 (KiSendThawExecution.c)
 *     KiIntSteerLogStatus @ 0x140522A5C (KiIntSteerLogStatus.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x1405236F0 (KiForceIdleUpdateSchedulerParkState.c)
 *     PpmEstimateIdleDuration @ 0x140565C14 (PpmEstimateIdleDuration.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x140566380 (PpmIdleCheckCoordinatedDependency.c)
 *     PpmIdleWaitForDependentTransitions @ 0x1405673C4 (PpmIdleWaitForDependentTransitions.c)
 *     PpmUnlockProcessors @ 0x140567F38 (PpmUnlockProcessors.c)
 *     PpmCapturePerformanceDistribution @ 0x140576E5C (PpmCapturePerformanceDistribution.c)
 *     PpmCheckComputeHeteroResponse @ 0x140577E50 (PpmCheckComputeHeteroResponse.c)
 *     PpmHeteroDistributeUtility @ 0x140578180 (PpmHeteroDistributeUtility.c)
 *     PopEtIsrDpcQuery @ 0x140601940 (PopEtIsrDpcQuery.c)
 *     PopProcessorInformation @ 0x14078103C (PopProcessorInformation.c)
 *     PpmCheckInitProcessors @ 0x1407BA2A8 (PpmCheckInitProcessors.c)
 *     PopInitializeHeteroProcessors @ 0x1407BB39C (PopInitializeHeteroProcessors.c)
 *     PpmPerfResetHistoryAll @ 0x1407BC134 (PpmPerfResetHistoryAll.c)
 *     PpmEventTraceControlCallback @ 0x1407D5560 (PpmEventTraceControlCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x1408BB110 (KiSynchNumaCounterSetCallback.c)
 *     PpmPerfGetBrandedFrequency @ 0x1408E636C (PpmPerfGetBrandedFrequency.c)
 *     PpmPerfResizeHistoryAll @ 0x1408E6504 (PpmPerfResizeHistoryAll.c)
 *     PopEndMirroring @ 0x140997250 (PopEndMirroring.c)
 *     KiConfigureSchedulingInformation @ 0x1409A0CB0 (KiConfigureSchedulingInformation.c)
 *     IopLiveDumpCorralProcessors @ 0x1409ACBD0 (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpMarkImportantDumpData @ 0x1409AD988 (IopLiveDumpMarkImportantDumpData.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x1409ADD1C (IopLiveDumpMarkRequiredDumpData.c)
 *     PnprQuiesceProcessors @ 0x1409AF6A4 (PnprQuiesceProcessors.c)
 *     VslConnectSwInterrupt @ 0x140A60044 (VslConnectSwInterrupt.c)
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
