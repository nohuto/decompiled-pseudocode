/*
 * XREFs of PsSetCurrentThreadPrefetching @ 0x140639F10
 * Callers:
 *     PfpPrefetchSharedCleanup @ 0x1405D3178 (PfpPrefetchSharedCleanup.c)
 *     PfpPrefetchSharedStart @ 0x1405D33F0 (PfpPrefetchSharedStart.c)
 *     PfSnSectionInfoCleanupWorkItem @ 0x140639960 (PfSnSectionInfoCleanupWorkItem.c)
 *     PfSnPopulateReadList @ 0x140639A20 (PfSnPopulateReadList.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 */

BOOLEAN __stdcall PsSetCurrentThreadPrefetching(BOOLEAN Prefetching)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  struct _KTHREAD *CurrentThread; // rcx
  char Queue; // bl

  LOBYTE(v1) = Prefetching;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  Queue = (char)CurrentThread[1].Queue;
  LOBYTE(v1) = Queue ^ (Queue ^ ((_BYTE)v1 << 6)) & 0x40;
  LOBYTE(CurrentThread[1].Queue) = v1;
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v1, v2, v3);
  return (Queue & 0x40) != 0;
}
