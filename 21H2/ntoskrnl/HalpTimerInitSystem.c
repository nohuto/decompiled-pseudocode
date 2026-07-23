/*
 * XREFs of HalpTimerInitSystem @ 0x1403A9340
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
 *     HalQueryMaximumProcessorCount @ 0x14037AE50 (HalQueryMaximumProcessorCount.c)
 *     HalpInterruptModel @ 0x14037AEA4 (HalpInterruptModel.c)
 *     HalpMmAllocCtxAlloc @ 0x14037C598 (HalpMmAllocCtxAlloc.c)
 *     HalpTimerPropagateQpcBiasUpdate @ 0x1403A5EBC (HalpTimerPropagateQpcBiasUpdate.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x1403A8E94 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpTimerInitializeClock @ 0x1403A91E4 (HalpTimerInitializeClock.c)
 *     HalpTimerInitializeProfiling @ 0x1403A95E0 (HalpTimerInitializeProfiling.c)
 *     HalpTimerSaveProcessorFrequency @ 0x1403A9690 (HalpTimerSaveProcessorFrequency.c)
 *     HalpTimerInitializeClockPn @ 0x1403A97A0 (HalpTimerInitializeClockPn.c)
 *     HalpInitializePnTimers @ 0x1403A9840 (HalpInitializePnTimers.c)
 *     HalpTimerInitializeEarlyStallSource @ 0x1403AA2D8 (HalpTimerInitializeEarlyStallSource.c)
 *     HalpInitializeTimers @ 0x1403AA3C8 (HalpInitializeTimers.c)
 *     HalpTimerInitPowerManagement @ 0x1403BE05C (HalpTimerInitPowerManagement.c)
 *     HalpTscReserveResources @ 0x1403CD198 (HalpTscReserveResources.c)
 *     HalpTimerConfigureQpcBypass @ 0x1403CDF1C (HalpTimerConfigureQpcBypass.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x1403CE9DC (HalpTimerSchedulePeriodicQueries.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     HalpTimerCaptureCloestAuxiliaryQpcPair @ 0x1404B66DC (HalpTimerCaptureCloestAuxiliaryQpcPair.c)
 *     HalpTscFallbackToPlatformSource @ 0x1404C18D8 (HalpTscFallbackToPlatformSource.c)
 *     HalpTimerInitializeSystemWatchdog @ 0x1404C2720 (HalpTimerInitializeSystemWatchdog.c)
 *     HalpTimerMeasureAllProcessorFrequencies @ 0x1404C3784 (HalpTimerMeasureAllProcessorFrequencies.c)
 *     HalpTscReportSyncStatus @ 0x1407D2C00 (HalpTscReportSyncStatus.c)
 *     HalpTimerWatchdogLogReset @ 0x1407D5284 (HalpTimerWatchdogLogReset.c)
 *     HalpTimerTraceTimingHardware @ 0x1407D57B8 (HalpTimerTraceTimingHardware.c)
 */

__int64 __fastcall HalpTimerInitSystem(int a1, __int64 a2, __int64 a3)
{
  unsigned int inited; // ebx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  __int64 v8; // rcx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned int MaximumProcessorCount; // eax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // eax
  unsigned __int8 v25; // cl
  const EVENT_DESCRIPTOR *v26; // rcx
  LARGE_INTEGER PerformanceFrequency; // [rsp+58h] [rbp+20h] BYREF

  inited = 0;
  v4 = a1 - 1;
  if ( !v4 )
  {
    inited = HalpTimerInitializeEarlyStallSource(a3);
    off_140C00738[0] = HalpTimerNotifyProcessorFreeze;
    return inited;
  }
  v5 = v4 - 7;
  if ( !v5 )
  {
    v25 = byte_140C4A08C;
    if ( !byte_140C4A08C )
      v25 = 50;
    HalpCmosCenturyOffset = v25;
    return inited;
  }
  v6 = v5 - 6;
  if ( !v6 )
  {
    if ( (unsigned int)HalpInterruptModel() == 1 )
      off_140C006B0[0] = HalpTscSynchronization;
    off_140C00878[0] = (__int64 (__fastcall *)())HalpTimerClockActivate;
    off_140C00880[0] = HalpTimerClockInitialize;
    off_140C00888[0] = HalpTimerClockStop;
    off_140C00890[0] = (__int64 (__fastcall *)())HalpTimerClockArm;
    off_140C00870[0] = HalpTimerGetClockConfiguration;
    off_140C00898[0] = (__int64 (__fastcall *)())HalpTimerOnlyClockInterruptPending;
    off_140C007F0 = HalpTimerQueryCycleCounter;
    off_140C00A00 = (__int64 (__fastcall *)())HalpTimerGetReferencePage;
    off_140C00928[0] = HalpTimerConvertAuxiliaryCounterToPerformanceCounter;
    off_140C00920[0] = HalpTimerConvertPerformanceCounterToAuxiliaryCounter;
    off_140C00930[0] = HalpTimerQueryAuxiliaryCounterFrequency;
    HalpInitializeTimers(v19);
    ((void (*)(void))HalpTimerSaveProcessorFrequency)();
    HalpTimerInitializeClock(v21, v20, v22, v23);
    KiProfileIrql = 15;
    v24 = HalpTimerInitializeProfiling();
    inited = v24;
    if ( v24 < 0 )
      KeBugCheckEx(0x5Cu, 0x110uLL, v24, 0LL, 0LL);
    HalpTimerPropagateQpcBiasUpdate(HalpPerformanceCounter);
    return inited;
  }
  v7 = v6 - 3;
  if ( v7 )
  {
    v8 = (unsigned int)(v7 - 2);
    if ( !(_DWORD)v8 )
    {
      if ( !qword_140C4A1C8 )
      {
        v8 = 16LL;
        __writemsr(0x10u, 0LL);
      }
      HalpTimerSaveProcessorFrequency(v8);
      HalpInitializePnTimers();
      HalpTimerInitializeClockPn();
      return (unsigned int)HalpTimerInitializeProfiling();
    }
    v9 = v8 - 2;
    if ( v9 )
    {
      v10 = v9 - 4;
      if ( v10 )
      {
        v11 = v10 - 4;
        if ( v11 )
        {
          if ( v11 == 3 )
          {
            off_140C00948[0] = (__int64 (__fastcall *)())HalpTimerQueryAndResetRtcErrors;
            HalpTimerTraceTimingHardware();
            HalpTscReportSyncStatus();
          }
        }
        else
        {
          inited = HalpTimerInitPowerManagement();
          HalpTimerWatchdogLogReset();
        }
      }
      else if ( HalpWatchdogTimer )
      {
        HalpTimerInitializeSystemWatchdog();
      }
      return inited;
    }
    HalpTimerSchedulePeriodicQueries();
    HalpTimerConfigureQpcBypass();
    off_140C009E0[0] = HalpTimerQueryHostPerformanceCounter;
    if ( (unsigned int)HalpInterruptModel() == 1 )
    {
      if ( !HalpTimerProcessorFrequencyKnown && *(_DWORD *)(HalpPerformanceCounter + 228) != 5 )
        HalpTimerMeasureAllProcessorFrequencies();
      if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
      {
        if ( HalpTscSynchronizationFailureFallback )
        {
          v26 = (const EVENT_DESCRIPTOR *)HAL_ETW_EVENT_UNEXPECTED_FALLBACK;
        }
        else
        {
          if ( !HalpTscProcessorFeatureFallback )
            goto LABEL_25;
          v26 = &HAL_ETW_EVENT_EXPECTED_FALLBACK;
        }
        HalpTscFallbackToPlatformSource(v26);
      }
    }
LABEL_25:
    PerformanceFrequency.QuadPart = 0LL;
    v13 = HalpAuxiliaryCounter;
    if ( HalpAuxiliaryCounter )
    {
      if ( HalpTimerAuxiliaryClockEnabled )
      {
        if ( (*(_DWORD *)(HalpAuxiliaryCounter + 224) & 0x6000) != 0 )
        {
          v13 = 0LL;
          HalpAuxiliaryCounter = 0LL;
        }
        if ( v13 )
        {
          if ( !HalpTimerQpcFreqForAuxQpcConversion )
          {
            KeQueryPerformanceCounter(&PerformanceFrequency);
            HalpTimerQpcFreqForAuxQpcConversion = PerformanceFrequency.QuadPart;
          }
          HalpTimerEarliestQpcAllowedToConvert = KeQueryPerformanceCounter(0LL).QuadPart;
          HalpTimerCaptureCloestAuxiliaryQpcPair();
        }
      }
      else
      {
        HalpAuxiliaryCounter = 0LL;
      }
    }
    return inited;
  }
  HalpTscReserveResources();
  MaximumProcessorCount = HalQueryMaximumProcessorCount(v14);
  HalpTimerSavedProcessorCounter = HalpMmAllocCtxAlloc(v16, 8LL * MaximumProcessorCount);
  if ( HalpTimerSavedProcessorCounter )
  {
    if ( (unsigned int)HalpInterruptModel() == 1 )
      HalpTimerInitializeHypervisorTimer(v18, v17);
    return inited;
  }
  return 3221225626LL;
}
