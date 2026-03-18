/*
 * XREFs of MiUnlockAwePagesExclusive @ 0x14054C4A0
 * Callers:
 *     MiDeleteAweInfoPages @ 0x1408D86CC (MiDeleteAweInfoPages.c)
 *     MiResizeAweBitMap @ 0x1408D8D24 (MiResizeAweBitMap.c)
 *     MiScrubProcessPhysicalPages @ 0x1408D8E80 (MiScrubProcessPhysicalPages.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1403052B0 (ExReleaseAutoExpandPushLockExclusive.c)
 */

__int64 __fastcall MiUnlockAwePagesExclusive(__int64 a1, __int64 a2)
{
  ExReleaseAutoExpandPushLockExclusive(a1 + 56, 0LL);
  return KiLeaveGuardedRegionUnsafe(a2);
}
