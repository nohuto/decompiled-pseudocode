/*
 * XREFs of MiUnlockAwePagesExclusive @ 0x140548AD0
 * Callers:
 *     MiDeleteAweInfoPages @ 0x1408D288C (MiDeleteAweInfoPages.c)
 *     MiResizeAweBitMap @ 0x1408D2EE4 (MiResizeAweBitMap.c)
 *     MiScrubProcessPhysicalPages @ 0x1408D3040 (MiScrubProcessPhysicalPages.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140331DC0 (ExReleaseAutoExpandPushLockExclusive.c)
 */

__int64 __fastcall MiUnlockAwePagesExclusive(__int64 a1, __int64 a2)
{
  ExReleaseAutoExpandPushLockExclusive(a1 + 56, 0LL);
  return KiLeaveGuardedRegionUnsafe(a2);
}
