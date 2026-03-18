/*
 * XREFs of KeEnumerateNextProcessor @ 0x14021E1A0
 * Callers:
 *     PpmIdlePrepare @ 0x140219D30 (PpmIdlePrepare.c)
 *     PpmParkSteerInterrupts @ 0x14021DC00 (PpmParkSteerInterrupts.c)
 *     KeIntSteerPeriodic @ 0x14021E220 (KeIntSteerPeriodic.c)
 *     PpmParkDistributeUtility @ 0x14021F670 (PpmParkDistributeUtility.c)
 *     PopCheckForIdleness @ 0x1402DE700 (PopCheckForIdleness.c)
 *     KeFlushQueuedDpcs @ 0x1402E16C0 (KeFlushQueuedDpcs.c)
 *     PpmCheckMakeupSkippedChecks @ 0x1402E3970 (PpmCheckMakeupSkippedChecks.c)
 *     PopQueueTargetDpc @ 0x1402E3C10 (PopQueueTargetDpc.c)
 *     KiIpiEnlightenedGuestPriorityKick @ 0x1402FD644 (KiIpiEnlightenedGuestPriorityKick.c)
 *     KeRemoveQueueDpcEx @ 0x1402FFC20 (KeRemoveQueueDpcEx.c)
 *     PpmParkReportParkedCores @ 0x140339D60 (PpmParkReportParkedCores.c)
 *     PpmParkCalculateCoreParkingMask @ 0x14033B440 (PpmParkCalculateCoreParkingMask.c)
 *     PpmParkUnblockIdle @ 0x14033CC80 (PpmParkUnblockIdle.c)
 *     PpmParkReportUnparkedCores @ 0x14033CCD0 (PpmParkReportUnparkedCores.c)
 *     KiIntSteerUpdateDeviceInterruptMask @ 0x14034EB54 (KiIntSteerUpdateDeviceInterruptMask.c)
 *     HalGetMessageRoutingInfo @ 0x140374F60 (HalGetMessageRoutingInfo.c)
 *     PpmPerfApplyProcessorStates @ 0x140396020 (PpmPerfApplyProcessorStates.c)
 *     PpmParkRegisterParking @ 0x1403BF590 (PpmParkRegisterParking.c)
 *     PpmParkApplyPolicy @ 0x1403BFDB4 (PpmParkApplyPolicy.c)
 *     PpmHeteroDetectHgsCores @ 0x1403C0268 (PpmHeteroDetectHgsCores.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x1403C02C4 (PpmHeteroUpdateHgsConfiguration.c)
 *     EmonAllocateResources @ 0x1404CE248 (EmonAllocateResources.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1404F5700 (HvlpAffinityToHvProcessorSet.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x140506338 (IopAddLiveDumpPagesToPartialKernelDump.c)
 *     KiStartProfileTarget @ 0x140516BF0 (KiStartProfileTarget.c)
 *     KiStopProfileTarget @ 0x140516EB0 (KiStopProfileTarget.c)
 *     KeFreezeExecution @ 0x140518240 (KeFreezeExecution.c)
 *     KiSendFreeze @ 0x140518CD0 (KiSendFreeze.c)
 *     KiSendThawExecution @ 0x140518DA0 (KiSendThawExecution.c)
 *     KiIntSteerLogStatus @ 0x14051D36C (KiIntSteerLogStatus.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x14051E000 (KiForceIdleUpdateSchedulerParkState.c)
 *     PpmEstimateIdleDuration @ 0x140560524 (PpmEstimateIdleDuration.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x140560C90 (PpmIdleCheckCoordinatedDependency.c)
 *     PpmIdleWaitForDependentTransitions @ 0x140561CD4 (PpmIdleWaitForDependentTransitions.c)
 *     PpmUnlockProcessors @ 0x140562848 (PpmUnlockProcessors.c)
 *     PpmCapturePerformanceDistribution @ 0x1405717DC (PpmCapturePerformanceDistribution.c)
 *     PpmCheckComputeHeteroResponse @ 0x1405727D0 (PpmCheckComputeHeteroResponse.c)
 *     PpmHeteroDistributeUtility @ 0x140572B00 (PpmHeteroDistributeUtility.c)
 *     PopEtIsrDpcQuery @ 0x1406F2690 (PopEtIsrDpcQuery.c)
 *     PopProcessorInformation @ 0x14076E66C (PopProcessorInformation.c)
 *     PpmCheckInitProcessors @ 0x1407A6EC8 (PpmCheckInitProcessors.c)
 *     PopInitializeHeteroProcessors @ 0x1407A7F88 (PopInitializeHeteroProcessors.c)
 *     PpmPerfResetHistoryAll @ 0x1407A8D20 (PpmPerfResetHistoryAll.c)
 *     PpmEventTraceControlCallback @ 0x1407C2770 (PpmEventTraceControlCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x1408B7EB0 (KiSynchNumaCounterSetCallback.c)
 *     PpmPerfGetBrandedFrequency @ 0x1408E2BCC (PpmPerfGetBrandedFrequency.c)
 *     PpmPerfResizeHistoryAll @ 0x1408E2D64 (PpmPerfResizeHistoryAll.c)
 *     PopEndMirroring @ 0x1409930F0 (PopEndMirroring.c)
 *     KiConfigureSchedulingInformation @ 0x14099C45C (KiConfigureSchedulingInformation.c)
 *     IopLiveDumpCorralProcessors @ 0x1409A8E30 (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpMarkImportantDumpData @ 0x1409A9BE8 (IopLiveDumpMarkImportantDumpData.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x1409A9F7C (IopLiveDumpMarkRequiredDumpData.c)
 *     PnprQuiesceProcessors @ 0x1409AB904 (PnprQuiesceProcessors.c)
 *     VslConnectSwInterrupt @ 0x140A4F53C (VslConnectSwInterrupt.c)
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
