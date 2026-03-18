/*
 * XREFs of EtwpReleaseLoggerContext @ 0x140669F18
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x140266F84 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpTransitionToRealtime @ 0x1403F7364 (EtwpTransitionToRealtime.c)
 *     EtwpGetCompressionSettings @ 0x1405AB994 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x1405ABE64 (EtwpSetCompressionSettings.c)
 *     EtwpTrackProviderRegistration @ 0x1405F4B80 (EtwpTrackProviderRegistration.c)
 *     EtwpUpdateEnableMask @ 0x140669514 (EtwpUpdateEnableMask.c)
 *     EtwpAddRegEntryToGroup @ 0x140669A60 (EtwpAddRegEntryToGroup.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140669F64 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpTrackProviderBinary @ 0x1406DFDD8 (EtwpTrackProviderBinary.c)
 *     EtwpRealtimeConnect @ 0x1407121C8 (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x1407125F8 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpFlushTrace @ 0x1407130C4 (EtwpFlushTrace.c)
 *     EtwpLookupLoggerIdByName @ 0x1407132CC (EtwpLookupLoggerIdByName.c)
 *     EtwpStopTrace @ 0x140713944 (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x140713B28 (EtwpStartLogger.c)
 *     EtwpQueryTrace @ 0x1407147A0 (EtwpQueryTrace.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1407149CC (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpEnableGuid @ 0x1407188EC (EtwpEnableGuid.c)
 *     EtwShutdown @ 0x1407700F0 (EtwShutdown.c)
 *     WmiQueryTraceInformation @ 0x140784CA0 (WmiQueryTraceInformation.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x140785A3C (EtwQueryTraceHandleByLoggerName.c)
 *     EtwpUpdateTrace @ 0x14078C87C (EtwpUpdateTrace.c)
 *     EtwpTracingProvEnableCallback @ 0x1407D1280 (EtwpTracingProvEnableCallback.c)
 *     EtwpUpdateDisallowList @ 0x140936C10 (EtwpUpdateDisallowList.c)
 *     EtwpGetDisallowList @ 0x140936EA8 (EtwpGetDisallowList.c)
 *     EtwpIncrementTraceFile @ 0x140937414 (EtwpIncrementTraceFile.c)
 *     EtwpQueryReferenceTime @ 0x140937500 (EtwpQueryReferenceTime.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14093A69C (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x14093AD90 (EtwSetPerformanceTraceInformation.c)
 *     EtwRegisterEventCallback @ 0x14093F750 (EtwRegisterEventCallback.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1409400B0 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x140941E94 (EtwpUpdatePeriodicCaptureState.c)
 *     SendCaptureStateNotificationsWorker @ 0x140942170 (SendCaptureStateNotificationsWorker.c)
 *     EtwpSetProviderBinaryTracking @ 0x140943670 (EtwpSetProviderBinaryTracking.c)
 *     AddDecodeGuidToSessions @ 0x14094437C (AddDecodeGuidToSessions.c)
 *     EtwpGetSoftRestartInformation @ 0x14094ADA4 (EtwpGetSoftRestartInformation.c)
 *     EtwpKsrCallback @ 0x14094AF50 (EtwpKsrCallback.c)
 *     EtwpSetSoftRestartInformation @ 0x14094BB84 (EtwpSetSoftRestartInformation.c)
 *     EtwpEventTracingCounterSetCallback @ 0x1409854A0 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140202D10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeReleaseMutex @ 0x140240290 (KeReleaseMutex.c)
 */

void __fastcall EtwpReleaseLoggerContext(unsigned int *a1, char a2)
{
  if ( a2 )
    KeReleaseMutex((PRKMUTEX)(a1 + 162), 0);
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a1 + 135) + 448LL) + 8LL * *a1),
    1u);
}
