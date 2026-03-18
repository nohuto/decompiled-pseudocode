/*
 * XREFs of PopPowerAggregatorActiveToScreenOffStateHandler @ 0x1408E9870
 * Callers:
 *     PopPowerAggregatorInvokeStateMachine @ 0x140762308 (PopPowerAggregatorInvokeStateMachine.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
 *     PopGetMonitorReasonFromPowerEventId @ 0x14037FE40 (PopGetMonitorReasonFromPowerEventId.c)
 *     PopThermalCsEntry @ 0x140569CE0 (PopThermalCsEntry.c)
 *     PopPowerAggregatorStartNextSession @ 0x140760E04 (PopPowerAggregatorStartNextSession.c)
 *     PopPowerAggregatorSetCurrentState @ 0x1407621A8 (PopPowerAggregatorSetCurrentState.c)
 *     PopTransitionTelemetryOsState @ 0x140780F84 (PopTransitionTelemetryOsState.c)
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
