/*
 * XREFs of EtwpReleaseLoggerContext @ 0x140643A38
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x140265D30 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpTransitionToRealtime @ 0x1403F9098 (EtwpTransitionToRealtime.c)
 *     EtwpGetCompressionSettings @ 0x1405AD394 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x1405AD864 (EtwpSetCompressionSettings.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1406024C8 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpTrackProviderRegistration @ 0x140642E80 (EtwpTrackProviderRegistration.c)
 *     EtwpUpdateEnableMask @ 0x140642F98 (EtwpUpdateEnableMask.c)
 *     EtwpAddRegEntryToGroup @ 0x140643580 (EtwpAddRegEntryToGroup.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140643A84 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpRealtimeConnect @ 0x1406B88C8 (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x1406B8CF8 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpTrackProviderBinary @ 0x1406BFE18 (EtwpTrackProviderBinary.c)
 *     EtwpFlushTrace @ 0x1406DD6A4 (EtwpFlushTrace.c)
 *     EtwpLookupLoggerIdByName @ 0x1406DD8EC (EtwpLookupLoggerIdByName.c)
 *     EtwpStopTrace @ 0x1406DDFBC (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x1406DE1A0 (EtwpStartLogger.c)
 *     EtwpQueryTrace @ 0x1406DEE18 (EtwpQueryTrace.c)
 *     EtwpEnableGuid @ 0x1406E2404 (EtwpEnableGuid.c)
 *     EtwShutdown @ 0x140773FC0 (EtwShutdown.c)
 *     WmiQueryTraceInformation @ 0x140788A80 (WmiQueryTraceInformation.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x14078981C (EtwQueryTraceHandleByLoggerName.c)
 *     EtwpUpdateTrace @ 0x140796D68 (EtwpUpdateTrace.c)
 *     EtwpTracingProvEnableCallback @ 0x1407D5700 (EtwpTracingProvEnableCallback.c)
 *     EtwpUpdateDisallowList @ 0x1409343E0 (EtwpUpdateDisallowList.c)
 *     EtwpGetDisallowList @ 0x140934678 (EtwpGetDisallowList.c)
 *     EtwpIncrementTraceFile @ 0x140934BE4 (EtwpIncrementTraceFile.c)
 *     EtwpQueryReferenceTime @ 0x140934CD0 (EtwpQueryReferenceTime.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140937E6C (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x140938560 (EtwSetPerformanceTraceInformation.c)
 *     EtwRegisterEventCallback @ 0x14093CF20 (EtwRegisterEventCallback.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x14093D884 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x14093F664 (EtwpUpdatePeriodicCaptureState.c)
 *     SendCaptureStateNotificationsWorker @ 0x14093F940 (SendCaptureStateNotificationsWorker.c)
 *     EtwpSetProviderBinaryTracking @ 0x140940E40 (EtwpSetProviderBinaryTracking.c)
 *     AddDecodeGuidToSessions @ 0x140941B4C (AddDecodeGuidToSessions.c)
 *     EtwpGetSoftRestartInformation @ 0x140948574 (EtwpGetSoftRestartInformation.c)
 *     EtwpKsrCallback @ 0x140948720 (EtwpKsrCallback.c)
 *     EtwpSetSoftRestartInformation @ 0x140949350 (EtwpSetSoftRestartInformation.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140982BC0 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402EE5A0 (KeReleaseMutex.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140360770 (ExReleaseRundownProtectionCacheAwareEx.c)
 */

void __fastcall EtwpReleaseLoggerContext(unsigned int *a1, char a2)
{
  if ( a2 )
    KeReleaseMutex((PRKMUTEX)(a1 + 162), 0);
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a1 + 135) + 448LL) + 8LL * *a1),
    1u);
}
