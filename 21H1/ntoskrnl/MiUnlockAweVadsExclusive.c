/*
 * XREFs of MiUnlockAweVadsExclusive @ 0x1405484D8
 * Callers:
 *     MiFreePhysicalPages @ 0x140546424 (MiFreePhysicalPages.c)
 *     MiCloneVads @ 0x140553838 (MiCloneVads.c)
 *     MmSetGraphicsPtes @ 0x1408C2560 (MmSetGraphicsPtes.c)
 *     MiAweViewInserter @ 0x1408D0D8C (MiAweViewInserter.c)
 *     MiCreateProcessDefaultAweInfo @ 0x1408D1170 (MiCreateProcessDefaultAweInfo.c)
 *     MiRemoveUserPhysicalPagesView @ 0x1408D1AFC (MiRemoveUserPhysicalPagesView.c)
 *     MiScrubProcessPhysicalPages @ 0x1408D1CF0 (MiScrubProcessPhysicalPages.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1402F5090 (ExReleaseAutoExpandPushLockExclusive.c)
 */

__int64 __fastcall MiUnlockAweVadsExclusive(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  ExReleaseAutoExpandPushLockExclusive(*(_QWORD *)(*(_QWORD *)(a1 + 184) + 1680LL) + 408LL, 0LL);
  return KiLeaveGuardedRegionUnsafe(a1, v2, v3, v4);
}
