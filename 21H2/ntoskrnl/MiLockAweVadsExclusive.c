/*
 * XREFs of MiLockAweVadsExclusive @ 0x14054D240
 * Callers:
 *     MiFreePhysicalPages @ 0x14054C184 (MiFreePhysicalPages.c)
 *     MiCloneVads @ 0x140559568 (MiCloneVads.c)
 *     MmSetGraphicsPtes @ 0x1408C7010 (MmSetGraphicsPtes.c)
 *     MiAweViewInserter @ 0x1408D583C (MiAweViewInserter.c)
 *     MiCreateProcessDefaultAweInfo @ 0x1408D5C20 (MiCreateProcessDefaultAweInfo.c)
 *     MiRemoveUserPhysicalPagesView @ 0x1408D65AC (MiRemoveUserPhysicalPagesView.c)
 *     MiScrubProcessPhysicalPages @ 0x1408D67A0 (MiScrubProcessPhysicalPages.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x14021FB50 (ExAcquireAutoExpandPushLockExclusive.c)
 */

__int64 __fastcall MiLockAweVadsExclusive(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 1680LL);
  --*(_WORD *)(a1 + 486);
  return ExAcquireAutoExpandPushLockExclusive(v2 + 408, 0LL);
}
