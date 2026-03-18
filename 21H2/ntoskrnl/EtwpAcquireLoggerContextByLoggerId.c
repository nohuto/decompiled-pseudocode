/*
 * XREFs of EtwpAcquireLoggerContextByLoggerId @ 0x140797594
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x1402E1140 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpGetCompressionSettings @ 0x140635440 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x1406356A0 (EtwpSetCompressionSettings.c)
 *     EtwpGetTraceGuidInfo @ 0x14065F10C (EtwpGetTraceGuidInfo.c)
 *     EtwpTrackProviderBinary @ 0x1406E80C4 (EtwpTrackProviderBinary.c)
 *     AddDecodeGuidToSessions @ 0x1406EA568 (AddDecodeGuidToSessions.c)
 *     EtwpRealtimeConnect @ 0x1406EC524 (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x1406EC954 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpStartLogger @ 0x1406EE2AC (EtwpStartLogger.c)
 *     EtwpAcquireLoggerContext @ 0x1406EF020 (EtwpAcquireLoggerContext.c)
 *     EtwpLookupLoggerIdByName @ 0x1406F01A4 (EtwpLookupLoggerIdByName.c)
 *     EtwpValidateEnableNotification @ 0x14078FE24 (EtwpValidateEnableNotification.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1407940E4 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpUpdateEnableMask @ 0x14079488C (EtwpUpdateEnableMask.c)
 *     EtwpAddRegEntryToGroup @ 0x140794F30 (EtwpAddRegEntryToGroup.c)
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 *     EtwpTrackProviderRegistration @ 0x140796C40 (EtwpTrackProviderRegistration.c)
 *     EtwShutdown @ 0x1407FDA6C (EtwShutdown.c)
 *     WmiQueryTraceInformation @ 0x140815520 (WmiQueryTraceInformation.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14081C05C (EtwQueryPerformanceTraceInformation.c)
 *     EtwpFixBootLoggers @ 0x140854CB8 (EtwpFixBootLoggers.c)
 *     EtwpTracingProvEnableCallback @ 0x140865450 (EtwpTracingProvEnableCallback.c)
 *     EtwSetPerformanceTraceInformation @ 0x1409DEFB8 (EtwSetPerformanceTraceInformation.c)
 *     EtwpUpdateDisallowList @ 0x1409E48B8 (EtwpUpdateDisallowList.c)
 *     EtwpGetDisallowList @ 0x1409E4B48 (EtwpGetDisallowList.c)
 *     EtwpQueryReferenceTime @ 0x1409E4E94 (EtwpQueryReferenceTime.c)
 *     EtwRegisterEventCallback @ 0x1409E94C0 (EtwRegisterEventCallback.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1409E9F80 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1409EC088 (EtwpUpdatePeriodicCaptureState.c)
 *     EtwpGetSoftRestartInformation @ 0x1409EC9EC (EtwpGetSoftRestartInformation.c)
 *     EtwpKsrCallback @ 0x1409ECB90 (EtwpKsrCallback.c)
 *     EtwpSetSoftRestartInformation @ 0x1409ED7D4 (EtwpSetSoftRestartInformation.c)
 *     EtwpSetProviderBinaryTracking @ 0x1409F5378 (EtwpSetProviderBinaryTracking.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140A36BE0 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1402F69F0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402FE2A0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpReleaseLoggerContext @ 0x1407981E8 (EtwpReleaseLoggerContext.c)
 */

__int64 __fastcall EtwpAcquireLoggerContextByLoggerId(__int64 a1, unsigned int a2, char a3)
{
  __int64 v4; // rbx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rbx

  v4 = a2;
  v6 = a2;
  if ( a2 >= *(_DWORD *)(a1 + 16)
    || (*(_BYTE *)(*(_QWORD *)(a1 + 456) + 8LL * a2) & 1) != 0
    || !ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 448) + 8LL * a2), 1u) )
  {
    return 0LL;
  }
  if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 16)
    || (_mm_lfence(), v8 = *(_QWORD *)(*(_QWORD *)(a1 + 456) + 8 * v4), (v8 & 1) != 0) )
  {
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 448) + 8 * v6), 1u);
    return 0LL;
  }
  if ( a3 )
    KeWaitForSingleObject((PVOID)(v8 + 632), Executive, 0, 0, 0LL);
  if ( !*(_DWORD *)(v8 + 320) )
  {
    LOBYTE(v7) = a3;
    EtwpReleaseLoggerContext(v8, v7);
    return 0LL;
  }
  return v8;
}
