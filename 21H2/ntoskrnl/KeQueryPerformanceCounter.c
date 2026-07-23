/*
 * XREFs of KeQueryPerformanceCounter @ 0x1402D0BC0
 * Callers:
 *     KeInsertSchedulingGroup @ 0x140202418 (KeInsertSchedulingGroup.c)
 *     KiUpdateCpuTargetByWeight @ 0x140205158 (KiUpdateCpuTargetByWeight.c)
 *     KiUpdateCpuTargetByRate @ 0x140205430 (KiUpdateCpuTargetByRate.c)
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x140207C40 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     KiSetClockTickRate @ 0x140211120 (KiSetClockTickRate.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402129F0 (EtwGetKernelTraceTimestamp.c)
 *     MiAllocateContiguousMemory @ 0x140216BFC (MiAllocateContiguousMemory.c)
 *     PpmPerfApplyDomainState @ 0x14021DB70 (PpmPerfApplyDomainState.c)
 *     KiUpdateTimeAssist @ 0x140229420 (KiUpdateTimeAssist.c)
 *     EtwGetKernelTraceTimestampSilo @ 0x14022C4FC (EtwGetKernelTraceTimestampSilo.c)
 *     HalpSetVirtualRtc @ 0x14023435C (HalpSetVirtualRtc.c)
 *     MiReassessZeroThreads @ 0x1402397D4 (MiReassessZeroThreads.c)
 *     HalpTimerDpcRoutine @ 0x14024FA40 (HalpTimerDpcRoutine.c)
 *     MiScheduleZeroPageThreads @ 0x140260E24 (MiScheduleZeroPageThreads.c)
 *     RtlGetSystemTimePrecise @ 0x140266EC0 (RtlGetSystemTimePrecise.c)
 *     PopGetIdleTimesCallback @ 0x140269E70 (PopGetIdleTimesCallback.c)
 *     PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x14026F8A0 (PopDeepSleepResiliencyPhaseAccountingUpdate.c)
 *     KeQuerySchedulingGroupHistory @ 0x140274F94 (KeQuerySchedulingGroupHistory.c)
 *     ?SmReadPickStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU?$SMKM_STORE@USM_TRAITS@@@@2@Z @ 0x140291C30 (-SmReadPickStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU-$SMKM_STO.c)
 *     StEtaStart @ 0x1402935CC (StEtaStart.c)
 *     MiAllocatePagesForMdl @ 0x140294744 (MiAllocatePagesForMdl.c)
 *     RtlGetMultiTimePrecise @ 0x14029E2F0 (RtlGetMultiTimePrecise.c)
 *     ?StDmInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@0@Z @ 0x1402A2BA4 (-StDmInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@0@Z.c)
 *     StLcInitialize @ 0x1402A3720 (StLcInitialize.c)
 *     PpmIdlePrepare @ 0x1402C9890 (PpmIdlePrepare.c)
 *     RtlGetInterruptTimePrecise @ 0x1402CF060 (RtlGetInterruptTimePrecise.c)
 *     PpmIdleSnapConcurrency @ 0x1402CF820 (PpmIdleSnapConcurrency.c)
 *     EtwpGetLoggerTimeStamp @ 0x1402D1328 (EtwpGetLoggerTimeStamp.c)
 *     KiExecuteAllDpcs @ 0x1402EBB00 (KiExecuteAllDpcs.c)
 *     EtwpReserveTraceBuffer @ 0x14035B440 (EtwpReserveTraceBuffer.c)
 *     KeRebaselineInterruptTime @ 0x14038407C (KeRebaselineInterruptTime.c)
 *     HalpQueryVirtualRtc @ 0x14038417C (HalpQueryVirtualRtc.c)
 *     HalpTimerRestorePerformanceCounter @ 0x140386E28 (HalpTimerRestorePerformanceCounter.c)
 *     ?SmAsyncReadQueueWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140387E80 (-SmAsyncReadQueueWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     KiTimerExpiration @ 0x140389440 (KiTimerExpiration.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x14038D90C (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     KeRebaselineSystemTime @ 0x14038DEE8 (KeRebaselineSystemTime.c)
 *     PpmIdleSelectStates @ 0x1403956D0 (PpmIdleSelectStates.c)
 *     KiUpdateSystemTime @ 0x140397FF8 (KiUpdateSystemTime.c)
 *     PpmPerfApplyProcessorState @ 0x140398C8C (PpmPerfApplyProcessorState.c)
 *     BgpFwQueryPerformanceCounter @ 0x14039BFD0 (BgpFwQueryPerformanceCounter.c)
 *     KiIpiGenericCallTarget @ 0x1403A51F0 (KiIpiGenericCallTarget.c)
 *     HalpTimerInitSystem @ 0x1403A9340 (HalpTimerInitSystem.c)
 *     HalpTimerReadTimerPairWithLatencyLimit @ 0x1403AA968 (HalpTimerReadTimerPairWithLatencyLimit.c)
 *     HalpTimerDetermineValidTimerPairReadLatency @ 0x1403AAA4C (HalpTimerDetermineValidTimerPairReadLatency.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x1403B48C0 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     KiSetupTimeIncrement @ 0x1403B4AB4 (KiSetupTimeIncrement.c)
 *     HalWheaUpdateCmciPolicy @ 0x1403BABF0 (HalWheaUpdateCmciPolicy.c)
 *     PpmInstallFeedbackCounters @ 0x1403C16A8 (PpmInstallFeedbackCounters.c)
 *     PpmResetPerformanceAccumulation @ 0x1403C27E4 (PpmResetPerformanceAccumulation.c)
 *     PpmQueryTime @ 0x1403C2830 (PpmQueryTime.c)
 *     PpmResetIdlePolicy @ 0x1403C4BC8 (PpmResetIdlePolicy.c)
 *     HalpCmciLoadThresholdConfiguration @ 0x1403C59E8 (HalpCmciLoadThresholdConfiguration.c)
 *     MiZeroBootLargePages @ 0x1403CAD94 (MiZeroBootLargePages.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x1403CE9DC (HalpTimerSchedulePeriodicQueries.c)
 *     PopWriteBsdPoInfo @ 0x1403F8074 (PopWriteBsdPoInfo.c)
 *     HalpTimerCaptureCloestAuxiliaryQpcPair @ 0x1404B66DC (HalpTimerCaptureCloestAuxiliaryQpcPair.c)
 *     HalpTimerCaptureCurrentAuxiliaryQpcPair @ 0x1404B6790 (HalpTimerCaptureCurrentAuxiliaryQpcPair.c)
 *     HalpCmciHandler @ 0x1404BCCE8 (HalpCmciHandler.c)
 *     HalpTscFallback @ 0x1404C1850 (HalpTscFallback.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x1404C3800 (HalpTimerMeasureProcessorsWorker.c)
 *     EmonOverflowHandler @ 0x1404D3AE0 (EmonOverflowHandler.c)
 *     Amd64OverflowHandler @ 0x1404DDCF0 (Amd64OverflowHandler.c)
 *     XmRdtscOp @ 0x1404E6F00 (XmRdtscOp.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x140508C08 (IopLiveDumpGetMillisecondCounter.c)
 *     KeFreezeExecution @ 0x14051D930 (KeFreezeExecution.c)
 *     KeSwitchFrozenProcessor @ 0x14051DD40 (KeSwitchFrozenProcessor.c)
 *     KeThawExecution @ 0x14051DE20 (KeThawExecution.c)
 *     KiCheckStall @ 0x14051DF60 (KiCheckStall.c)
 *     KiFreezeTargetExecution @ 0x14051E0A0 (KiFreezeTargetExecution.c)
 *     PoInitiateProcessorWake @ 0x140565750 (PoInitiateProcessorWake.c)
 *     PpmIdleInstallConcurrency @ 0x140566C60 (PpmIdleInstallConcurrency.c)
 *     PpmIdleRemoveConcurrency @ 0x140566E90 (PpmIdleRemoveConcurrency.c)
 *     PpmIdleSnapConcurrencyIdleTime @ 0x140567040 (PpmIdleSnapConcurrencyIdleTime.c)
 *     PpmIdleTransitionStall @ 0x1405671D8 (PpmIdleTransitionStall.c)
 *     PpmTraceExitLatency @ 0x140567E20 (PpmTraceExitLatency.c)
 *     PopFxUpdateDeviceIRPhaseAccounting @ 0x14056D7D8 (PopFxUpdateDeviceIRPhaseAccounting.c)
 *     PdcPoCurrentPdcPhase @ 0x140576600 (PdcPoCurrentPdcPhase.c)
 *     PopDeepSleepResiliencyPhaseAccountingBegin @ 0x140577A50 (PopDeepSleepResiliencyPhaseAccountingBegin.c)
 *     PopDeepSleepResiliencyPhaseAccountingEnd @ 0x140577B6C (PopDeepSleepResiliencyPhaseAccountingEnd.c)
 *     ?StDeviceIoIssue@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z @ 0x14059AA84 (-StDeviceIoIssue@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14059AFC8 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StNpLeafPageIn@?$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z @ 0x14059CD00 (-StNpLeafPageIn@-$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z.c)
 *     StEtaIoStart @ 0x14059D610 (StEtaIoStart.c)
 *     StLcBucketsCopy @ 0x14059D780 (StLcBucketsCopy.c)
 *     WmiGetClock @ 0x1405A6990 (WmiGetClock.c)
 *     EtwpGetDurationSince @ 0x1405A8CA4 (EtwpGetDurationSince.c)
 *     EtwpCompressPendingBuffers @ 0x1405ACCCC (EtwpCompressPendingBuffers.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x1405C5770 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreen @ 0x1405C5934 (BgpFwDisplayBugCheckScreen.c)
 *     NtQueryPerformanceCounter @ 0x1405F2560 (NtQueryPerformanceCounter.c)
 *     ExpAllocateUuids @ 0x140618F04 (ExpAllocateUuids.c)
 *     PspUserThreadStartup @ 0x14063BC30 (PspUserThreadStartup.c)
 *     NtPowerInformation @ 0x14066AF10 (NtPowerInformation.c)
 *     NtQueryInformationProcess @ 0x14068AF10 (NtQueryInformationProcess.c)
 *     EtwpAddLogHeader @ 0x1406B76C8 (EtwpAddLogHeader.c)
 *     PopExecutePowerAction @ 0x140775388 (PopExecutePowerAction.c)
 *     PopIssueActionRequest @ 0x140775BC8 (PopIssueActionRequest.c)
 *     PopResumeApps @ 0x140776684 (PopResumeApps.c)
 *     PopResumeServices @ 0x1407766FC (PopResumeServices.c)
 *     EtwInitializeSiloState @ 0x14079ADF8 (EtwInitializeSiloState.c)
 *     Phase1Initialization @ 0x1407B3C40 (Phase1Initialization.c)
 *     PpmRegisterPerfStates @ 0x1407BA470 (PpmRegisterPerfStates.c)
 *     CmpRecordShutdownStopTime @ 0x14086C0F0 (CmpRecordShutdownStopTime.c)
 *     IoCaptureLiveDump @ 0x1408963F8 (IoCaptureLiveDump.c)
 *     RtlCapabilityCheck @ 0x1409134B0 (RtlCapabilityCheck.c)
 *     RtlpCapChkTelemetryRunOnce @ 0x14091B7A0 (RtlpCapChkTelemetryRunOnce.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409920F4 (PopTransitionSystemPowerStateEx.c)
 *     PoBroadcastSystemState @ 0x1409932E0 (PoBroadcastSystemState.c)
 *     PopInvokeSystemStateHandler @ 0x140993A68 (PopInvokeSystemStateHandler.c)
 *     PopHiberCheckForDebugBreak @ 0x14099581C (PopHiberCheckForDebugBreak.c)
 *     PopDecompressHiberBlocks @ 0x140995874 (PopDecompressHiberBlocks.c)
 *     KiCalibrateTimeAdjustment @ 0x140995B90 (KiCalibrateTimeAdjustment.c)
 *     HalpCmciInit @ 0x1409A2174 (HalpCmciInit.c)
 *     HalpDpReplaceControl @ 0x1409A96B0 (HalpDpReplaceControl.c)
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x1409ADF10 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 *     PnprGetMillisecondCounter @ 0x1409AE6CC (PnprGetMillisecondCounter.c)
 *     PopWriteImageHeader @ 0x1409B2C50 (PopWriteImageHeader.c)
 *     KdInitSystem @ 0x1409B6160 (KdInitSystem.c)
 *     KdpSendWaitContinue @ 0x1409B94F4 (KdpSendWaitContinue.c)
 *     VfFillAllocatedMemory @ 0x1409E0FF4 (VfFillAllocatedMemory.c)
 *     InitBootProcessor @ 0x140A3BAF4 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A3C6A4 (Phase1InitializationDiscard.c)
 *     PoInitSystem @ 0x140A40948 (PoInitSystem.c)
 *     EtwpInitialize @ 0x140A43414 (EtwpInitialize.c)
 *     MiInitNucleus @ 0x140A43F34 (MiInitNucleus.c)
 *     KeInitializeClock @ 0x140A4C7CC (KeInitializeClock.c)
 *     MiInitSystem @ 0x140A54E5C (MiInitSystem.c)
 *     ViInitSystemPhase0 @ 0x140A70AB8 (ViInitSystemPhase0.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x1402CF2E0 (HalpTimerGetInternalData.c)
 *     HalpTimerScaleCounter @ 0x140396440 (HalpTimerScaleCounter.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
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
