/*
 * XREFs of MiUnlockAweVadsExclusive @ 0x14054DFF8
 * Callers:
 *     MiFreePhysicalPages @ 0x14054BF44 (MiFreePhysicalPages.c)
 *     MiCloneVads @ 0x140559328 (MiCloneVads.c)
 *     MmSetGraphicsPtes @ 0x1408C6EB0 (MmSetGraphicsPtes.c)
 *     MiAweViewInserter @ 0x1408D56DC (MiAweViewInserter.c)
 *     MiCreateProcessDefaultAweInfo @ 0x1408D5AC0 (MiCreateProcessDefaultAweInfo.c)
 *     MiRemoveUserPhysicalPagesView @ 0x1408D644C (MiRemoveUserPhysicalPagesView.c)
 *     MiScrubProcessPhysicalPages @ 0x1408D6640 (MiScrubProcessPhysicalPages.c)
 * Callees:
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1402A22D0 (ExReleaseAutoExpandPushLockExclusive.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 */

char __fastcall MiUnlockAweVadsExclusive(__int64 a1)
{
  ExReleaseAutoExpandPushLockExclusive(*(_QWORD *)(*(_QWORD *)(a1 + 184) + 1680LL) + 408LL, 0LL);
  return KiLeaveGuardedRegionUnsafe(a1);
}
