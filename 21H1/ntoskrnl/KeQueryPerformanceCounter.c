/*
 * XREFs of KeQueryPerformanceCounter @ 0x140240CA0
 * Callers:
 *     HalpSetVirtualRtc @ 0x1402021AC (HalpSetVirtualRtc.c)
 *     PopGetIdleTimesCallback @ 0x140205860 (PopGetIdleTimesCallback.c)
 *     KiExecuteAllDpcs @ 0x140207510 (KiExecuteAllDpcs.c)
 *     EtwpReserveTraceBuffer @ 0x140208060 (EtwpReserveTraceBuffer.c)
 *     MiScheduleZeroPageThreads @ 0x140240674 (MiScheduleZeroPageThreads.c)
 *     KiSetClockTickRate @ 0x14024089C (KiSetClockTickRate.c)
 *     KiUpdateTimeAssist @ 0x1402409F8 (KiUpdateTimeAssist.c)
 *     EtwpGetLoggerTimeStamp @ 0x140240C58 (EtwpGetLoggerTimeStamp.c)
 *     PpmIdlePrepare @ 0x140272D80 (PpmIdlePrepare.c)
 *     RtlGetInterruptTimePrecise @ 0x140278330 (RtlGetInterruptTimePrecise.c)
 *     PpmIdleSnapConcurrency @ 0x140278AF0 (PpmIdleSnapConcurrency.c)
 *     EtwGetKernelTraceTimestampSilo @ 0x1402B3EE4 (EtwGetKernelTraceTimestampSilo.c)
 *     StEtaStart @ 0x1402CAE6C (StEtaStart.c)
 *     ?StDmInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@0@Z @ 0x1402CB7A0 (-StDmInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@0@Z.c)
 *     StLcInitialize @ 0x1402CBB60 (StLcInitialize.c)
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x1402DB4A0 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     KiUpdateCpuTargetByWeight @ 0x1402DBF3C (KiUpdateCpuTargetByWeight.c)
 *     KiUpdateCpuTargetByRate @ 0x1402DC214 (KiUpdateCpuTargetByRate.c)
 *     KeInsertSchedulingGroup @ 0x1402DC82C (KeInsertSchedulingGroup.c)
 *     RtlGetMultiTimePrecise @ 0x1402DE9B0 (RtlGetMultiTimePrecise.c)
 *     KeQuerySchedulingGroupHistory @ 0x1402E15B4 (KeQuerySchedulingGroupHistory.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402EE940 (EtwGetKernelTraceTimestamp.c)
 *     PpmPerfApplyDomainState @ 0x1402F4180 (PpmPerfApplyDomainState.c)
 *     MiAllocateContiguousMemory @ 0x1402F8FFC (MiAllocateContiguousMemory.c)
 *     ?SmReadPickStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU?$SMKM_STORE@USM_TRAITS@@@@2@Z @ 0x1403097D0 (-SmReadPickStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU-$SMKM_STO.c)
 *     MiReassessZeroThreads @ 0x140314E1C (MiReassessZeroThreads.c)
 *     HalpTimerDpcRoutine @ 0x140320E50 (HalpTimerDpcRoutine.c)
 *     MiAllocatePagesForMdl @ 0x140342ADC (MiAllocatePagesForMdl.c)
 *     RtlGetSystemTimePrecise @ 0x140355570 (RtlGetSystemTimePrecise.c)
 *     PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x14035CF90 (PopDeepSleepResiliencyPhaseAccountingUpdate.c)
 *     KeRebaselineInterruptTime @ 0x1403813F0 (KeRebaselineInterruptTime.c)
 *     HalpQueryVirtualRtc @ 0x1403814EC (HalpQueryVirtualRtc.c)
 *     HalpTimerRestorePerformanceCounter @ 0x140383468 (HalpTimerRestorePerformanceCounter.c)
 *     ?SmAsyncReadQueueWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403844C0 (-SmAsyncReadQueueWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     KiTimerExpiration @ 0x140385A80 (KiTimerExpiration.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x140389D2C (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     KeRebaselineSystemTime @ 0x14038A2C4 (KeRebaselineSystemTime.c)
 *     PpmIdleSelectStates @ 0x140392080 (PpmIdleSelectStates.c)
 *     KiUpdateSystemTime @ 0x1403949A8 (KiUpdateSystemTime.c)
 *     PpmPerfApplyProcessorState @ 0x14039563C (PpmPerfApplyProcessorState.c)
 *     BgpFwQueryPerformanceCounter @ 0x140398960 (BgpFwQueryPerformanceCounter.c)
 *     KiIpiGenericCallTarget @ 0x1403A1B80 (KiIpiGenericCallTarget.c)
 *     PpmResetPerformanceAccumulation @ 0x1403A22A8 (PpmResetPerformanceAccumulation.c)
 *     HalpTimerInitSystem @ 0x1403A4F50 (HalpTimerInitSystem.c)
 *     HalpTimerReadTimerPairWithLatencyLimit @ 0x1403A6578 (HalpTimerReadTimerPairWithLatencyLimit.c)
 *     HalpTimerDetermineValidTimerPairReadLatency @ 0x1403A665C (HalpTimerDetermineValidTimerPairReadLatency.c)
 *     HalWheaUpdateCmciPolicy @ 0x1403B67B0 (HalWheaUpdateCmciPolicy.c)
 *     PpmInstallFeedbackCounters @ 0x1403BE418 (PpmInstallFeedbackCounters.c)
 *     PpmQueryTime @ 0x1403BF46C (PpmQueryTime.c)
 *     PpmResetIdlePolicy @ 0x1403C0A08 (PpmResetIdlePolicy.c)
 *     HalpCmciLoadThresholdConfiguration @ 0x1403C1828 (HalpCmciLoadThresholdConfiguration.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x1403C41D8 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     KiSetupTimeIncrement @ 0x1403C634C (KiSetupTimeIncrement.c)
 *     MiZeroBootLargePages @ 0x1403C6804 (MiZeroBootLargePages.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x1403CA47C (HalpTimerSchedulePeriodicQueries.c)
 *     PopWriteBsdPoInfo @ 0x1403F0E30 (PopWriteBsdPoInfo.c)
 *     HalpTimerCaptureCloestAuxiliaryQpcPair @ 0x1404B0EFC (HalpTimerCaptureCloestAuxiliaryQpcPair.c)
 *     HalpTimerCaptureCurrentAuxiliaryQpcPair @ 0x1404B0FB0 (HalpTimerCaptureCurrentAuxiliaryQpcPair.c)
 *     HalpCmciHandler @ 0x1404B74E8 (HalpCmciHandler.c)
 *     HalpTscFallback @ 0x1404BC040 (HalpTscFallback.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x1404BDFF0 (HalpTimerMeasureProcessorsWorker.c)
 *     EmonOverflowHandler @ 0x1404CE480 (EmonOverflowHandler.c)
 *     Amd64OverflowHandler @ 0x1404D8600 (Amd64OverflowHandler.c)
 *     XmRdtscOp @ 0x1404E1630 (XmRdtscOp.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x140502E3C (IopLiveDumpGetMillisecondCounter.c)
 *     KeFreezeExecution @ 0x140517BF0 (KeFreezeExecution.c)
 *     KeSwitchFrozenProcessor @ 0x140518000 (KeSwitchFrozenProcessor.c)
 *     KeThawExecution @ 0x1405180E0 (KeThawExecution.c)
 *     KiCheckStall @ 0x140518220 (KiCheckStall.c)
 *     KiFreezeTargetExecution @ 0x140518360 (KiFreezeTargetExecution.c)
 *     PoInitiateProcessorWake @ 0x14055FA10 (PoInitiateProcessorWake.c)
 *     PpmIdleInstallConcurrency @ 0x140560F20 (PpmIdleInstallConcurrency.c)
 *     PpmIdleRemoveConcurrency @ 0x140561150 (PpmIdleRemoveConcurrency.c)
 *     PpmIdleSnapConcurrencyIdleTime @ 0x140561300 (PpmIdleSnapConcurrencyIdleTime.c)
 *     PpmIdleTransitionStall @ 0x140561498 (PpmIdleTransitionStall.c)
 *     PpmTraceExitLatency @ 0x1405620E0 (PpmTraceExitLatency.c)
 *     PopFxUpdateDeviceIRPhaseAccounting @ 0x140567B08 (PopFxUpdateDeviceIRPhaseAccounting.c)
 *     PdcPoCurrentPdcPhase @ 0x140570930 (PdcPoCurrentPdcPhase.c)
 *     PopDeepSleepResiliencyPhaseAccountingBegin @ 0x140571D80 (PopDeepSleepResiliencyPhaseAccountingBegin.c)
 *     PopDeepSleepResiliencyPhaseAccountingEnd @ 0x140571E9C (PopDeepSleepResiliencyPhaseAccountingEnd.c)
 *     ?StDeviceIoIssue@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z @ 0x140594C94 (-StDeviceIoIssue@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405951D8 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StNpLeafPageIn@?$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z @ 0x140596F10 (-StNpLeafPageIn@-$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z.c)
 *     StEtaIoStart @ 0x140597820 (StEtaIoStart.c)
 *     StLcBucketsCopy @ 0x140597990 (StLcBucketsCopy.c)
 *     WmiGetClock @ 0x1405A0BA0 (WmiGetClock.c)
 *     EtwpGetDurationSince @ 0x1405A2EB4 (EtwpGetDurationSince.c)
 *     EtwpCompressPendingBuffers @ 0x1405A6E38 (EtwpCompressPendingBuffers.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x1405BF970 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreen @ 0x1405BFB34 (BgpFwDisplayBugCheckScreen.c)
 *     NtQueryInformationProcess @ 0x1405DBB20 (NtQueryInformationProcess.c)
 *     NtQueryPerformanceCounter @ 0x1405F2490 (NtQueryPerformanceCounter.c)
 *     PspUserThreadStartup @ 0x14064C130 (PspUserThreadStartup.c)
 *     EtwpAddLogHeader @ 0x14067C6E4 (EtwpAddLogHeader.c)
 *     ExpAllocateUuids @ 0x1406E4714 (ExpAllocateUuids.c)
 *     NtPowerInformation @ 0x14070B1B0 (NtPowerInformation.c)
 *     PopExecutePowerAction @ 0x140761338 (PopExecutePowerAction.c)
 *     PopIssueActionRequest @ 0x140761B68 (PopIssueActionRequest.c)
 *     PopResumeApps @ 0x140762624 (PopResumeApps.c)
 *     PopResumeServices @ 0x14076269C (PopResumeServices.c)
 *     Phase1Initialization @ 0x14079B780 (Phase1Initialization.c)
 *     EtwInitializeSiloState @ 0x14079FC30 (EtwInitializeSiloState.c)
 *     PpmRegisterPerfStates @ 0x1407A4940 (PpmRegisterPerfStates.c)
 *     CmpRecordShutdownStopTime @ 0x1408675F0 (CmpRecordShutdownStopTime.c)
 *     IoCaptureLiveDump @ 0x140891CF8 (IoCaptureLiveDump.c)
 *     RtlCapabilityCheck @ 0x14090ECC0 (RtlCapabilityCheck.c)
 *     RtlpCapChkTelemetryRunOnce @ 0x140916FC0 (RtlpCapChkTelemetryRunOnce.c)
 *     PopDecompressHiberBlocks @ 0x14098D8EC (PopDecompressHiberBlocks.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098DAE8 (PopTransitionSystemPowerStateEx.c)
 *     PoBroadcastSystemState @ 0x14098E5D0 (PoBroadcastSystemState.c)
 *     PopInvokeSystemStateHandler @ 0x14098ED58 (PopInvokeSystemStateHandler.c)
 *     PopHiberCheckForDebugBreak @ 0x140990A5C (PopHiberCheckForDebugBreak.c)
 *     KiCalibrateTimeAdjustment @ 0x140990BE0 (KiCalibrateTimeAdjustment.c)
 *     HalpCmciInit @ 0x14099C184 (HalpCmciInit.c)
 *     HalpDpReplaceControl @ 0x1409A4B10 (HalpDpReplaceControl.c)
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x1409A9310 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 *     PnprGetMillisecondCounter @ 0x1409A9ACC (PnprGetMillisecondCounter.c)
 *     PopWriteImageHeader @ 0x1409AE050 (PopWriteImageHeader.c)
 *     KdInitSystem @ 0x1409B2160 (KdInitSystem.c)
 *     KdpSendWaitContinue @ 0x1409B54F4 (KdpSendWaitContinue.c)
 *     VfFillAllocatedMemory @ 0x1409DCF84 (VfFillAllocatedMemory.c)
 *     InitBootProcessor @ 0x140A37A74 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A382A8 (Phase1InitializationDiscard.c)
 *     PoInitSystem @ 0x140A3BEEC (PoInitSystem.c)
 *     MiInitNucleus @ 0x140A43F3C (MiInitNucleus.c)
 *     EtwpInitialize @ 0x140A46B98 (EtwpInitialize.c)
 *     MiInitSystem @ 0x140A4C4D4 (MiInitSystem.c)
 *     KeInitializeClock @ 0x140A69C98 (KeInitializeClock.c)
 *     ViInitSystemPhase0 @ 0x140A6BFC8 (ViInitSystemPhase0.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x1402785B0 (HalpTimerGetInternalData.c)
 *     HalpTimerScaleCounter @ 0x140392DF0 (HalpTimerScaleCounter.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

LARGE_INTEGER __stdcall KeQueryPerformanceCounter(PLARGE_INTEGER PerformanceFrequency)
{
  ULONG_PTR v2; // rdi
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
