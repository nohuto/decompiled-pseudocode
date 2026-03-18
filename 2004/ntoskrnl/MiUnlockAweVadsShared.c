/*
 * XREFs of MiUnlockAweVadsShared @ 0x140548AFC
 * Callers:
 *     MiLockAweVadsShared @ 0x140547B68 (MiLockAweVadsShared.c)
 *     MiProtectAweRegion @ 0x140547E94 (MiProtectAweRegion.c)
 *     MiAllocateUserPhysicalPages @ 0x1408D16E8 (MiAllocateUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x1408D36E0 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1408D39A0 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x140324140 (ExReleaseAutoExpandPushLockShared.c)
 */

__int64 __fastcall MiUnlockAweVadsShared(__int64 a1, ULONG_PTR a2)
{
  ExReleaseAutoExpandPushLockShared(a2, 0LL);
  return KiLeaveGuardedRegionUnsafe(a1);
}
