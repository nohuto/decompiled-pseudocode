/*
 * XREFs of EtwpAcquireLoggerContextByLoggerId @ 0x140638894
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x140253CD0 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpGetCompressionSettings @ 0x1405AD5C4 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x1405ADA94 (EtwpSetCompressionSettings.c)
 *     EtwpRealtimeConnect @ 0x140617EC8 (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x1406182F8 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpTrackProviderBinary @ 0x14061ED28 (EtwpTrackProviderBinary.c)
 *     EtwpTrackProviderRegistration @ 0x140637C90 (EtwpTrackProviderRegistration.c)
 *     EtwpUpdateEnableMask @ 0x140637DA8 (EtwpUpdateEnableMask.c)
 *     EtwpAddRegEntryToGroup @ 0x140638390 (EtwpAddRegEntryToGroup.c)
 *     EtwpLookupLoggerIdByName @ 0x1406B4BCC (EtwpLookupLoggerIdByName.c)
 *     EtwpStartLogger @ 0x1406B5480 (EtwpStartLogger.c)
 *     EtwpAcquireLoggerContext @ 0x1406B61D0 (EtwpAcquireLoggerContext.c)
 *     EtwpValidateEnableNotification @ 0x1406B9FC0 (EtwpValidateEnableNotification.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1406F1C28 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwShutdown @ 0x140774180 (EtwShutdown.c)
 *     WmiQueryTraceInformation @ 0x140788C40 (WmiQueryTraceInformation.c)
 *     EtwpTracingProvEnableCallback @ 0x1407D5870 (EtwpTracingProvEnableCallback.c)
 *     EtwpUpdateDisallowList @ 0x1409345B0 (EtwpUpdateDisallowList.c)
 *     EtwpGetDisallowList @ 0x140934848 (EtwpGetDisallowList.c)
 *     EtwpQueryReferenceTime @ 0x140934EA0 (EtwpQueryReferenceTime.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14093803C (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x140938730 (EtwSetPerformanceTraceInformation.c)
 *     EtwRegisterEventCallback @ 0x14093D0F0 (EtwRegisterEventCallback.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x14093DA54 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x14093F834 (EtwpUpdatePeriodicCaptureState.c)
 *     EtwpSetProviderBinaryTracking @ 0x140941010 (EtwpSetProviderBinaryTracking.c)
 *     AddDecodeGuidToSessions @ 0x140941D1C (AddDecodeGuidToSessions.c)
 *     EtwpGetSoftRestartInformation @ 0x140948744 (EtwpGetSoftRestartInformation.c)
 *     EtwpKsrCallback @ 0x1409488F0 (EtwpKsrCallback.c)
 *     EtwpSetSoftRestartInformation @ 0x140949520 (EtwpSetSoftRestartInformation.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140982DA0 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402A5670 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1402A58B0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     EtwpReleaseLoggerContext @ 0x140638848 (EtwpReleaseLoggerContext.c)
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
