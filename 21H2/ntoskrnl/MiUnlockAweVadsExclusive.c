/*
 * XREFs of MiUnlockAweVadsExclusive @ 0x14054E238
 * Callers:
 *     MiFreePhysicalPages @ 0x14054C184 (MiFreePhysicalPages.c)
 *     MiCloneVads @ 0x140559568 (MiCloneVads.c)
 *     MmSetGraphicsPtes @ 0x1408C7010 (MmSetGraphicsPtes.c)
 *     MiAweViewInserter @ 0x1408D583C (MiAweViewInserter.c)
 *     MiCreateProcessDefaultAweInfo @ 0x1408D5C20 (MiCreateProcessDefaultAweInfo.c)
 *     MiRemoveUserPhysicalPagesView @ 0x1408D65AC (MiRemoveUserPhysicalPagesView.c)
 *     MiScrubProcessPhysicalPages @ 0x1408D67A0 (MiScrubProcessPhysicalPages.c)
 * Callees:
 *     ExReleaseAutoExpandPushLockExclusive @ 0x14021F710 (ExReleaseAutoExpandPushLockExclusive.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 */

char __fastcall MiUnlockAweVadsExclusive(__int64 a1)
{
  ExReleaseAutoExpandPushLockExclusive(*(_QWORD *)(*(_QWORD *)(a1 + 184) + 1680LL) + 408LL, 0LL);
  return KiLeaveGuardedRegionUnsafe(a1);
}
