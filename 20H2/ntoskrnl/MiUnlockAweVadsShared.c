/*
 * XREFs of MiUnlockAweVadsShared @ 0x14054C4CC
 * Callers:
 *     MiLockAweVadsShared @ 0x14054B538 (MiLockAweVadsShared.c)
 *     MiProtectAweRegion @ 0x14054B864 (MiProtectAweRegion.c)
 *     MiAllocateUserPhysicalPages @ 0x1408D7528 (MiAllocateUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x1408D9520 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1408D97E0 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x1402F1310 (ExReleaseAutoExpandPushLockShared.c)
 */

__int64 __fastcall MiUnlockAweVadsShared(__int64 a1, ULONG_PTR a2)
{
  ExReleaseAutoExpandPushLockShared(a2, 0LL);
  return KiLeaveGuardedRegionUnsafe(a1);
}
