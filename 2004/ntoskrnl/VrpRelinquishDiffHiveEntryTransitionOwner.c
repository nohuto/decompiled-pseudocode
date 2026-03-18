/*
 * XREFs of VrpRelinquishDiffHiveEntryTransitionOwner @ 0x1405CCFD4
 * Callers:
 *     VrpLoadDifferencingHive @ 0x1405CC858 (VrpLoadDifferencingHive.c)
 *     VrpUnloadDifferencingHive @ 0x1405CCC78 (VrpUnloadDifferencingHive.c)
 * Callees:
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     KeWakeWaitChain @ 0x140346B4C (KeWakeWaitChain.c)
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
