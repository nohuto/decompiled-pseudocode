/*
 * XREFs of PopPowerAggregatorActiveToScreenOffStateHandler @ 0x1408EAAF0
 * Callers:
 *     PopPowerAggregatorInvokeStateMachine @ 0x140763BE8 (PopPowerAggregatorInvokeStateMachine.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
 *     PopGetMonitorReasonFromPowerEventId @ 0x140380680 (PopGetMonitorReasonFromPowerEventId.c)
 *     PopThermalCsEntry @ 0x14056A330 (PopThermalCsEntry.c)
 *     PopPowerAggregatorStartNextSession @ 0x1407626E4 (PopPowerAggregatorStartNextSession.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140763A88 (PopPowerAggregatorSetCurrentState.c)
 *     PopTransitionTelemetryOsState @ 0x140786610 (PopTransitionTelemetryOsState.c)
 */

__int64 __fastcall PopPowerAggregatorActiveToScreenOffStateHandler(__int64 a1)
{
  int MonitorReasonFromPowerEventId; // eax
  _DWORD v4[10]; // [rsp+20h] [rbp-28h] BYREF

  memset(v4, 0, 32);
  v4[0] = 3;
  PopPowerAggregatorSetCurrentState(a1, (__int64)v4);
  PopPowerAggregatorStartNextSession(1u, *(_DWORD *)(a1 + 32));
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
  PopTransitionTelemetryOsState(3, 6);
  MonitorReasonFromPowerEventId = PopGetMonitorReasonFromPowerEventId(*(_DWORD *)(a1 + 32));
  PopThermalCsEntry(MonitorReasonFromPowerEventId == 23);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  return 0LL;
}
