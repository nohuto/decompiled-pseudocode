/*
 * XREFs of VrpRelinquishDiffHiveEntryTransitionOwner @ 0x1405D3634
 * Callers:
 *     VrpLoadDifferencingHive @ 0x1405D2EB8 (VrpLoadDifferencingHive.c)
 *     VrpUnloadDifferencingHive @ 0x1405D32D8 (VrpUnloadDifferencingHive.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     KeWakeWaitChain @ 0x140318018 (KeWakeWaitChain.c)
 */

_QWORD *__fastcall VrpRelinquishDiffHiveEntryTransitionOwner(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  ULONG_PTR v4; // rbx

  v4 = a1 + 40;
  *(_QWORD *)(a1 + 40) = 0LL;
  KeWakeWaitChain((__int64 **)(a1 + 48), 0LL, 0LL, a4);
  KeAbPostRelease(v4);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
