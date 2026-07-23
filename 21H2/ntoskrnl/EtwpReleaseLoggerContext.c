/*
 * XREFs of EtwpReleaseLoggerContext @ 0x140638848
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x140253CD0 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpTransitionToRealtime @ 0x1403F91C4 (EtwpTransitionToRealtime.c)
 *     EtwpGetCompressionSettings @ 0x1405AD5C4 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x1405ADA94 (EtwpSetCompressionSettings.c)
 *     EtwpRealtimeConnect @ 0x140617EC8 (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x1406182F8 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpTrackProviderBinary @ 0x14061ED28 (EtwpTrackProviderBinary.c)
 *     EtwpTrackProviderRegistration @ 0x140637C90 (EtwpTrackProviderRegistration.c)
 *     EtwpUpdateEnableMask @ 0x140637DA8 (EtwpUpdateEnableMask.c)
 *     EtwpAddRegEntryToGroup @ 0x140638390 (EtwpAddRegEntryToGroup.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140638894 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpFlushTrace @ 0x1406B4984 (EtwpFlushTrace.c)
 *     EtwpLookupLoggerIdByName @ 0x1406B4BCC (EtwpLookupLoggerIdByName.c)
 *     EtwpStopTrace @ 0x1406B529C (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x1406B5480 (EtwpStartLogger.c)
 *     EtwpQueryTrace @ 0x1406B60F8 (EtwpQueryTrace.c)
 *     EtwpEnableGuid @ 0x1406B96E4 (EtwpEnableGuid.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1406F1C28 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwShutdown @ 0x140774180 (EtwShutdown.c)
 *     WmiQueryTraceInformation @ 0x140788C40 (WmiQueryTraceInformation.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x1407899DC (EtwQueryTraceHandleByLoggerName.c)
 *     EtwpUpdateTrace @ 0x140796F68 (EtwpUpdateTrace.c)
 *     EtwpTracingProvEnableCallback @ 0x1407D5870 (EtwpTracingProvEnableCallback.c)
 *     EtwpUpdateDisallowList @ 0x1409345B0 (EtwpUpdateDisallowList.c)
 *     EtwpGetDisallowList @ 0x140934848 (EtwpGetDisallowList.c)
 *     EtwpIncrementTraceFile @ 0x140934DB4 (EtwpIncrementTraceFile.c)
 *     EtwpQueryReferenceTime @ 0x140934EA0 (EtwpQueryReferenceTime.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14093803C (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x140938730 (EtwSetPerformanceTraceInformation.c)
 *     EtwRegisterEventCallback @ 0x14093D0F0 (EtwRegisterEventCallback.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x14093DA54 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x14093F834 (EtwpUpdatePeriodicCaptureState.c)
 *     SendCaptureStateNotificationsWorker @ 0x14093FB10 (SendCaptureStateNotificationsWorker.c)
 *     EtwpSetProviderBinaryTracking @ 0x140941010 (EtwpSetProviderBinaryTracking.c)
 *     AddDecodeGuidToSessions @ 0x140941D1C (AddDecodeGuidToSessions.c)
 *     EtwpGetSoftRestartInformation @ 0x140948744 (EtwpGetSoftRestartInformation.c)
 *     EtwpKsrCallback @ 0x1409488F0 (EtwpKsrCallback.c)
 *     EtwpSetSoftRestartInformation @ 0x140949520 (EtwpSetSoftRestartInformation.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140982DA0 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402A5670 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeReleaseMutex @ 0x1402F92F0 (KeReleaseMutex.c)
 */

void __fastcall EtwpReleaseLoggerContext(unsigned int *a1, char a2)
{
  if ( a2 )
    KeReleaseMutex((PRKMUTEX)(a1 + 162), 0);
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a1 + 135) + 448LL) + 8LL * *a1),
    1u);
}
