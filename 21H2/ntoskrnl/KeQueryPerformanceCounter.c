/*
 * XREFs of KeQueryPerformanceCounter @ 0x14022C340
 * Callers:
 *     PpmIdlePrepare @ 0x140224F90 (PpmIdlePrepare.c)
 *     RtlGetInterruptTimePrecise @ 0x14022A7B0 (RtlGetInterruptTimePrecise.c)
 *     PpmIdleSnapConcurrency @ 0x14022AF70 (PpmIdleSnapConcurrency.c)
 *     EtwpGetLoggerTimeStamp @ 0x14022CAD8 (EtwpGetLoggerTimeStamp.c)
 *     KiExecuteAllDpcs @ 0x1402472B0 (KiExecuteAllDpcs.c)
 *     KeQuerySchedulingGroupHistory @ 0x140253A24 (KeQuerySchedulingGroupHistory.c)
 *     MiScheduleZeroPageThreads @ 0x140272E84 (MiScheduleZeroPageThreads.c)
 *     RtlGetSystemTimePrecise @ 0x140278F20 (RtlGetSystemTimePrecise.c)
 *     PopGetIdleTimesCallback @ 0x14027BED0 (PopGetIdleTimesCallback.c)
 *     PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x140281660 (PopDeepSleepResiliencyPhaseAccountingUpdate.c)
 *     KeInsertSchedulingGroup @ 0x140285278 (KeInsertSchedulingGroup.c)
 *     KiUpdateCpuTargetByWeight @ 0x140287FB8 (KiUpdateCpuTargetByWeight.c)
 *     KiUpdateCpuTargetByRate @ 0x140288290 (KiUpdateCpuTargetByRate.c)
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x14028AAA0 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     KiSetClockTickRate @ 0x1402931B0 (KiSetClockTickRate.c)
 *     MiAllocateContiguousMemory @ 0x140294F3C (MiAllocateContiguousMemory.c)
 *     EtwGetKernelTraceTimestamp @ 0x14029B060 (EtwGetKernelTraceTimestamp.c)
 *     PpmPerfApplyDomainState @ 0x1402A05F0 (PpmPerfApplyDomainState.c)
 *     KiUpdateTimeAssist @ 0x1402AB2E0 (KiUpdateTimeAssist.c)
 *     EtwGetKernelTraceTimestampSilo @ 0x1402AE19C (EtwGetKernelTraceTimestampSilo.c)
 *     HalpSetVirtualRtc @ 0x1402B617C (HalpSetVirtualRtc.c)
 *     MiReassessZeroThreads @ 0x1402BB5C4 (MiReassessZeroThreads.c)
 *     HalpTimerDpcRoutine @ 0x1402D15B0 (HalpTimerDpcRoutine.c)
 *     ?SmReadPickStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU?$SMKM_STORE@USM_TRAITS@@@@2@Z @ 0x1402E08E0 (-SmReadPickStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU-$SMKM_STO.c)
 *     StEtaStart @ 0x1402E227C (StEtaStart.c)
 *     MiAllocatePagesForMdl @ 0x1402E33F4 (MiAllocatePagesForMdl.c)
 *     RtlGetMultiTimePrecise @ 0x1402ECFA0 (RtlGetMultiTimePrecise.c)
 *     EtwpReserveTraceBuffer @ 0x1403506F0 (EtwpReserveTraceBuffer.c)
 *     ?StDmInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@0@Z @ 0x14035DC74 (-StDmInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@0@Z.c)
 *     StLcInitialize @ 0x14035E7F0 (StLcInitialize.c)
 *     KeRebaselineInterruptTime @ 0x140383F28 (KeRebaselineInterruptTime.c)
 *     HalpQueryVirtualRtc @ 0x14038402C (HalpQueryVirtualRtc.c)
 *     HalpTimerRestorePerformanceCounter @ 0x140386CD8 (HalpTimerRestorePerformanceCounter.c)
 *     ?SmAsyncReadQueueWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140387D30 (-SmAsyncReadQueueWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     KiTimerExpiration @ 0x1403892F0 (KiTimerExpiration.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x14038D7BC (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     KeRebaselineSystemTime @ 0x14038DD98 (KeRebaselineSystemTime.c)
 *     PpmIdleSelectStates @ 0x140395580 (PpmIdleSelectStates.c)
 *     KiUpdateSystemTime @ 0x140397EA8 (KiUpdateSystemTime.c)
 *     PpmPerfApplyProcessorState @ 0x140398B3C (PpmPerfApplyProcessorState.c)
 *     BgpFwQueryPerformanceCounter @ 0x14039BE80 (BgpFwQueryPerformanceCounter.c)
 *     KiIpiGenericCallTarget @ 0x1403A50A0 (KiIpiGenericCallTarget.c)
 *     HalpTimerInitSystem @ 0x1403A85B0 (HalpTimerInitSystem.c)
 *     HalpTimerReadTimerPairWithLatencyLimit @ 0x1403A9BD8 (HalpTimerReadTimerPairWithLatencyLimit.c)
 *     HalpTimerDetermineValidTimerPairReadLatency @ 0x1403A9CBC (HalpTimerDetermineValidTimerPairReadLatency.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x1403B4750 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     KiSetupTimeIncrement @ 0x1403B4944 (KiSetupTimeIncrement.c)
 *     HalWheaUpdateCmciPolicy @ 0x1403BAA80 (HalWheaUpdateCmciPolicy.c)
 *     PpmInstallFeedbackCounters @ 0x1403C1278 (PpmInstallFeedbackCounters.c)
 *     PpmResetPerformanceAccumulation @ 0x1403C23B4 (PpmResetPerformanceAccumulation.c)
 *     PpmQueryTime @ 0x1403C2400 (PpmQueryTime.c)
 *     PpmResetIdlePolicy @ 0x1403C4798 (PpmResetIdlePolicy.c)
 *     HalpCmciLoadThresholdConfiguration @ 0x1403C55B8 (HalpCmciLoadThresholdConfiguration.c)
 *     MiZeroBootLargePages @ 0x1403CABF4 (MiZeroBootLargePages.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x1403CE86C (HalpTimerSchedulePeriodicQueries.c)
 *     PopWriteBsdPoInfo @ 0x1403F8074 (PopWriteBsdPoInfo.c)
 *     HalpTimerCaptureCloestAuxiliaryQpcPair @ 0x1404B649C (HalpTimerCaptureCloestAuxiliaryQpcPair.c)
 *     HalpTimerCaptureCurrentAuxiliaryQpcPair @ 0x1404B6550 (HalpTimerCaptureCurrentAuxiliaryQpcPair.c)
 *     HalpCmciHandler @ 0x1404BCAA8 (HalpCmciHandler.c)
 *     HalpTscFallback @ 0x1404C1610 (HalpTscFallback.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x1404C35C0 (HalpTimerMeasureProcessorsWorker.c)
 *     EmonOverflowHandler @ 0x1404D38A0 (EmonOverflowHandler.c)
 *     Amd64OverflowHandler @ 0x1404DDAB0 (Amd64OverflowHandler.c)
 *     XmRdtscOp @ 0x1404E6CC0 (XmRdtscOp.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x1405089CC (IopLiveDumpGetMillisecondCounter.c)
 *     KeFreezeExecution @ 0x14051D6F0 (KeFreezeExecution.c)
 *     KeSwitchFrozenProcessor @ 0x14051DB00 (KeSwitchFrozenProcessor.c)
 *     KeThawExecution @ 0x14051DBE0 (KeThawExecution.c)
 *     KiCheckStall @ 0x14051DD20 (KiCheckStall.c)
 *     KiFreezeTargetExecution @ 0x14051DE60 (KiFreezeTargetExecution.c)
 *     PoInitiateProcessorWake @ 0x140565510 (PoInitiateProcessorWake.c)
 *     PpmIdleInstallConcurrency @ 0x140566A20 (PpmIdleInstallConcurrency.c)
 *     PpmIdleRemoveConcurrency @ 0x140566C50 (PpmIdleRemoveConcurrency.c)
 *     PpmIdleSnapConcurrencyIdleTime @ 0x140566E00 (PpmIdleSnapConcurrencyIdleTime.c)
 *     PpmIdleTransitionStall @ 0x140566F98 (PpmIdleTransitionStall.c)
 *     PpmTraceExitLatency @ 0x140567BE0 (PpmTraceExitLatency.c)
 *     PopFxUpdateDeviceIRPhaseAccounting @ 0x14056D598 (PopFxUpdateDeviceIRPhaseAccounting.c)
 *     PdcPoCurrentPdcPhase @ 0x1405763C0 (PdcPoCurrentPdcPhase.c)
 *     PopDeepSleepResiliencyPhaseAccountingBegin @ 0x140577810 (PopDeepSleepResiliencyPhaseAccountingBegin.c)
 *     PopDeepSleepResiliencyPhaseAccountingEnd @ 0x14057792C (PopDeepSleepResiliencyPhaseAccountingEnd.c)
 *     ?StDeviceIoIssue@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z @ 0x14059A854 (-StDeviceIoIssue@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14059AD98 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StNpLeafPageIn@?$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z @ 0x14059CAD0 (-StNpLeafPageIn@-$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z.c)
 *     StEtaIoStart @ 0x14059D3E0 (StEtaIoStart.c)
 *     StLcBucketsCopy @ 0x14059D550 (StLcBucketsCopy.c)
 *     WmiGetClock @ 0x1405A6760 (WmiGetClock.c)
 *     EtwpGetDurationSince @ 0x1405A8A74 (EtwpGetDurationSince.c)
 *     EtwpCompressPendingBuffers @ 0x1405ACA9C (EtwpCompressPendingBuffers.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x1405C5540 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreen @ 0x1405C5704 (BgpFwDisplayBugCheckScreen.c)
 *     NtQueryInformationProcess @ 0x1406212A0 (NtQueryInformationProcess.c)
 *     PspUserThreadStartup @ 0x140646E40 (PspUserThreadStartup.c)
 *     NtPowerInformation @ 0x1406777D0 (NtPowerInformation.c)
 *     NtQueryPerformanceCounter @ 0x140692ED0 (NtQueryPerformanceCounter.c)
 *     ExpAllocateUuids @ 0x1406B9844 (ExpAllocateUuids.c)
 *     EtwpAddLogHeader @ 0x1406E03E8 (EtwpAddLogHeader.c)
 *     PopExecutePowerAction @ 0x1407751C8 (PopExecutePowerAction.c)
 *     PopIssueActionRequest @ 0x140775A08 (PopIssueActionRequest.c)
 *     PopResumeApps @ 0x1407764C4 (PopResumeApps.c)
 *     PopResumeServices @ 0x14077653C (PopResumeServices.c)
 *     EtwInitializeSiloState @ 0x14079ABF8 (EtwInitializeSiloState.c)
 *     Phase1Initialization @ 0x1407B3AA0 (Phase1Initialization.c)
 *     PpmRegisterPerfStates @ 0x1407B9CE0 (PpmRegisterPerfStates.c)
 *     CmpRecordShutdownStopTime @ 0x14086BF90 (CmpRecordShutdownStopTime.c)
 *     IoCaptureLiveDump @ 0x140896298 (IoCaptureLiveDump.c)
 *     RtlCapabilityCheck @ 0x140913350 (RtlCapabilityCheck.c)
 *     RtlpCapChkTelemetryRunOnce @ 0x14091B640 (RtlpCapChkTelemetryRunOnce.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409910F4 (PopTransitionSystemPowerStateEx.c)
 *     PoBroadcastSystemState @ 0x1409922E0 (PoBroadcastSystemState.c)
 *     PopInvokeSystemStateHandler @ 0x140992A68 (PopInvokeSystemStateHandler.c)
 *     PopHiberCheckForDebugBreak @ 0x14099481C (PopHiberCheckForDebugBreak.c)
 *     PopDecompressHiberBlocks @ 0x140994874 (PopDecompressHiberBlocks.c)
 *     KiCalibrateTimeAdjustment @ 0x140994B90 (KiCalibrateTimeAdjustment.c)
 *     HalpCmciInit @ 0x1409A1244 (HalpCmciInit.c)
 *     HalpDpReplaceControl @ 0x1409A8780 (HalpDpReplaceControl.c)
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x1409ACFE0 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 *     PnprGetMillisecondCounter @ 0x1409AD79C (PnprGetMillisecondCounter.c)
 *     PopWriteImageHeader @ 0x1409B1D20 (PopWriteImageHeader.c)
 *     KdInitSystem @ 0x1409B5160 (KdInitSystem.c)
 *     KdpSendWaitContinue @ 0x1409B84F4 (KdpSendWaitContinue.c)
 *     VfFillAllocatedMemory @ 0x1409DFFF4 (VfFillAllocatedMemory.c)
 *     InitBootProcessor @ 0x140A3AAF4 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A3B6A4 (Phase1InitializationDiscard.c)
 *     PoInitSystem @ 0x140A3F948 (PoInitSystem.c)
 *     EtwpInitialize @ 0x140A42414 (EtwpInitialize.c)
 *     MiInitNucleus @ 0x140A42F34 (MiInitNucleus.c)
 *     KeInitializeClock @ 0x140A4B7CC (KeInitializeClock.c)
 *     MiInitSystem @ 0x140A53E5C (MiInitSystem.c)
 *     ViInitSystemPhase0 @ 0x140A6FAB8 (ViInitSystemPhase0.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14022AA30 (HalpTimerGetInternalData.c)
 *     HalpTimerScaleCounter @ 0x1403962F0 (HalpTimerScaleCounter.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

LARGE_INTEGER __stdcall KeQueryPerformanceCounter(PLARGE_INTEGER PerformanceFrequency)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  LARGE_INTEGER result; // rax
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // r9
  signed __int64 v10; // rax
  int v11; // r8d
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  LONGLONG v14; // rbx
  __int64 v15; // r8
  __int64 v16; // r10
  unsigned __int64 v17; // r10
  signed __int64 v18; // rdx
  __int64 InternalData; // rax
  __int64 v20; // rax
  __int64 v21; // r14
  signed __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // rax
  unsigned __int64 v25; // r11
  signed __int64 v26; // rax
  int v27; // r9d
  unsigned __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r10
  unsigned __int64 v31; // r10
  __int64 v32; // rdx
  signed __int32 v33[10]; // [rsp+0h] [rbp-28h] BYREF
  LONGLONG v34; // [rsp+38h] [rbp+10h]

  v2 = HalpPerformanceCounter;
  if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
  {
    v34 = 10000000LL;
    if ( HalpTimerReferencePage )
    {
      if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
        v3 = *(_QWORD *)(HalpPerformanceCounter + 72)
           + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number;
      else
        v3 = *(_QWORD *)(HalpPerformanceCounter + 72);
      result.QuadPart = MEMORY[0xFFFFF780000003B8]
                      + (((unsigned __int64)(*(__int64 (__fastcall **)(__int64))(HalpPerformanceCounter + 112))(v3)
                        * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64);
    }
    else
    {
      if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
      {
        InternalData = HalpTimerGetInternalData(HalpPerformanceCounter);
        v20 = (*(__int64 (__fastcall **)(__int64))(v2 + 112))(InternalData);
        v21 = *(_QWORD *)(v2 + 208);
        v22 = v20;
      }
      else
      {
        do
        {
          v21 = *(_QWORD *)(v2 + 208);
          do
          {
            v23 = *(_QWORD *)(v2 + 200);
            v24 = HalpTimerGetInternalData(v2);
            v25 = (*(__int64 (__fastcall **)(__int64))(v2 + 112))(v24);
            _InterlockedOr(v33, 0);
            v26 = *(_QWORD *)(v2 + 200);
          }
          while ( v23 != v26 );
        }
        while ( v21 != *(_QWORD *)(v2 + 208) );
        v27 = *(_DWORD *)(v2 + 220);
        v28 = v23 ^ v25;
        if ( _bittest64((const __int64 *)&v28, (unsigned __int8)(v27 - 1)) )
        {
          v29 = 1LL;
          if ( v27 == 64 )
            v30 = -1LL;
          else
            v30 = (1LL << v27) - 1;
          if ( v27 != 64 )
            v29 = 1LL << v27;
          v31 = v23 & v30;
          v22 = v25 | v23 ^ v31;
          if ( v25 < v31 )
            v22 += v29;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 200), v22, v26);
        }
        else
        {
          if ( v27 == 64 )
            v32 = -1LL;
          else
            v32 = (1LL << v27) - 1;
          v22 = v25 | v23 & ~v32;
        }
      }
      result.QuadPart = HalpTimerScaleCounter(v21 + v22, *(_QWORD *)(v2 + 192), 10000000LL);
    }
  }
  else
  {
    v34 = *(_QWORD *)(HalpPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
    {
      v5 = HalpTimerGetInternalData(HalpPerformanceCounter);
      result.QuadPart = *(_QWORD *)(v2 + 208) + (*(__int64 (__fastcall **)(__int64))(v2 + 112))(v5);
    }
    else
    {
      do
      {
        v6 = *(_QWORD *)(v2 + 208);
        do
        {
          v7 = *(_QWORD *)(v2 + 200);
          v8 = HalpTimerGetInternalData(v2);
          v9 = (*(__int64 (__fastcall **)(__int64))(v2 + 112))(v8);
          _InterlockedOr(v33, 0);
          v10 = *(_QWORD *)(v2 + 200);
        }
        while ( v7 != v10 );
      }
      while ( v6 != *(_QWORD *)(v2 + 208) );
      v11 = *(_DWORD *)(v2 + 220);
      v12 = v7 ^ v9;
      if ( _bittest64((const __int64 *)&v12, (unsigned __int8)(v11 - 1)) )
      {
        if ( v11 == 64 )
        {
          v16 = -1LL;
          v15 = 1LL;
        }
        else
        {
          v15 = 1LL << v11;
          v16 = v15 - 1;
        }
        v17 = v7 & v16;
        v18 = v9 | v7 ^ v17;
        if ( v9 < v17 )
          v18 += v15;
        _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 200), v18, v10);
        result.QuadPart = v6 + v18;
      }
      else
      {
        if ( v11 == 64 )
          v13 = -1LL;
        else
          v13 = (1LL << v11) - 1;
        result.QuadPart = v6 + (v9 | v7 & ~v13);
      }
    }
  }
  if ( v2 == HalpOriginalPerformanceCounter || !HalpOriginalPerformanceCounter )
  {
    if ( PerformanceFrequency )
      PerformanceFrequency->QuadPart = v34;
  }
  else
  {
    v14 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
      v14 = 10000000LL;
    result.QuadPart = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HalpTimerScaleCounter)(
                        (LARGE_INTEGER)result.QuadPart,
                        v34,
                        v14);
    if ( PerformanceFrequency )
      PerformanceFrequency->QuadPart = v14;
  }
  return result;
}
