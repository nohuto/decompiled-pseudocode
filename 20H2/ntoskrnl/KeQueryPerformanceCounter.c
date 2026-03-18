/*
 * XREFs of KeQueryPerformanceCounter @ 0x140266AF0
 * Callers:
 *     EtwpReserveTraceBuffer @ 0x140226840 (EtwpReserveTraceBuffer.c)
 *     StEtaStart @ 0x14025D45C (StEtaStart.c)
 *     MiAllocateContiguousMemory @ 0x14025FFCC (MiAllocateContiguousMemory.c)
 *     KeQuerySchedulingGroupHistory @ 0x140264054 (KeQuerySchedulingGroupHistory.c)
 *     MiScheduleZeroPageThreads @ 0x1402664C4 (MiScheduleZeroPageThreads.c)
 *     KiSetClockTickRate @ 0x1402666EC (KiSetClockTickRate.c)
 *     KiUpdateTimeAssist @ 0x140266848 (KiUpdateTimeAssist.c)
 *     EtwpGetLoggerTimeStamp @ 0x140266AA8 (EtwpGetLoggerTimeStamp.c)
 *     PpmIdlePrepare @ 0x1402847A0 (PpmIdlePrepare.c)
 *     RtlGetInterruptTimePrecise @ 0x140288C20 (RtlGetInterruptTimePrecise.c)
 *     KiExecuteAllDpcs @ 0x14028B270 (KiExecuteAllDpcs.c)
 *     EtwGetKernelTraceTimestampSilo @ 0x1402D1218 (EtwGetKernelTraceTimestampSilo.c)
 *     RtlGetSystemTimePrecise @ 0x1402D6A90 (RtlGetSystemTimePrecise.c)
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x1402EF120 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     PpmIdleSnapConcurrency @ 0x1402F0530 (PpmIdleSnapConcurrency.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402FB2A0 (EtwGetKernelTraceTimestamp.c)
 *     PpmPerfApplyDomainState @ 0x140304380 (PpmPerfApplyDomainState.c)
 *     HalpSetVirtualRtc @ 0x140312D6C (HalpSetVirtualRtc.c)
 *     MiReassessZeroThreads @ 0x14032356C (MiReassessZeroThreads.c)
 *     HalpTimerDpcRoutine @ 0x14032F600 (HalpTimerDpcRoutine.c)
 *     MiAllocatePagesForMdl @ 0x1403342D4 (MiAllocatePagesForMdl.c)
 *     ?StDmInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@0@Z @ 0x140338388 (-StDmInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@0@Z.c)
 *     StLcInitialize @ 0x140338F50 (StLcInitialize.c)
 *     PopGetIdleTimesCallback @ 0x14033E1F0 (PopGetIdleTimesCallback.c)
 *     PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x14033FE80 (PopDeepSleepResiliencyPhaseAccountingUpdate.c)
 *     ?SmReadPickStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU?$SMKM_STORE@USM_TRAITS@@@@2@Z @ 0x140358900 (-SmReadPickStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU-$SMKM_STO.c)
 *     KeInsertSchedulingGroup @ 0x14035B590 (KeInsertSchedulingGroup.c)
 *     KiUpdateCpuTargetByWeight @ 0x14035DF18 (KiUpdateCpuTargetByWeight.c)
 *     KiUpdateCpuTargetByRate @ 0x14035E1F0 (KiUpdateCpuTargetByRate.c)
 *     RtlGetMultiTimePrecise @ 0x140360700 (RtlGetMultiTimePrecise.c)
 *     KeRebaselineInterruptTime @ 0x140383910 (KeRebaselineInterruptTime.c)
 *     HalpQueryVirtualRtc @ 0x140383A0C (HalpQueryVirtualRtc.c)
 *     HalpTimerRestorePerformanceCounter @ 0x140385EE8 (HalpTimerRestorePerformanceCounter.c)
 *     ?SmAsyncReadQueueWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403875D0 (-SmAsyncReadQueueWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     KiTimerExpiration @ 0x140388B90 (KiTimerExpiration.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x14038D09C (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     KeRebaselineSystemTime @ 0x14038D678 (KeRebaselineSystemTime.c)
 *     PpmIdleSelectStates @ 0x140395110 (PpmIdleSelectStates.c)
 *     KiUpdateSystemTime @ 0x140397A38 (KiUpdateSystemTime.c)
 *     PpmPerfApplyProcessorState @ 0x1403986CC (PpmPerfApplyProcessorState.c)
 *     BgpFwQueryPerformanceCounter @ 0x14039B5B0 (BgpFwQueryPerformanceCounter.c)
 *     KiIpiGenericCallTarget @ 0x1403A47E0 (KiIpiGenericCallTarget.c)
 *     HalpTimerInitSystem @ 0x1403AE600 (HalpTimerInitSystem.c)
 *     HalpTimerReadTimerPairWithLatencyLimit @ 0x1403AFC28 (HalpTimerReadTimerPairWithLatencyLimit.c)
 *     HalpTimerDetermineValidTimerPairReadLatency @ 0x1403AFD0C (HalpTimerDetermineValidTimerPairReadLatency.c)
 *     KiSetupTimeIncrement @ 0x1403B31DC (KiSetupTimeIncrement.c)
 *     HalWheaUpdateCmciPolicy @ 0x1403BA080 (HalWheaUpdateCmciPolicy.c)
 *     PpmInstallFeedbackCounters @ 0x1403C0A28 (PpmInstallFeedbackCounters.c)
 *     PpmResetPerformanceAccumulation @ 0x1403C1B64 (PpmResetPerformanceAccumulation.c)
 *     PpmQueryTime @ 0x1403C1BB0 (PpmQueryTime.c)
 *     PpmResetIdlePolicy @ 0x1403C4038 (PpmResetIdlePolicy.c)
 *     HalpCmciLoadThresholdConfiguration @ 0x1403C4E58 (HalpCmciLoadThresholdConfiguration.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x1403C7B38 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     MiZeroBootLargePages @ 0x1403CA254 (MiZeroBootLargePages.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x1403CDE7C (HalpTimerSchedulePeriodicQueries.c)
 *     PopWriteBsdPoInfo @ 0x1403F66A4 (PopWriteBsdPoInfo.c)
 *     HalpTimerCaptureCloestAuxiliaryQpcPair @ 0x1404B4ADC (HalpTimerCaptureCloestAuxiliaryQpcPair.c)
 *     HalpTimerCaptureCurrentAuxiliaryQpcPair @ 0x1404B4B90 (HalpTimerCaptureCurrentAuxiliaryQpcPair.c)
 *     HalpCmciHandler @ 0x1404BB0E8 (HalpCmciHandler.c)
 *     HalpTscFallback @ 0x1404BFC40 (HalpTscFallback.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x1404C1BF0 (HalpTimerMeasureProcessorsWorker.c)
 *     EmonOverflowHandler @ 0x1404D1ED0 (EmonOverflowHandler.c)
 *     Amd64OverflowHandler @ 0x1404DC0A0 (Amd64OverflowHandler.c)
 *     XmRdtscOp @ 0x1404E5180 (XmRdtscOp.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x140506E9C (IopLiveDumpGetMillisecondCounter.c)
 *     KeFreezeExecution @ 0x14051BC10 (KeFreezeExecution.c)
 *     KeSwitchFrozenProcessor @ 0x14051C020 (KeSwitchFrozenProcessor.c)
 *     KeThawExecution @ 0x14051C100 (KeThawExecution.c)
 *     KiCheckStall @ 0x14051C240 (KiCheckStall.c)
 *     KiFreezeTargetExecution @ 0x14051C380 (KiFreezeTargetExecution.c)
 *     PoInitiateProcessorWake @ 0x140563A40 (PoInitiateProcessorWake.c)
 *     PpmIdleInstallConcurrency @ 0x140564F50 (PpmIdleInstallConcurrency.c)
 *     PpmIdleRemoveConcurrency @ 0x140565180 (PpmIdleRemoveConcurrency.c)
 *     PpmIdleSnapConcurrencyIdleTime @ 0x140565330 (PpmIdleSnapConcurrencyIdleTime.c)
 *     PpmIdleTransitionStall @ 0x1405654C8 (PpmIdleTransitionStall.c)
 *     PpmTraceExitLatency @ 0x140566110 (PpmTraceExitLatency.c)
 *     PopFxUpdateDeviceIRPhaseAccounting @ 0x14056BB88 (PopFxUpdateDeviceIRPhaseAccounting.c)
 *     PdcPoCurrentPdcPhase @ 0x1405749B0 (PdcPoCurrentPdcPhase.c)
 *     PopDeepSleepResiliencyPhaseAccountingBegin @ 0x140575E00 (PopDeepSleepResiliencyPhaseAccountingBegin.c)
 *     PopDeepSleepResiliencyPhaseAccountingEnd @ 0x140575F1C (PopDeepSleepResiliencyPhaseAccountingEnd.c)
 *     ?StDeviceIoIssue@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z @ 0x140598E24 (-StDeviceIoIssue@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140599368 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StNpLeafPageIn@?$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z @ 0x14059B0A0 (-StNpLeafPageIn@-$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z.c)
 *     StEtaIoStart @ 0x14059B9B0 (StEtaIoStart.c)
 *     StLcBucketsCopy @ 0x14059BB20 (StLcBucketsCopy.c)
 *     WmiGetClock @ 0x1405A4D30 (WmiGetClock.c)
 *     EtwpGetDurationSince @ 0x1405A7044 (EtwpGetDurationSince.c)
 *     EtwpCompressPendingBuffers @ 0x1405AB08C (EtwpCompressPendingBuffers.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x1405C3D10 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreen @ 0x1405C3ED4 (BgpFwDisplayBugCheckScreen.c)
 *     NtQueryInformationProcess @ 0x140636B80 (NtQueryInformationProcess.c)
 *     NtQueryPerformanceCounter @ 0x140667C90 (NtQueryPerformanceCounter.c)
 *     PspUserThreadStartup @ 0x140692D10 (PspUserThreadStartup.c)
 *     NtPowerInformation @ 0x1406F7470 (NtPowerInformation.c)
 *     ExpAllocateUuids @ 0x140711D44 (ExpAllocateUuids.c)
 *     EtwpAddLogHeader @ 0x140716AC4 (EtwpAddLogHeader.c)
 *     PopExecutePowerAction @ 0x140771228 (PopExecutePowerAction.c)
 *     PopIssueActionRequest @ 0x140771A58 (PopIssueActionRequest.c)
 *     PopResumeApps @ 0x140772514 (PopResumeApps.c)
 *     PopResumeServices @ 0x14077258C (PopResumeServices.c)
 *     Phase1Initialization @ 0x140793E90 (Phase1Initialization.c)
 *     EtwInitializeSiloState @ 0x1407AB4A4 (EtwInitializeSiloState.c)
 *     PpmRegisterPerfStates @ 0x1407B5080 (PpmRegisterPerfStates.c)
 *     CmpRecordShutdownStopTime @ 0x14086E360 (CmpRecordShutdownStopTime.c)
 *     IoCaptureLiveDump @ 0x140898CC8 (IoCaptureLiveDump.c)
 *     RtlCapabilityCheck @ 0x140915BA0 (RtlCapabilityCheck.c)
 *     RtlpCapChkTelemetryRunOnce @ 0x14091DE60 (RtlpCapChkTelemetryRunOnce.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409940F4 (PopTransitionSystemPowerStateEx.c)
 *     PoBroadcastSystemState @ 0x1409952E0 (PoBroadcastSystemState.c)
 *     PopInvokeSystemStateHandler @ 0x140995A68 (PopInvokeSystemStateHandler.c)
 *     PopHiberCheckForDebugBreak @ 0x14099781C (PopHiberCheckForDebugBreak.c)
 *     PopDecompressHiberBlocks @ 0x140997874 (PopDecompressHiberBlocks.c)
 *     KiCalibrateTimeAdjustment @ 0x140997B90 (KiCalibrateTimeAdjustment.c)
 *     HalpCmciInit @ 0x1409A3A24 (HalpCmciInit.c)
 *     HalpDpReplaceControl @ 0x1409AB8B0 (HalpDpReplaceControl.c)
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x1409B00E0 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 *     PnprGetMillisecondCounter @ 0x1409B089C (PnprGetMillisecondCounter.c)
 *     PopWriteImageHeader @ 0x1409B4E20 (PopWriteImageHeader.c)
 *     KdInitSystem @ 0x1409B8160 (KdInitSystem.c)
 *     KdpSendWaitContinue @ 0x1409BB4F4 (KdpSendWaitContinue.c)
 *     VfFillAllocatedMemory @ 0x1409E3004 (VfFillAllocatedMemory.c)
 *     InitBootProcessor @ 0x140A3CF64 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A3DB24 (Phase1InitializationDiscard.c)
 *     PoInitSystem @ 0x140A41DE0 (PoInitSystem.c)
 *     MiInitNucleus @ 0x140A43414 (MiInitNucleus.c)
 *     KeInitializeClock @ 0x140A48B4C (KeInitializeClock.c)
 *     MiInitSystem @ 0x140A52854 (MiInitSystem.c)
 *     EtwpInitialize @ 0x140A68D10 (EtwpInitialize.c)
 *     ViInitSystemPhase0 @ 0x140A72B38 (ViInitSystemPhase0.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x140288EA0 (HalpTimerGetInternalData.c)
 *     HalpTimerScaleCounter @ 0x140395E80 (HalpTimerScaleCounter.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
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
