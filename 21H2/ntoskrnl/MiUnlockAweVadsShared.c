/*
 * XREFs of MiUnlockAweVadsShared @ 0x14054E20C
 * Callers:
 *     MiLockAweVadsShared @ 0x14054D278 (MiLockAweVadsShared.c)
 *     MiProtectAweRegion @ 0x14054D5A4 (MiProtectAweRegion.c)
 *     MiAllocateUserPhysicalPages @ 0x1408D4E48 (MiAllocateUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x1408D6E40 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1408D7100 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     ExReleaseAutoExpandPushLockShared @ 0x14020E2E0 (ExReleaseAutoExpandPushLockShared.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 */

char __fastcall MiUnlockAweVadsShared(__int64 a1, ULONG_PTR a2)
{
  ExReleaseAutoExpandPushLockShared(a2, 0LL);
  return KiLeaveGuardedRegionUnsafe(a1);
}
