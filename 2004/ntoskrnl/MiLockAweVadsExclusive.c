/*
 * XREFs of MiLockAweVadsExclusive @ 0x140547B30
 * Callers:
 *     MiFreePhysicalPages @ 0x140546A74 (MiFreePhysicalPages.c)
 *     MiCloneVads @ 0x140553E88 (MiCloneVads.c)
 *     MmSetGraphicsPtes @ 0x1408C38B0 (MmSetGraphicsPtes.c)
 *     MiAweViewInserter @ 0x1408D20DC (MiAweViewInserter.c)
 *     MiCreateProcessDefaultAweInfo @ 0x1408D24C0 (MiCreateProcessDefaultAweInfo.c)
 *     MiRemoveUserPhysicalPagesView @ 0x1408D2E4C (MiRemoveUserPhysicalPagesView.c)
 *     MiScrubProcessPhysicalPages @ 0x1408D3040 (MiScrubProcessPhysicalPages.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140332ED0 (ExAcquireAutoExpandPushLockExclusive.c)
 */

__int64 __fastcall MiLockAweVadsExclusive(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 1680LL);
  --*(_WORD *)(a1 + 486);
  return ExAcquireAutoExpandPushLockExclusive(v2 + 408, 0LL);
}
