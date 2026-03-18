/*
 * XREFs of EtwpReleaseLoggerContext @ 0x1407981E8
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x1402E1140 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpTransitionToRealtime @ 0x140630D00 (EtwpTransitionToRealtime.c)
 *     EtwpGetCompressionSettings @ 0x140635440 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x1406356A0 (EtwpSetCompressionSettings.c)
 *     EtwpGetTraceGuidInfo @ 0x14065F10C (EtwpGetTraceGuidInfo.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x1406E6D40 (EtwQueryTraceHandleByLoggerName.c)
 *     EtwpTrackProviderBinary @ 0x1406E80C4 (EtwpTrackProviderBinary.c)
 *     AddDecodeGuidToSessions @ 0x1406EA568 (AddDecodeGuidToSessions.c)
 *     EtwpRealtimeConnect @ 0x1406EC524 (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x1406EC954 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpFlushTrace @ 0x1406ECACC (EtwpFlushTrace.c)
 *     EtwpUpdateTrace @ 0x1406ECE0C (EtwpUpdateTrace.c)
 *     EtwpStopTrace @ 0x1406EDFEC (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x1406EE2AC (EtwpStartLogger.c)
 *     EtwpQueryTrace @ 0x1406EEF3C (EtwpQueryTrace.c)
 *     EtwpLookupLoggerIdByName @ 0x1406F01A4 (EtwpLookupLoggerIdByName.c)
 *     EtwpEnableGuid @ 0x14079028C (EtwpEnableGuid.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1407940E4 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpAddRegEntryToGroup @ 0x140794F30 (EtwpAddRegEntryToGroup.c)
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 *     EtwpTrackProviderRegistration @ 0x140796C40 (EtwpTrackProviderRegistration.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140797594 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwShutdown @ 0x1407FDA6C (EtwShutdown.c)
 *     WmiQueryTraceInformation @ 0x140815520 (WmiQueryTraceInformation.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14081C05C (EtwQueryPerformanceTraceInformation.c)
 *     EtwpFixBootLoggers @ 0x140854CB8 (EtwpFixBootLoggers.c)
 *     EtwpTracingProvEnableCallback @ 0x140865450 (EtwpTracingProvEnableCallback.c)
 *     EtwSetPerformanceTraceInformation @ 0x1409DEFB8 (EtwSetPerformanceTraceInformation.c)
 *     EtwpUpdateDisallowList @ 0x1409E48B8 (EtwpUpdateDisallowList.c)
 *     EtwpGetDisallowList @ 0x1409E4B48 (EtwpGetDisallowList.c)
 *     EtwpIncrementTraceFile @ 0x1409E4DAC (EtwpIncrementTraceFile.c)
 *     EtwpQueryReferenceTime @ 0x1409E4E94 (EtwpQueryReferenceTime.c)
 *     EtwRegisterEventCallback @ 0x1409E94C0 (EtwRegisterEventCallback.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1409E9F80 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1409EC088 (EtwpUpdatePeriodicCaptureState.c)
 *     SendCaptureStateNotificationsWorker @ 0x1409EC340 (SendCaptureStateNotificationsWorker.c)
 *     EtwpGetSoftRestartInformation @ 0x1409EC9EC (EtwpGetSoftRestartInformation.c)
 *     EtwpKsrCallback @ 0x1409ECB90 (EtwpKsrCallback.c)
 *     EtwpSetSoftRestartInformation @ 0x1409ED7D4 (EtwpSetSoftRestartInformation.c)
 *     EtwpSetProviderBinaryTracking @ 0x1409F5378 (EtwpSetProviderBinaryTracking.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140A36BE0 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402FE2A0 (ExReleaseRundownProtectionCacheAwareEx.c)
 */

void __fastcall EtwpReleaseLoggerContext(unsigned int *a1, char a2)
{
  if ( a2 )
    KeReleaseMutex((PRKMUTEX)(a1 + 158), 0);
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a1 + 137) + 448LL) + 8LL * *a1),
    1u);
}
