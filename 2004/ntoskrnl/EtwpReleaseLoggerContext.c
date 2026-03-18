/*
 * XREFs of EtwpReleaseLoggerContext @ 0x14066BAFC
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x14027E6F8 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpTransitionToRealtime @ 0x1403F2950 (EtwpTransitionToRealtime.c)
 *     EtwpGetCompressionSettings @ 0x1405A7E34 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x1405A8304 (EtwpSetCompressionSettings.c)
 *     EtwpEnableGuid @ 0x140635748 (EtwpEnableGuid.c)
 *     EtwpQueryTrace @ 0x140645318 (EtwpQueryTrace.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x140645544 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14066BA28 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpAddRegEntryToGroup @ 0x14066BC00 (EtwpAddRegEntryToGroup.c)
 *     EtwpTrackProviderRegistration @ 0x14066DEF0 (EtwpTrackProviderRegistration.c)
 *     EtwpFlushTrace @ 0x1406C65C8 (EtwpFlushTrace.c)
 *     EtwpRealtimeConnect @ 0x1406C6788 (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x1406C6BB8 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpUpdateEnableMask @ 0x1406C6D30 (EtwpUpdateEnableMask.c)
 *     EtwpStopTrace @ 0x1406C75AC (EtwpStopTrace.c)
 *     EtwpLookupLoggerIdByName @ 0x1406C7980 (EtwpLookupLoggerIdByName.c)
 *     EtwpStartLogger @ 0x1406C7A14 (EtwpStartLogger.c)
 *     EtwpTrackProviderBinary @ 0x14070D9A8 (EtwpTrackProviderBinary.c)
 *     EtwShutdown @ 0x140761AE0 (EtwShutdown.c)
 *     WmiQueryTraceInformation @ 0x1407766A0 (WmiQueryTraceInformation.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x14077743C (EtwQueryTraceHandleByLoggerName.c)
 *     EtwpUpdateTrace @ 0x140780C28 (EtwpUpdateTrace.c)
 *     EtwpTracingProvEnableCallback @ 0x1407C2A80 (EtwpTracingProvEnableCallback.c)
 *     EtwpUpdateDisallowList @ 0x140930DE0 (EtwpUpdateDisallowList.c)
 *     EtwpGetDisallowList @ 0x140931078 (EtwpGetDisallowList.c)
 *     EtwpIncrementTraceFile @ 0x1409315E4 (EtwpIncrementTraceFile.c)
 *     EtwpQueryReferenceTime @ 0x1409316D0 (EtwpQueryReferenceTime.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14093486C (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x140934F60 (EtwSetPerformanceTraceInformation.c)
 *     EtwRegisterEventCallback @ 0x140939920 (EtwRegisterEventCallback.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x14093A280 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x14093C064 (EtwpUpdatePeriodicCaptureState.c)
 *     SendCaptureStateNotificationsWorker @ 0x14093C340 (SendCaptureStateNotificationsWorker.c)
 *     EtwpSetProviderBinaryTracking @ 0x14093D8B0 (EtwpSetProviderBinaryTracking.c)
 *     AddDecodeGuidToSessions @ 0x14093E5BC (AddDecodeGuidToSessions.c)
 *     EtwpGetSoftRestartInformation @ 0x140944FE4 (EtwpGetSoftRestartInformation.c)
 *     EtwpKsrCallback @ 0x140945190 (EtwpKsrCallback.c)
 *     EtwpSetSoftRestartInformation @ 0x140945DC4 (EtwpSetSoftRestartInformation.c)
 *     EtwpEventTracingCounterSetCallback @ 0x14097F6D0 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     KeReleaseMutex @ 0x140284E90 (KeReleaseMutex.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140311DB0 (ExReleaseRundownProtectionCacheAwareEx.c)
 */

void __fastcall EtwpReleaseLoggerContext(unsigned int *a1, char a2)
{
  if ( a2 )
    KeReleaseMutex((PRKMUTEX)(a1 + 162), 0);
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a1 + 139) + 448LL) + 8LL * *a1),
    1u);
}
