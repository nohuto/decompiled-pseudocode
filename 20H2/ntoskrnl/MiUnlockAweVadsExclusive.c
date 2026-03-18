/*
 * XREFs of MiUnlockAweVadsExclusive @ 0x14054C4F8
 * Callers:
 *     MiFreePhysicalPages @ 0x14054A444 (MiFreePhysicalPages.c)
 *     MiCloneVads @ 0x140557858 (MiCloneVads.c)
 *     MmSetGraphicsPtes @ 0x1408C96F0 (MmSetGraphicsPtes.c)
 *     MiAweViewInserter @ 0x1408D7F1C (MiAweViewInserter.c)
 *     MiCreateProcessDefaultAweInfo @ 0x1408D8300 (MiCreateProcessDefaultAweInfo.c)
 *     MiRemoveUserPhysicalPagesView @ 0x1408D8C8C (MiRemoveUserPhysicalPagesView.c)
 *     MiScrubProcessPhysicalPages @ 0x1408D8E80 (MiScrubProcessPhysicalPages.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1403052B0 (ExReleaseAutoExpandPushLockExclusive.c)
 */

__int64 __fastcall MiUnlockAweVadsExclusive(__int64 a1)
{
  ExReleaseAutoExpandPushLockExclusive(*(_QWORD *)(*(_QWORD *)(a1 + 184) + 1680LL) + 408LL, 0LL);
  return KiLeaveGuardedRegionUnsafe(a1);
}
