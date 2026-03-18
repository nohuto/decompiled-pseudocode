/*
 * XREFs of PopPowerAggregatorScreenOffActiveToActiveStateHandler @ 0x1408F0FA0
 * Callers:
 *     PopPowerAggregatorInvokeStateMachine @ 0x1407721F8 (PopPowerAggregatorInvokeStateMachine.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140772098 (PopPowerAggregatorSetCurrentState.c)
 *     PopPowerAggregatorNotifyCsStateExited @ 0x1408F0DF0 (PopPowerAggregatorNotifyCsStateExited.c)
 */

__int64 __fastcall PopPowerAggregatorScreenOffActiveToActiveStateHandler(__int64 a1)
{
  _DWORD v2[10]; // [rsp+20h] [rbp-28h] BYREF

  memset(v2, 0, 32);
  v2[0] = 2;
  PopPowerAggregatorSetCurrentState(a1, (__int64)v2);
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
  PopPowerAggregatorNotifyCsStateExited();
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  return 0LL;
}
