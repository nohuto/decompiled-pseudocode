/*
 * XREFs of KeQueryPerformanceCounter @ 0x1402F3FA0
 * Callers:
 *     PpmIdlePrepare @ 0x140219D30 (PpmIdlePrepare.c)
 *     RtlGetInterruptTimePrecise @ 0x14021F2E0 (RtlGetInterruptTimePrecise.c)
 *     PpmIdleSnapConcurrency @ 0x14021FAA0 (PpmIdleSnapConcurrency.c)
 *     EtwGetKernelTraceTimestampSilo @ 0x14025AEB4 (EtwGetKernelTraceTimestampSilo.c)
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x14027A5B0 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     PopGetIdleTimesCallback @ 0x140298220 (PopGetIdleTimesCallback.c)
 *     KiExecuteAllDpcs @ 0x14029A020 (KiExecuteAllDpcs.c)
 *     EtwpReserveTraceBuffer @ 0x14029AB70 (EtwpReserveTraceBuffer.c)
 *     PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x1402DEE80 (PopDeepSleepResiliencyPhaseAccountingUpdate.c)
 *     KeQuerySchedulingGroupHistory @ 0x1402F26A4 (KeQuerySchedulingGroupHistory.c)
 *     MiScheduleZeroPageThreads @ 0x1402F3974 (MiScheduleZeroPageThreads.c)
 *     KiSetClockTickRate @ 0x1402F3B9C (KiSetClockTickRate.c)
 *     KiUpdateTimeAssist @ 0x1402F3CF8 (KiUpdateTimeAssist.c)
 *     EtwpGetLoggerTimeStamp @ 0x1402F3F58 (EtwpGetLoggerTimeStamp.c)
 *     RtlGetSystemTimePrecise @ 0x1402F9590 (RtlGetSystemTimePrecise.c)
 *     RtlGetMultiTimePrecise @ 0x1402FF8D0 (RtlGetMultiTimePrecise.c)
 *     ?SmReadPickStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU?$SMKM_STORE@USM_TRAITS@@@@2@Z @ 0x140303C80 (-SmReadPickStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU-$SMKM_STO.c)
 *     StEtaStart @ 0x14030CAAC (StEtaStart.c)
 *     ?StDmInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@0@Z @ 0x14030D3E0 (-StDmInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@0@Z.c)
 *     StLcInitialize @ 0x14030D7A0 (StLcInitialize.c)
 *     MiAllocatePagesForMdl @ 0x14031379C (MiAllocatePagesForMdl.c)
 *     EtwGetKernelTraceTimestamp @ 0x140328270 (EtwGetKernelTraceTimestamp.c)
 *     PpmPerfApplyDomainState @ 0x140330D80 (PpmPerfApplyDomainState.c)
 *     MiAllocateContiguousMemory @ 0x14033602C (MiAllocateContiguousMemory.c)
 *     HalpSetVirtualRtc @ 0x140341FFC (HalpSetVirtualRtc.c)
 *     KeInsertSchedulingGroup @ 0x140347F94 (KeInsertSchedulingGroup.c)
 *     KiUpdateCpuTargetByWeight @ 0x140348778 (KiUpdateCpuTargetByWeight.c)
 *     KiUpdateCpuTargetByRate @ 0x140348A50 (KiUpdateCpuTargetByRate.c)
 *     MiReassessZeroThreads @ 0x140352B6C (MiReassessZeroThreads.c)
 *     HalpTimerDpcRoutine @ 0x14035E910 (HalpTimerDpcRoutine.c)
 *     KeRebaselineInterruptTime @ 0x140381C30 (KeRebaselineInterruptTime.c)
 *     HalpQueryVirtualRtc @ 0x140381D2C (HalpQueryVirtualRtc.c)
 *     HalpTimerRestorePerformanceCounter @ 0x140383DB8 (HalpTimerRestorePerformanceCounter.c)
 *     ?SmAsyncReadQueueWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140385430 (-SmAsyncReadQueueWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     KiTimerExpiration @ 0x1403869F0 (KiTimerExpiration.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x14038AD9C (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     KeRebaselineSystemTime @ 0x14038B334 (KeRebaselineSystemTime.c)
 *     PpmIdleSelectStates @ 0x140392C50 (PpmIdleSelectStates.c)
 *     KiUpdateSystemTime @ 0x140395578 (KiUpdateSystemTime.c)
 *     PpmPerfApplyProcessorState @ 0x14039620C (PpmPerfApplyProcessorState.c)
 *     BgpFwQueryPerformanceCounter @ 0x1403990F0 (BgpFwQueryPerformanceCounter.c)
 *     KiIpiGenericCallTarget @ 0x1403A2310 (KiIpiGenericCallTarget.c)
 *     PpmResetPerformanceAccumulation @ 0x1403A2A38 (PpmResetPerformanceAccumulation.c)
 *     HalpTimerInitSystem @ 0x1403AC010 (HalpTimerInitSystem.c)
 *     HalpTimerReadTimerPairWithLatencyLimit @ 0x1403AD638 (HalpTimerReadTimerPairWithLatencyLimit.c)
 *     HalpTimerDetermineValidTimerPairReadLatency @ 0x1403AD71C (HalpTimerDetermineValidTimerPairReadLatency.c)
 *     KiSetupTimeIncrement @ 0x1403B086C (KiSetupTimeIncrement.c)
 *     HalWheaUpdateCmciPolicy @ 0x1403B75E0 (HalWheaUpdateCmciPolicy.c)
 *     PpmInstallFeedbackCounters @ 0x1403BF3A8 (PpmInstallFeedbackCounters.c)
 *     PpmQueryTime @ 0x1403C03FC (PpmQueryTime.c)
 *     PpmResetIdlePolicy @ 0x1403C18C8 (PpmResetIdlePolicy.c)
 *     HalpCmciLoadThresholdConfiguration @ 0x1403C26E8 (HalpCmciLoadThresholdConfiguration.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x1403C5148 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     MiZeroBootLargePages @ 0x1403C7614 (MiZeroBootLargePages.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x1403CB25C (HalpTimerSchedulePeriodicQueries.c)
 *     PopWriteBsdPoInfo @ 0x1403F21F8 (PopWriteBsdPoInfo.c)
 *     HalpTimerCaptureCloestAuxiliaryQpcPair @ 0x1404B15B8 (HalpTimerCaptureCloestAuxiliaryQpcPair.c)
 *     HalpTimerCaptureCurrentAuxiliaryQpcPair @ 0x1404B166C (HalpTimerCaptureCurrentAuxiliaryQpcPair.c)
 *     HalpCmciHandler @ 0x1404B7BC8 (HalpCmciHandler.c)
 *     HalpTscFallback @ 0x1404BC720 (HalpTscFallback.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x1404BE6D0 (HalpTimerMeasureProcessorsWorker.c)
 *     EmonOverflowHandler @ 0x1404CE930 (EmonOverflowHandler.c)
 *     Amd64OverflowHandler @ 0x1404D8B10 (Amd64OverflowHandler.c)
 *     XmRdtscOp @ 0x1404E1BF0 (XmRdtscOp.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x14050348C (IopLiveDumpGetMillisecondCounter.c)
 *     KeFreezeExecution @ 0x140518240 (KeFreezeExecution.c)
 *     KeSwitchFrozenProcessor @ 0x140518650 (KeSwitchFrozenProcessor.c)
 *     KeThawExecution @ 0x140518730 (KeThawExecution.c)
 *     KiCheckStall @ 0x140518870 (KiCheckStall.c)
 *     KiFreezeTargetExecution @ 0x1405189B0 (KiFreezeTargetExecution.c)
 *     PoInitiateProcessorWake @ 0x140560060 (PoInitiateProcessorWake.c)
 *     PpmIdleInstallConcurrency @ 0x140561570 (PpmIdleInstallConcurrency.c)
 *     PpmIdleRemoveConcurrency @ 0x1405617A0 (PpmIdleRemoveConcurrency.c)
 *     PpmIdleSnapConcurrencyIdleTime @ 0x140561950 (PpmIdleSnapConcurrencyIdleTime.c)
 *     PpmIdleTransitionStall @ 0x140561AE8 (PpmIdleTransitionStall.c)
 *     PpmTraceExitLatency @ 0x140562730 (PpmTraceExitLatency.c)
 *     PopFxUpdateDeviceIRPhaseAccounting @ 0x140568158 (PopFxUpdateDeviceIRPhaseAccounting.c)
 *     PdcPoCurrentPdcPhase @ 0x140570F80 (PdcPoCurrentPdcPhase.c)
 *     PopDeepSleepResiliencyPhaseAccountingBegin @ 0x1405723D0 (PopDeepSleepResiliencyPhaseAccountingBegin.c)
 *     PopDeepSleepResiliencyPhaseAccountingEnd @ 0x1405724EC (PopDeepSleepResiliencyPhaseAccountingEnd.c)
 *     ?StDeviceIoIssue@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z @ 0x140595384 (-StDeviceIoIssue@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405958C8 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StNpLeafPageIn@?$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z @ 0x140597600 (-StNpLeafPageIn@-$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z.c)
 *     StEtaIoStart @ 0x140597F10 (StEtaIoStart.c)
 *     StLcBucketsCopy @ 0x140598080 (StLcBucketsCopy.c)
 *     WmiGetClock @ 0x1405A1290 (WmiGetClock.c)
 *     EtwpGetDurationSince @ 0x1405A35A4 (EtwpGetDurationSince.c)
 *     EtwpCompressPendingBuffers @ 0x1405A7528 (EtwpCompressPendingBuffers.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x1405C0090 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreen @ 0x1405C0254 (BgpFwDisplayBugCheckScreen.c)
 *     NtPowerInformation @ 0x140649BC0 (NtPowerInformation.c)
 *     NtQueryInformationProcess @ 0x140661E20 (NtQueryInformationProcess.c)
 *     NtQueryPerformanceCounter @ 0x1406AF110 (NtQueryPerformanceCounter.c)
 *     PspUserThreadStartup @ 0x1406B5110 (PspUserThreadStartup.c)
 *     EtwpAddLogHeader @ 0x1406C96D4 (EtwpAddLogHeader.c)
 *     ExpAllocateUuids @ 0x140708084 (ExpAllocateUuids.c)
 *     PopExecutePowerAction @ 0x140762C18 (PopExecutePowerAction.c)
 *     PopIssueActionRequest @ 0x140763448 (PopIssueActionRequest.c)
 *     PopResumeApps @ 0x140763F04 (PopResumeApps.c)
 *     PopResumeServices @ 0x140763F7C (PopResumeServices.c)
 *     Phase1Initialization @ 0x140786180 (Phase1Initialization.c)
 *     EtwInitializeSiloState @ 0x14079C174 (EtwInitializeSiloState.c)
 *     PpmRegisterPerfStates @ 0x1407A7090 (PpmRegisterPerfStates.c)
 *     CmpRecordShutdownStopTime @ 0x140868940 (CmpRecordShutdownStopTime.c)
 *     IoCaptureLiveDump @ 0x140893018 (IoCaptureLiveDump.c)
 *     RtlCapabilityCheck @ 0x140910060 (RtlCapabilityCheck.c)
 *     RtlpCapChkTelemetryRunOnce @ 0x140918230 (RtlpCapChkTelemetryRunOnce.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098E104 (PopTransitionSystemPowerStateEx.c)
 *     PoBroadcastSystemState @ 0x14098F324 (PoBroadcastSystemState.c)
 *     PopInvokeSystemStateHandler @ 0x14098FAAC (PopInvokeSystemStateHandler.c)
 *     PopHiberCheckForDebugBreak @ 0x1409917AC (PopHiberCheckForDebugBreak.c)
 *     PopDecompressHiberBlocks @ 0x140991804 (PopDecompressHiberBlocks.c)
 *     KiCalibrateTimeAdjustment @ 0x140991B20 (KiCalibrateTimeAdjustment.c)
 *     HalpCmciInit @ 0x14099D924 (HalpCmciInit.c)
 *     HalpDpReplaceControl @ 0x1409A5950 (HalpDpReplaceControl.c)
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x1409AA170 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 *     PnprGetMillisecondCounter @ 0x1409AA92C (PnprGetMillisecondCounter.c)
 *     PopWriteImageHeader @ 0x1409AEEB0 (PopWriteImageHeader.c)
 *     KdInitSystem @ 0x1409B2160 (KdInitSystem.c)
 *     KdpSendWaitContinue @ 0x1409B54F4 (KdpSendWaitContinue.c)
 *     VfFillAllocatedMemory @ 0x1409DCFE4 (VfFillAllocatedMemory.c)
 *     InitBootProcessor @ 0x140A36F64 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A37B24 (Phase1InitializationDiscard.c)
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 *     MiInitNucleus @ 0x140A3D174 (MiInitNucleus.c)
 *     KeInitializeClock @ 0x140A428AC (KeInitializeClock.c)
 *     MiInitSystem @ 0x140A521D4 (MiInitSystem.c)
 *     EtwpInitialize @ 0x140A61950 (EtwpInitialize.c)
 *     ViInitSystemPhase0 @ 0x140A6C258 (ViInitSystemPhase0.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14021F560 (HalpTimerGetInternalData.c)
 *     HalpTimerScaleCounter @ 0x1403939C0 (HalpTimerScaleCounter.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
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
