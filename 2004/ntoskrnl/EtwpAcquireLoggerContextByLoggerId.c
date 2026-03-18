/*
 * XREFs of EtwpAcquireLoggerContextByLoggerId @ 0x14066BA28
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x14027E6F8 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpGetCompressionSettings @ 0x1405A7E34 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x1405A8304 (EtwpSetCompressionSettings.c)
 *     EtwpValidateEnableNotification @ 0x140636024 (EtwpValidateEnableNotification.c)
 *     EtwpAcquireLoggerContext @ 0x1406453F0 (EtwpAcquireLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x140645544 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpAddRegEntryToGroup @ 0x14066BC00 (EtwpAddRegEntryToGroup.c)
 *     EtwpTrackProviderRegistration @ 0x14066DEF0 (EtwpTrackProviderRegistration.c)
 *     EtwpRealtimeConnect @ 0x1406C6788 (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x1406C6BB8 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpUpdateEnableMask @ 0x1406C6D30 (EtwpUpdateEnableMask.c)
 *     EtwpLookupLoggerIdByName @ 0x1406C7980 (EtwpLookupLoggerIdByName.c)
 *     EtwpStartLogger @ 0x1406C7A14 (EtwpStartLogger.c)
 *     EtwpTrackProviderBinary @ 0x14070D9A8 (EtwpTrackProviderBinary.c)
 *     EtwShutdown @ 0x140761AE0 (EtwShutdown.c)
 *     WmiQueryTraceInformation @ 0x1407766A0 (WmiQueryTraceInformation.c)
 *     EtwpTracingProvEnableCallback @ 0x1407C2A80 (EtwpTracingProvEnableCallback.c)
 *     EtwpUpdateDisallowList @ 0x140930DE0 (EtwpUpdateDisallowList.c)
 *     EtwpGetDisallowList @ 0x140931078 (EtwpGetDisallowList.c)
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
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1402FEF90 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140311DB0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpReleaseLoggerContext @ 0x14066BAFC (EtwpReleaseLoggerContext.c)
 */

__int64 __fastcall EtwpAcquireLoggerContextByLoggerId(__int64 a1, unsigned int a2, char a3)
{
  __int64 v4; // rbx
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rbx

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
    v9 = 1LL;
  }
  else
  {
    _mm_lfence();
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 456) + 8 * v4);
  }
  if ( (v9 & 1) != 0 )
  {
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 448) + 8 * v6), 1u);
    return 0LL;
  }
  if ( a3 )
    KeWaitForSingleObject((PVOID)(v9 + 648), Executive, 0, 0, 0LL);
  if ( !*(_DWORD *)(v9 + 336) )
  {
    LOBYTE(v8) = a3;
    EtwpReleaseLoggerContext(v9, v8);
    return 0LL;
  }
  return v9;
}
