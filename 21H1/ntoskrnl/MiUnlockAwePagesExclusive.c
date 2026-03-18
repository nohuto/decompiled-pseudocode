/*
 * XREFs of MiUnlockAwePagesExclusive @ 0x140548480
 * Callers:
 *     MiDeleteAweInfoPages @ 0x1408D153C (MiDeleteAweInfoPages.c)
 *     MiResizeAweBitMap @ 0x1408D1B94 (MiResizeAweBitMap.c)
 *     MiScrubProcessPhysicalPages @ 0x1408D1CF0 (MiScrubProcessPhysicalPages.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1402F5090 (ExReleaseAutoExpandPushLockExclusive.c)
 */

__int64 __fastcall MiUnlockAwePagesExclusive(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  ExReleaseAutoExpandPushLockExclusive(a1 + 56, 0LL);
  return KiLeaveGuardedRegionUnsafe(a2, v3, v4, v5);
}
