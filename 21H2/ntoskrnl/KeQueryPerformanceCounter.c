/*
 * XREFs of KeQueryPerformanceCounter @ 0x1403027F0
 * Callers:
 *     KiUpdateCpuTargetByWeight @ 0x140207A84 (KiUpdateCpuTargetByWeight.c)
 *     KiUpdateCpuTargetByRate @ 0x140207CCC (KiUpdateCpuTargetByRate.c)
 *     KeInsertSchedulingGroup @ 0x140208434 (KeInsertSchedulingGroup.c)
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x140209000 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     KeQuerySchedulingGroupHistory @ 0x140209B54 (KeQuerySchedulingGroupHistory.c)
 *     KiUpdateTimeAssist @ 0x14020F07C (KiUpdateTimeAssist.c)
 *     PpmIdleSnapConcurrency @ 0x1402126A4 (PpmIdleSnapConcurrency.c)
 *     MiAllocateContiguousMemory @ 0x140214244 (MiAllocateContiguousMemory.c)
 *     EtwGetKernelTraceTimestamp @ 0x140223A20 (EtwGetKernelTraceTimestamp.c)
 *     PpmPerfApplyDomainState @ 0x14022560C (PpmPerfApplyDomainState.c)
 *     CcCopyWriteEx @ 0x140226550 (CcCopyWriteEx.c)
 *     HalpSetVirtualRtc @ 0x14022DA40 (HalpSetVirtualRtc.c)
 *     RtlGetSystemTimePrecise @ 0x14022DB00 (RtlGetSystemTimePrecise.c)
 *     KiSetClockTickRate @ 0x14022F6A4 (KiSetClockTickRate.c)
 *     KiLogClockIncrementUpdate @ 0x14022F99C (KiLogClockIncrementUpdate.c)
 *     PpmPerfApplyProcessorState @ 0x14023B798 (PpmPerfApplyProcessorState.c)
 *     MiReassessZeroThreads @ 0x1402452D4 (MiReassessZeroThreads.c)
 *     HalpTimerDpcRoutine @ 0x140259DD0 (HalpTimerDpcRoutine.c)
 *     ?StDmInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@0@Z @ 0x140260EFC (-StDmInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@0@Z.c)
 *     StLcInitialize @ 0x1402612BC (StLcInitialize.c)
 *     RtlGetMultiTimePrecise @ 0x1402622C0 (RtlGetMultiTimePrecise.c)
 *     StEtaStart @ 0x140262DBC (StEtaStart.c)
 *     MiAllocatePagesForMdl @ 0x140265428 (MiAllocatePagesForMdl.c)
 *     MiScheduleZeroPageThreads @ 0x140267B58 (MiScheduleZeroPageThreads.c)
 *     EtwGetKernelTraceTimestampSilo @ 0x14027B3C0 (EtwGetKernelTraceTimestampSilo.c)
 *     CcFlushCachePriv @ 0x140283030 (CcFlushCachePriv.c)
 *     CcCompleteAsyncRead @ 0x14028F324 (CcCompleteAsyncRead.c)
 *     PopGetIdleTimesCallback @ 0x140293600 (PopGetIdleTimesCallback.c)
 *     KiFreezeTargetExecution @ 0x14029AF90 (KiFreezeTargetExecution.c)
 *     KiProcessExpiredTimerList @ 0x1402A7C20 (KiProcessExpiredTimerList.c)
 *     KiExecuteAllDpcs @ 0x1402A9790 (KiExecuteAllDpcs.c)
 *     EtwpReserveTraceBuffer @ 0x1402ABBF0 (EtwpReserveTraceBuffer.c)
 *     CcMapAndCopyInToCache @ 0x1402BD970 (CcMapAndCopyInToCache.c)
 *     MiZeroLargePages @ 0x1402C41D0 (MiZeroLargePages.c)
 *     PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x1402D6094 (PopDeepSleepResiliencyPhaseAccountingUpdate.c)
 *     KeFreezeExecution @ 0x1402DA0F0 (KeFreezeExecution.c)
 *     KeThawExecution @ 0x1402DA4C0 (KeThawExecution.c)
 *     EtwpGetLoggerTimeStamp @ 0x1402E1D0C (EtwpGetLoggerTimeStamp.c)
 *     KeQuerySystemTimePrecise @ 0x1402F08A0 (KeQuerySystemTimePrecise.c)
 *     CcAsyncCopyRead @ 0x1402F5790 (CcAsyncCopyRead.c)
 *     KiCheckStall @ 0x140302560 (KiCheckStall.c)
 *     KiUpdateProcessConcurrencyCounts @ 0x140302930 (KiUpdateProcessConcurrencyCounts.c)
 *     RtlGetInterruptTimePrecise @ 0x140303490 (RtlGetInterruptTimePrecise.c)
 *     KeClockInterruptNotify @ 0x140305780 (KeClockInterruptNotify.c)
 *     PpmIdlePrepare @ 0x1403086B0 (PpmIdlePrepare.c)
 *     CcFetchDataForRead @ 0x140329470 (CcFetchDataForRead.c)
 *     CcCopyReadEx @ 0x14032A8C0 (CcCopyReadEx.c)
 *     HalpQueryVirtualRtc @ 0x14038B7AC (HalpQueryVirtualRtc.c)
 *     KeRebaselineInterruptTime @ 0x14038B8A0 (KeRebaselineInterruptTime.c)
 *     HalpTimerRestorePerformanceCounter @ 0x1403919F0 (HalpTimerRestorePerformanceCounter.c)
 *     ?SmReadPickStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU?$SMKM_STORE@USM_TRAITS@@@@2@Z @ 0x140393AA0 (-SmReadPickStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU-$SMKM_STO.c)
 *     ?SmAsyncReadQueueWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140394C30 (-SmAsyncReadQueueWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     KiTimerExpiration @ 0x140395300 (KiTimerExpiration.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x140398C28 (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     KeRebaselineSystemTime @ 0x140399340 (KeRebaselineSystemTime.c)
 *     PpmIdleSelectStates @ 0x1403A1620 (PpmIdleSelectStates.c)
 *     KiUpdateSystemTime @ 0x1403A493C (KiUpdateSystemTime.c)
 *     PopWriteBsdPoInfo @ 0x1403A68B0 (PopWriteBsdPoInfo.c)
 *     BgpFwQueryPerformanceCounter @ 0x1403A7BD8 (BgpFwQueryPerformanceCounter.c)
 *     KiIpiGenericCallTarget @ 0x1403B4A10 (KiIpiGenericCallTarget.c)
 *     EtwpFileModeCompress @ 0x1403B4AB0 (EtwpFileModeCompress.c)
 *     PpmResetPerfTimes @ 0x1403B4C90 (PpmResetPerfTimes.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x1403BA9B4 (HalpTimerSchedulePeriodicQueries.c)
 *     HalpTimerInitSystem @ 0x1403BB0A0 (HalpTimerInitSystem.c)
 *     HalpTimerReadTimerPairWithLatencyLimit @ 0x1403BC1C4 (HalpTimerReadTimerPairWithLatencyLimit.c)
 *     HalpTimerDetermineValidTimerPairReadLatency @ 0x1403BC2A0 (HalpTimerDetermineValidTimerPairReadLatency.c)
 *     MiZeroPageCalibrateIsr @ 0x1403CA510 (MiZeroPageCalibrateIsr.c)
 *     PpmInstallFeedbackCounters @ 0x1403CE4FC (PpmInstallFeedbackCounters.c)
 *     PpmQueryTime @ 0x1403CF338 (PpmQueryTime.c)
 *     PpmResetIdlePolicy @ 0x1403D1DE4 (PpmResetIdlePolicy.c)
 *     HalpCmciLoadThresholdConfiguration @ 0x1403D2888 (HalpCmciLoadThresholdConfiguration.c)
 *     MiZeroNodePages @ 0x1403D3960 (MiZeroNodePages.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403D452C (MiTimeSingleLargePageZeroWorker.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x1403D6F40 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     KiSetupTimeIncrement @ 0x1403D94C0 (KiSetupTimeIncrement.c)
 *     PpmIdleInstallConcurrency @ 0x1403D9880 (PpmIdleInstallConcurrency.c)
 *     MiZeroBootLargePages @ 0x1403D9D88 (MiZeroBootLargePages.c)
 *     HalWheaUpdateCmciPolicy @ 0x1403DA050 (HalWheaUpdateCmciPolicy.c)
 *     KiComputeDispatchInterruptCostDpcRoutine @ 0x1403DB6F0 (KiComputeDispatchInterruptCostDpcRoutine.c)
 *     HalpTimerCaptureCloestAuxiliaryQpcPair @ 0x140502E6C (HalpTimerCaptureCloestAuxiliaryQpcPair.c)
 *     HalpTimerCaptureCurrentAuxiliaryQpcPair @ 0x140502F20 (HalpTimerCaptureCurrentAuxiliaryQpcPair.c)
 *     HalpCmciHandler @ 0x140509620 (HalpCmciHandler.c)
 *     HalpCollectProfileCorruptionStatus @ 0x14050B2E4 (HalpCollectProfileCorruptionStatus.c)
 *     HalpScanForProfilingCorruption @ 0x14050BAC8 (HalpScanForProfilingCorruption.c)
 *     HalpTscFallback @ 0x14050DBB0 (HalpTscFallback.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x14050F9E0 (HalpTimerMeasureProcessorsWorker.c)
 *     EmonAllocateCounter @ 0x14051FE4C (EmonAllocateCounter.c)
 *     EmonOverflowHandler @ 0x140520920 (EmonOverflowHandler.c)
 *     Amd64AllocateCounter @ 0x14052B218 (Amd64AllocateCounter.c)
 *     Amd64OverflowHandler @ 0x14052C290 (Amd64OverflowHandler.c)
 *     XmRdtscOp @ 0x1405369A0 (XmRdtscOp.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x14055A628 (IopLiveDumpGetMillisecondCounter.c)
 *     KeSwitchFrozenProcessor @ 0x140573670 (KeSwitchFrozenProcessor.c)
 *     PoInitiateProcessorWake @ 0x1405C6DD0 (PoInitiateProcessorWake.c)
 *     PpmIdleRemoveConcurrency @ 0x1405C8360 (PpmIdleRemoveConcurrency.c)
 *     PpmIdleSnapConcurrencyIdleTime @ 0x1405C850C (PpmIdleSnapConcurrencyIdleTime.c)
 *     PpmIdleTransitionStall @ 0x1405C85B0 (PpmIdleTransitionStall.c)
 *     PpmTraceExitLatency @ 0x1405C8ECC (PpmTraceExitLatency.c)
 *     PopFxUpdateDeviceIRPhaseAccounting @ 0x1405CE584 (PopFxUpdateDeviceIRPhaseAccounting.c)
 *     PdcPoCurrentPdcPhase @ 0x1405D6AC0 (PdcPoCurrentPdcPhase.c)
 *     PopDeepSleepResiliencyPhaseAccountingBegin @ 0x1405D7930 (PopDeepSleepResiliencyPhaseAccountingBegin.c)
 *     PopDeepSleepResiliencyPhaseAccountingEnd @ 0x1405D7A4C (PopDeepSleepResiliencyPhaseAccountingEnd.c)
 *     ?StDeviceIoIssue@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z @ 0x1405F8610 (-StDeviceIoIssue@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405F8978 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StNpLeafPageIn@?$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z @ 0x1405FA660 (-StNpLeafPageIn@-$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z.c)
 *     StEtaIoStart @ 0x1405FAE14 (StEtaIoStart.c)
 *     StLcBucketsCopy @ 0x1405FAF84 (StLcBucketsCopy.c)
 *     CarInitLogging @ 0x140602EB8 (CarInitLogging.c)
 *     EtwpGetDurationSince @ 0x14062EDA8 (EtwpGetDurationSince.c)
 *     WmiGetClock @ 0x140630E90 (WmiGetClock.c)
 *     EtwpCompressPendingBuffers @ 0x140634D24 (EtwpCompressPendingBuffers.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x14064E7FC (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreen @ 0x14064E9C0 (BgpFwDisplayBugCheckScreen.c)
 *     IpmiLibpKcsRequestAndReceive @ 0x14065327C (IpmiLibpKcsRequestAndReceive.c)
 *     IpmiLibpKcsSpinRegister @ 0x14065355C (IpmiLibpKcsSpinRegister.c)
 *     IpmiLibpTimeAfter @ 0x140653654 (IpmiLibpTimeAfter.c)
 *     RtlCapabilityCheck @ 0x140660AF0 (RtlCapabilityCheck.c)
 *     RtlpCapChkTelemetryRunOnce @ 0x140662030 (RtlpCapChkTelemetryRunOnce.c)
 *     NtQueryPerformanceCounter @ 0x1406B4140 (NtQueryPerformanceCounter.c)
 *     ExpAllocateUuids @ 0x1406DC5A4 (ExpAllocateUuids.c)
 *     EtwpAddLogHeader @ 0x1406F120C (EtwpAddLogHeader.c)
 *     PspUserThreadStartup @ 0x140702420 (PspUserThreadStartup.c)
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 *     NtPowerInformation @ 0x14074F950 (NtPowerInformation.c)
 *     PopExecutePowerAction @ 0x1407FEC6C (PopExecutePowerAction.c)
 *     PopIssueActionRequest @ 0x1407FF888 (PopIssueActionRequest.c)
 *     PopResumeApps @ 0x1407FFD64 (PopResumeApps.c)
 *     PopResumeServices @ 0x1407FFDDC (PopResumeServices.c)
 *     PpmRegisterPerfStates @ 0x140848C18 (PpmRegisterPerfStates.c)
 *     Phase1Initialization @ 0x14084C160 (Phase1Initialization.c)
 *     EtwpInitializeSiloState @ 0x140851114 (EtwpInitializeSiloState.c)
 *     CmpRecordShutdownStopTime @ 0x140911EA8 (CmpRecordShutdownStopTime.c)
 *     IoCaptureLiveDump @ 0x14093A0B8 (IoCaptureLiveDump.c)
 *     PopTransitionToSleep @ 0x140A48630 (PopTransitionToSleep.c)
 *     PopDiagComputeEarlyHiberStats @ 0x140A48CA4 (PopDiagComputeEarlyHiberStats.c)
 *     PopSstDiagQueryResumeTimestamp @ 0x140A48D7C (PopSstDiagQueryResumeTimestamp.c)
 *     KiCalibrateTimeAdjustment @ 0x140A48E70 (KiCalibrateTimeAdjustment.c)
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 *     PoBroadcastSystemState @ 0x140A4A768 (PoBroadcastSystemState.c)
 *     PopInvokeSystemStateHandler @ 0x140A4AF0C (PopInvokeSystemStateHandler.c)
 *     PopHandleNextState @ 0x140A4B5A0 (PopHandleNextState.c)
 *     PopDecompressHiberBlocks @ 0x140A4CD9C (PopDecompressHiberBlocks.c)
 *     ConsumerPeekAndConsumeBuffer @ 0x140A4D310 (ConsumerPeekAndConsumeBuffer.c)
 *     PopHiberCheckForDebugBreak @ 0x140A4D92C (PopHiberCheckForDebugBreak.c)
 *     PopSstDiagInitializeResumeTimer @ 0x140A529EC (PopSstDiagInitializeResumeTimer.c)
 *     HalpCmciInit @ 0x140A5AAF0 (HalpCmciInit.c)
 *     HalpDpReplaceControl @ 0x140A62700 (HalpDpReplaceControl.c)
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x140A67430 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 *     PnprGetMillisecondCounter @ 0x140A67C14 (PnprGetMillisecondCounter.c)
 *     PopWriteImageHeader @ 0x140A6B59C (PopWriteImageHeader.c)
 *     KdpSendWaitContinue @ 0x140A6FB80 (KdpSendWaitContinue.c)
 *     KdInitSystem @ 0x140A70470 (KdInitSystem.c)
 *     VfFillAllocatedMemory @ 0x140A9A1DC (VfFillAllocatedMemory.c)
 *     CcInitializeTelemetry @ 0x140AF2E9C (CcInitializeTelemetry.c)
 *     MiInitNucleus @ 0x140AF47DC (MiInitNucleus.c)
 *     InitBootProcessor @ 0x140AFB264 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140AFBDF4 (Phase1InitializationDiscard.c)
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 *     EtwpInitialize @ 0x140B0433C (EtwpInitialize.c)
 *     MiInitSystem @ 0x140B07C00 (MiInitSystem.c)
 *     MiComputeOptimalZeroPath @ 0x140B088E4 (MiComputeOptimalZeroPath.c)
 *     MiInitializeCacheFlushing @ 0x140B08B40 (MiInitializeCacheFlushing.c)
 *     KiComputeDispatchInterruptCost @ 0x140B24E48 (KiComputeDispatchInterruptCost.c)
 *     KeInitializeClock @ 0x140B27884 (KeInitializeClock.c)
 *     ViInitSystemPhase0 @ 0x140B27B30 (ViInitSystemPhase0.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x140303720 (HalpTimerGetInternalData.c)
 *     HalpTimerScaleCounter @ 0x1403A572C (HalpTimerScaleCounter.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

LARGE_INTEGER __stdcall KeQueryPerformanceCounter(PLARGE_INTEGER PerformanceFrequency)
{
  ULONG_PTR v2; // rsi
  LONGLONG v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r15
  signed __int64 v7; // rdx
  LARGE_INTEGER result; // rax
  __int64 v9; // rcx
  __int64 InternalData; // rax
  __int64 v11; // rax
  __int64 v12; // r15
  signed __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rax
  unsigned __int64 v16; // r11
  signed __int64 v17; // rax
  int v18; // r10d
  unsigned __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // r8
  unsigned __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // rax
  unsigned __int64 v26; // r11
  signed __int64 v27; // rax
  int v28; // r10d
  unsigned __int64 v29; // rcx
  __int64 v30; // r9
  __int64 v31; // r8
  unsigned __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // r8
  LONGLONG v35; // r8
  signed __int32 v36[14]; // [rsp+0h] [rbp-38h] BYREF

  v2 = HalpPerformanceCounter;
  if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
  {
    v3 = 10000000LL;
    if ( HalpTimerReferencePage )
    {
      if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
        v9 = *(_QWORD *)(HalpPerformanceCounter + 72)
           + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number;
      else
        v9 = *(_QWORD *)(HalpPerformanceCounter + 72);
      result.QuadPart = MEMORY[0xFFFFF780000003B8]
                      + (((unsigned __int64)(*(__int64 (__fastcall **)(__int64))(HalpPerformanceCounter + 112))(v9)
                        * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64);
    }
    else
    {
      if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
      {
        InternalData = HalpTimerGetInternalData(HalpPerformanceCounter);
        v11 = (*(__int64 (__fastcall **)(__int64))(v2 + 112))(InternalData);
        v12 = *(_QWORD *)(v2 + 208);
        v13 = v11;
      }
      else
      {
        do
        {
          v12 = *(_QWORD *)(v2 + 208);
          do
          {
            v14 = *(_QWORD *)(v2 + 200);
            v15 = HalpTimerGetInternalData(v2);
            v16 = (*(__int64 (__fastcall **)(__int64))(v2 + 112))(v15);
            _InterlockedOr(v36, 0);
            v17 = *(_QWORD *)(v2 + 200);
          }
          while ( v14 != v17 );
        }
        while ( v12 != *(_QWORD *)(v2 + 208) );
        v18 = *(_DWORD *)(v2 + 220);
        v19 = v14 ^ v16;
        if ( _bittest64((const __int64 *)&v19, (unsigned __int8)(v18 - 1)) )
        {
          v20 = 1LL;
          if ( v18 == 64 )
            v21 = -1LL;
          else
            v21 = (1LL << v18) - 1;
          if ( v18 != 64 )
            v20 = 1LL << v18;
          v22 = v14 & v21;
          v13 = v16 | v14 ^ v22;
          if ( v16 < v22 )
            v13 += v20;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 200), v13, v17);
        }
        else
        {
          if ( v18 == 64 )
            v23 = -1LL;
          else
            v23 = (1LL << v18) - 1;
          v13 = v16 | v14 & ~v23;
        }
      }
      result.QuadPart = HalpTimerScaleCounter(v12 + v13, *(_QWORD *)(v2 + 192), 10000000LL);
    }
  }
  else
  {
    v3 = *(_QWORD *)(HalpPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
    {
      v4 = HalpTimerGetInternalData(HalpPerformanceCounter);
      v5 = (*(__int64 (__fastcall **)(__int64))(v2 + 112))(v4);
      v6 = *(_QWORD *)(v2 + 208);
      v7 = v5;
    }
    else
    {
      do
      {
        v6 = *(_QWORD *)(v2 + 208);
        do
        {
          v24 = *(_QWORD *)(v2 + 200);
          v25 = HalpTimerGetInternalData(v2);
          v26 = (*(__int64 (__fastcall **)(__int64))(v2 + 112))(v25);
          _InterlockedOr(v36, 0);
          v27 = *(_QWORD *)(v2 + 200);
        }
        while ( v24 != v27 );
      }
      while ( v6 != *(_QWORD *)(v2 + 208) );
      v28 = *(_DWORD *)(v2 + 220);
      v29 = v24 ^ v26;
      if ( _bittest64((const __int64 *)&v29, (unsigned __int8)(v28 - 1)) )
      {
        v30 = 1LL;
        if ( v28 == 64 )
          v31 = -1LL;
        else
          v31 = (1LL << v28) - 1;
        if ( v28 != 64 )
          v30 = 1LL << v28;
        v32 = v24 & v31;
        v7 = v26 | v24 ^ v32;
        if ( v26 < v32 )
          v7 += v30;
        _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 200), v7, v27);
      }
      else
      {
        if ( v28 == 64 )
          v33 = -1LL;
        else
          v33 = (1LL << v28) - 1;
        v7 = v26 | v24 & ~v33;
      }
    }
    result.QuadPart = v6 + v7;
  }
  if ( v2 == HalpOriginalPerformanceCounter || !HalpOriginalPerformanceCounter )
  {
    if ( PerformanceFrequency )
      PerformanceFrequency->QuadPart = v3;
  }
  else
  {
    v34 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
      v34 = 10000000LL;
    result.QuadPart = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HalpTimerScaleCounter)(
                        (LARGE_INTEGER)result.QuadPart,
                        v3,
                        v34);
    if ( PerformanceFrequency )
      PerformanceFrequency->QuadPart = v35;
  }
  return result;
}
