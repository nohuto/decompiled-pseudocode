/*
 * XREFs of VrpRelinquishDiffHiveEntryTransitionOwner @ 0x1405CBC04
 * Callers:
 *     VrpLoadDifferencingHive @ 0x1405CB488 (VrpLoadDifferencingHive.c)
 *     VrpUnloadDifferencingHive @ 0x1405CB8A8 (VrpUnloadDifferencingHive.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     KeWakeWaitChain @ 0x140308D4C (KeWakeWaitChain.c)
 */

_QWORD *__fastcall VrpRelinquishDiffHiveEntryTransitionOwner(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  ULONG_PTR v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  v4 = a1 + 40;
  *(_QWORD *)(a1 + 40) = 0LL;
  KeWakeWaitChain((__int64 **)(a1 + 48), 0LL, 0LL, a4);
  KeAbPostRelease(v4);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v5, v6, v7);
}
