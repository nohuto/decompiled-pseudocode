/*
 * XREFs of MiLockAweVadsExclusive @ 0x14054B500
 * Callers:
 *     MiFreePhysicalPages @ 0x14054A444 (MiFreePhysicalPages.c)
 *     MiCloneVads @ 0x140557858 (MiCloneVads.c)
 *     MmSetGraphicsPtes @ 0x1408C96F0 (MmSetGraphicsPtes.c)
 *     MiAweViewInserter @ 0x1408D7F1C (MiAweViewInserter.c)
 *     MiCreateProcessDefaultAweInfo @ 0x1408D8300 (MiCreateProcessDefaultAweInfo.c)
 *     MiRemoveUserPhysicalPagesView @ 0x1408D8C8C (MiRemoveUserPhysicalPagesView.c)
 *     MiScrubProcessPhysicalPages @ 0x1408D8E80 (MiScrubProcessPhysicalPages.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1403060F0 (ExAcquireAutoExpandPushLockExclusive.c)
 */

__int64 __fastcall MiLockAweVadsExclusive(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 1680LL);
  --*(_WORD *)(a1 + 486);
  return ExAcquireAutoExpandPushLockExclusive(v2 + 408, 0LL);
}
