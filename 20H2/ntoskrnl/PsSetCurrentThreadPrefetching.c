/*
 * XREFs of PsSetCurrentThreadPrefetching @ 0x140633FF0
 * Callers:
 *     PfSnSectionInfoCleanupWorkItem @ 0x140633A40 (PfSnSectionInfoCleanupWorkItem.c)
 *     PfSnPopulateReadList @ 0x140633B00 (PfSnPopulateReadList.c)
 *     PfpPrefetchSharedStart @ 0x1406E74A0 (PfpPrefetchSharedStart.c)
 *     PfpPrefetchSharedCleanup @ 0x1406F2628 (PfpPrefetchSharedCleanup.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 */

BOOLEAN __stdcall PsSetCurrentThreadPrefetching(BOOLEAN Prefetching)
{
  struct _KTHREAD *CurrentThread; // rcx
  char Queue; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  Queue = (char)CurrentThread[1].Queue;
  LOBYTE(CurrentThread[1].Queue) = Queue ^ (Queue ^ (Prefetching << 6)) & 0x40;
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return (Queue & 0x40) != 0;
}
