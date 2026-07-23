/*
 * XREFs of MiUnlockAwePagesExclusive @ 0x14054E1E0
 * Callers:
 *     MiDeleteAweInfoPages @ 0x1408D5FEC (MiDeleteAweInfoPages.c)
 *     MiResizeAweBitMap @ 0x1408D6644 (MiResizeAweBitMap.c)
 *     MiScrubProcessPhysicalPages @ 0x1408D67A0 (MiScrubProcessPhysicalPages.c)
 * Callees:
 *     ExReleaseAutoExpandPushLockExclusive @ 0x14021F710 (ExReleaseAutoExpandPushLockExclusive.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 */

char __fastcall MiUnlockAwePagesExclusive(__int64 a1, __int64 a2)
{
  ExReleaseAutoExpandPushLockExclusive(a1 + 56, 0LL);
  return KiLeaveGuardedRegionUnsafe(a2);
}
