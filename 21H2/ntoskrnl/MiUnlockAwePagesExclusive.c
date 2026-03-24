/*
 * XREFs of MiUnlockAwePagesExclusive @ 0x14054DFA0
 * Callers:
 *     MiDeleteAweInfoPages @ 0x1408D5E8C (MiDeleteAweInfoPages.c)
 *     MiResizeAweBitMap @ 0x1408D64E4 (MiResizeAweBitMap.c)
 *     MiScrubProcessPhysicalPages @ 0x1408D6640 (MiScrubProcessPhysicalPages.c)
 * Callees:
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1402A22D0 (ExReleaseAutoExpandPushLockExclusive.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 */

char __fastcall MiUnlockAwePagesExclusive(__int64 a1, __int64 a2)
{
  ExReleaseAutoExpandPushLockExclusive(a1 + 56, 0LL);
  return KiLeaveGuardedRegionUnsafe(a2);
}
