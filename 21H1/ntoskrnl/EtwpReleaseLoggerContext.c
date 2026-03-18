/*
 * XREFs of EtwpReleaseLoggerContext @ 0x1405F3C38
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x140241960 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpTransitionToRealtime @ 0x1403F16C0 (EtwpTransitionToRealtime.c)
 *     EtwpGetCompressionSettings @ 0x1405A7744 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x1405A7C14 (EtwpSetCompressionSettings.c)
 *     EtwpUpdateEnableMask @ 0x1405F26BC (EtwpUpdateEnableMask.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405F3B64 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpAddRegEntryToGroup @ 0x1405F4850 (EtwpAddRegEntryToGroup.c)
 *     EtwpTrackProviderRegistration @ 0x1405F4E80 (EtwpTrackProviderRegistration.c)
 *     EtwpRealtimeConnect @ 0x140677318 (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x140677748 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpFlushTrace @ 0x140678E30 (EtwpFlushTrace.c)
 *     EtwpLookupLoggerIdByName @ 0x140679038 (EtwpLookupLoggerIdByName.c)
 *     EtwpStopTrace @ 0x1406796F8 (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x1406798DC (EtwpStartLogger.c)
 *     EtwpQueryTrace @ 0x14067A554 (EtwpQueryTrace.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x14067A780 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpEnableGuid @ 0x14067E254 (EtwpEnableGuid.c)
 *     EtwpTrackProviderBinary @ 0x1406E9B78 (EtwpTrackProviderBinary.c)
 *     EtwShutdown @ 0x140760200 (EtwShutdown.c)
 *     WmiQueryTraceInformation @ 0x140774290 (WmiQueryTraceInformation.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x14077502C (EtwQueryTraceHandleByLoggerName.c)
 *     EtwpUpdateTrace @ 0x14077FAB8 (EtwpUpdateTrace.c)
 *     EtwpTracingProvEnableCallback @ 0x1407BF520 (EtwpTracingProvEnableCallback.c)
 *     EtwpUpdateDisallowList @ 0x14092FB30 (EtwpUpdateDisallowList.c)
 *     EtwpGetDisallowList @ 0x14092FDC8 (EtwpGetDisallowList.c)
 *     EtwpIncrementTraceFile @ 0x140930334 (EtwpIncrementTraceFile.c)
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
 *     KeReleaseMutex @ 0x1402486F0 (KeReleaseMutex.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402E5060 (ExReleaseRundownProtectionCacheAwareEx.c)
 */

void __fastcall EtwpReleaseLoggerContext(unsigned int *a1, char a2)
{
  if ( a2 )
    KeReleaseMutex((PRKMUTEX)(a1 + 162), 0);
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a1 + 139) + 448LL) + 8LL * *a1),
    1u);
}
