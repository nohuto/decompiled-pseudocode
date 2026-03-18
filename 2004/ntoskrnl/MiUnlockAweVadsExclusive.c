/*
 * XREFs of MiUnlockAweVadsExclusive @ 0x140548B28
 * Callers:
 *     MiFreePhysicalPages @ 0x140546A74 (MiFreePhysicalPages.c)
 *     MiCloneVads @ 0x140553E88 (MiCloneVads.c)
 *     MmSetGraphicsPtes @ 0x1408C38B0 (MmSetGraphicsPtes.c)
 *     MiAweViewInserter @ 0x1408D20DC (MiAweViewInserter.c)
 *     MiCreateProcessDefaultAweInfo @ 0x1408D24C0 (MiCreateProcessDefaultAweInfo.c)
 *     MiRemoveUserPhysicalPagesView @ 0x1408D2E4C (MiRemoveUserPhysicalPagesView.c)
 *     MiScrubProcessPhysicalPages @ 0x1408D3040 (MiScrubProcessPhysicalPages.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140331DC0 (ExReleaseAutoExpandPushLockExclusive.c)
 */

__int64 __fastcall MiUnlockAweVadsExclusive(__int64 a1)
{
  ExReleaseAutoExpandPushLockExclusive(*(_QWORD *)(*(_QWORD *)(a1 + 184) + 1680LL) + 408LL, 0LL);
  return KiLeaveGuardedRegionUnsafe(a1);
}
