/*
 * XREFs of EtwpAcquireLoggerContextByLoggerId @ 0x1405F3B64
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x140241960 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpGetCompressionSettings @ 0x1405A7744 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x1405A7C14 (EtwpSetCompressionSettings.c)
 *     EtwpUpdateEnableMask @ 0x1405F26BC (EtwpUpdateEnableMask.c)
 *     EtwpAddRegEntryToGroup @ 0x1405F4850 (EtwpAddRegEntryToGroup.c)
 *     EtwpTrackProviderRegistration @ 0x1405F4E80 (EtwpTrackProviderRegistration.c)
 *     EtwpRealtimeConnect @ 0x140677318 (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x140677748 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpLookupLoggerIdByName @ 0x140679038 (EtwpLookupLoggerIdByName.c)
 *     EtwpStartLogger @ 0x1406798DC (EtwpStartLogger.c)
 *     EtwpAcquireLoggerContext @ 0x14067A62C (EtwpAcquireLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x14067A780 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpValidateEnableNotification @ 0x14067EB30 (EtwpValidateEnableNotification.c)
 *     EtwpTrackProviderBinary @ 0x1406E9B78 (EtwpTrackProviderBinary.c)
 *     EtwShutdown @ 0x140760200 (EtwShutdown.c)
 *     WmiQueryTraceInformation @ 0x140774290 (WmiQueryTraceInformation.c)
 *     EtwpTracingProvEnableCallback @ 0x1407BF520 (EtwpTracingProvEnableCallback.c)
 *     EtwpUpdateDisallowList @ 0x14092FB30 (EtwpUpdateDisallowList.c)
 *     EtwpGetDisallowList @ 0x14092FDC8 (EtwpGetDisallowList.c)
 *     EtwpQueryReferenceTime @ 0x140930420 (EtwpQueryReferenceTime.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1409335CC (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x140933CC0 (EtwSetPerformanceTraceInformation.c)
 *     EtwRegisterEventCallback @ 0x140938680 (EtwRegisterEventCallback.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x140938FE0 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x14093ADC4 (EtwpUpdatePeriodicCaptureState.c)
 *     SendCaptureStateNotificationsWorker @ 0x14093B0C0 (SendCaptureStateNotificationsWorker.c)
 *     EtwpSetProviderBinaryTracking @ 0x14093C634 (EtwpSetProviderBinaryTracking.c)
 *     AddDecodeGuidToSessions @ 0x14093D33C (AddDecodeGuidToSessions.c)
 *     EtwpGetSoftRestartInformation @ 0x140943D70 (EtwpGetSoftRestartInformation.c)
 *     EtwpKsrCallback @ 0x140943F20 (EtwpKsrCallback.c)
 *     EtwpSetSoftRestartInformation @ 0x140944B54 (EtwpSetSoftRestartInformation.c)
 *     EtwpEventTracingCounterSetCallback @ 0x14097E330 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1402C2730 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402E5060 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpReleaseLoggerContext @ 0x1405F3C38 (EtwpReleaseLoggerContext.c)
 */

__int64 __fastcall EtwpAcquireLoggerContextByLoggerId(__int64 a1, unsigned int a2, char a3)
{
  __int64 v4; // rbx
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rbx

  v4 = a2;
  v6 = a2;
  if ( a2 >= *(_DWORD *)(a1 + 16) )
    LOBYTE(v7) = 1;
  else
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 456) + 8LL * a2);
  if ( (v7 & 1) != 0
    || !ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 448) + 8LL * a2), 1u) )
  {
    return 0LL;
  }
  if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 16) )
  {
    v9 = 1LL;
  }
  else
  {
    _mm_lfence();
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 456) + 8 * v4);
  }
  if ( (v9 & 1) != 0 )
  {
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 448) + 8 * v6), 1u);
    return 0LL;
  }
  if ( a3 )
    KeWaitForSingleObject((PVOID)(v9 + 648), Executive, 0, 0, 0LL);
  if ( !*(_DWORD *)(v9 + 336) )
  {
    LOBYTE(v8) = a3;
    EtwpReleaseLoggerContext(v9, v8);
    return 0LL;
  }
  return v9;
}
