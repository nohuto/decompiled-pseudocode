/*
 * XREFs of PopPowerAggregatorActiveToScreenOffStateHandler @ 0x1408F0700
 * Callers:
 *     PopPowerAggregatorInvokeStateMachine @ 0x1407721F8 (PopPowerAggregatorInvokeStateMachine.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 *     PopGetMonitorReasonFromPowerEventId @ 0x140382440 (PopGetMonitorReasonFromPowerEventId.c)
 *     PopThermalCsEntry @ 0x14056DD60 (PopThermalCsEntry.c)
 *     PopPowerAggregatorStartNextSession @ 0x140770CF4 (PopPowerAggregatorStartNextSession.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140772098 (PopPowerAggregatorSetCurrentState.c)
 *     PopTransitionTelemetryOsState @ 0x140794320 (PopTransitionTelemetryOsState.c)
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
