/*
 * XREFs of EtwpAcquireLoggerContextByLoggerId @ 0x140669F64
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x140266F84 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpGetCompressionSettings @ 0x1405AB994 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x1405ABE64 (EtwpSetCompressionSettings.c)
 *     EtwpTrackProviderRegistration @ 0x1405F4B80 (EtwpTrackProviderRegistration.c)
 *     EtwpUpdateEnableMask @ 0x140669514 (EtwpUpdateEnableMask.c)
 *     EtwpAddRegEntryToGroup @ 0x140669A60 (EtwpAddRegEntryToGroup.c)
 *     EtwpTrackProviderBinary @ 0x1406DFDD8 (EtwpTrackProviderBinary.c)
 *     EtwpRealtimeConnect @ 0x1407121C8 (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x1407125F8 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpLookupLoggerIdByName @ 0x1407132CC (EtwpLookupLoggerIdByName.c)
 *     EtwpStartLogger @ 0x140713B28 (EtwpStartLogger.c)
 *     EtwpAcquireLoggerContext @ 0x140714878 (EtwpAcquireLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1407149CC (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpValidateEnableNotification @ 0x1407191C8 (EtwpValidateEnableNotification.c)
 *     EtwShutdown @ 0x1407700F0 (EtwShutdown.c)
 *     WmiQueryTraceInformation @ 0x140784CA0 (WmiQueryTraceInformation.c)
 *     EtwpTracingProvEnableCallback @ 0x1407D1280 (EtwpTracingProvEnableCallback.c)
 *     EtwpUpdateDisallowList @ 0x140936C10 (EtwpUpdateDisallowList.c)
 *     EtwpGetDisallowList @ 0x140936EA8 (EtwpGetDisallowList.c)
 *     EtwpQueryReferenceTime @ 0x140937500 (EtwpQueryReferenceTime.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14093A69C (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x14093AD90 (EtwSetPerformanceTraceInformation.c)
 *     EtwRegisterEventCallback @ 0x14093F750 (EtwRegisterEventCallback.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1409400B0 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x140941E94 (EtwpUpdatePeriodicCaptureState.c)
 *     EtwpSetProviderBinaryTracking @ 0x140943670 (EtwpSetProviderBinaryTracking.c)
 *     AddDecodeGuidToSessions @ 0x14094437C (AddDecodeGuidToSessions.c)
 *     EtwpGetSoftRestartInformation @ 0x14094ADA4 (EtwpGetSoftRestartInformation.c)
 *     EtwpKsrCallback @ 0x14094AF50 (EtwpKsrCallback.c)
 *     EtwpSetSoftRestartInformation @ 0x14094BB84 (EtwpSetSoftRestartInformation.c)
 *     EtwpEventTracingCounterSetCallback @ 0x1409854A0 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140202D10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140202F70 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     EtwpReleaseLoggerContext @ 0x140669F18 (EtwpReleaseLoggerContext.c)
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
