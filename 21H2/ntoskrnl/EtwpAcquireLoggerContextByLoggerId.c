/*
 * XREFs of EtwpAcquireLoggerContextByLoggerId @ 0x140643A84
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x140265D30 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpGetCompressionSettings @ 0x1405AD394 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x1405AD864 (EtwpSetCompressionSettings.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1406024C8 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpTrackProviderRegistration @ 0x140642E80 (EtwpTrackProviderRegistration.c)
 *     EtwpUpdateEnableMask @ 0x140642F98 (EtwpUpdateEnableMask.c)
 *     EtwpAddRegEntryToGroup @ 0x140643580 (EtwpAddRegEntryToGroup.c)
 *     EtwpRealtimeConnect @ 0x1406B88C8 (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x1406B8CF8 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpTrackProviderBinary @ 0x1406BFE18 (EtwpTrackProviderBinary.c)
 *     EtwpLookupLoggerIdByName @ 0x1406DD8EC (EtwpLookupLoggerIdByName.c)
 *     EtwpStartLogger @ 0x1406DE1A0 (EtwpStartLogger.c)
 *     EtwpAcquireLoggerContext @ 0x1406DEEF0 (EtwpAcquireLoggerContext.c)
 *     EtwpValidateEnableNotification @ 0x1406E2CE0 (EtwpValidateEnableNotification.c)
 *     EtwShutdown @ 0x140773FC0 (EtwShutdown.c)
 *     WmiQueryTraceInformation @ 0x140788A80 (WmiQueryTraceInformation.c)
 *     EtwpTracingProvEnableCallback @ 0x1407D5700 (EtwpTracingProvEnableCallback.c)
 *     EtwpUpdateDisallowList @ 0x1409343E0 (EtwpUpdateDisallowList.c)
 *     EtwpGetDisallowList @ 0x140934678 (EtwpGetDisallowList.c)
 *     EtwpQueryReferenceTime @ 0x140934CD0 (EtwpQueryReferenceTime.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140937E6C (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x140938560 (EtwSetPerformanceTraceInformation.c)
 *     EtwRegisterEventCallback @ 0x14093CF20 (EtwRegisterEventCallback.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x14093D884 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x14093F664 (EtwpUpdatePeriodicCaptureState.c)
 *     EtwpSetProviderBinaryTracking @ 0x140940E40 (EtwpSetProviderBinaryTracking.c)
 *     AddDecodeGuidToSessions @ 0x140941B4C (AddDecodeGuidToSessions.c)
 *     EtwpGetSoftRestartInformation @ 0x140948574 (EtwpGetSoftRestartInformation.c)
 *     EtwpKsrCallback @ 0x140948720 (EtwpKsrCallback.c)
 *     EtwpSetSoftRestartInformation @ 0x140949350 (EtwpSetSoftRestartInformation.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140982BC0 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140360770 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1403609B0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpReleaseLoggerContext @ 0x140643A38 (EtwpReleaseLoggerContext.c)
 */

unsigned int *__fastcall EtwpAcquireLoggerContextByLoggerId(__int64 a1, unsigned int a2, char a3)
{
  __int64 v4; // rbx
  __int64 v6; // rsi
  __int64 v7; // rcx
  unsigned int *v8; // rbx

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
    v8 = (unsigned int *)1;
  }
  else
  {
    _mm_lfence();
    v8 = *(unsigned int **)(*(_QWORD *)(a1 + 456) + 8 * v4);
  }
  if ( ((unsigned __int8)v8 & 1) != 0 )
  {
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 448) + 8 * v6), 1u);
    return 0LL;
  }
  if ( a3 )
    KeWaitForSingleObject(v8 + 162, Executive, 0, 0, 0LL);
  if ( !v8[84] )
  {
    EtwpReleaseLoggerContext(v8, a3);
    return 0LL;
  }
  return v8;
}
