/*
 * XREFs of PopPowerAggregatorScreenOffActiveToActiveStateHandler @ 0x1408EA110
 * Callers:
 *     PopPowerAggregatorInvokeStateMachine @ 0x140762308 (PopPowerAggregatorInvokeStateMachine.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorSetCurrentState @ 0x1407621A8 (PopPowerAggregatorSetCurrentState.c)
 *     PopPowerAggregatorNotifyCsStateExited @ 0x1408E9F60 (PopPowerAggregatorNotifyCsStateExited.c)
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
