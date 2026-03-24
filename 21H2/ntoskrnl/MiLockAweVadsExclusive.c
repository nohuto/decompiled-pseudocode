/*
 * XREFs of MiLockAweVadsExclusive @ 0x14054D000
 * Callers:
 *     MiFreePhysicalPages @ 0x14054BF44 (MiFreePhysicalPages.c)
 *     MiCloneVads @ 0x140559328 (MiCloneVads.c)
 *     MmSetGraphicsPtes @ 0x1408C6EB0 (MmSetGraphicsPtes.c)
 *     MiAweViewInserter @ 0x1408D56DC (MiAweViewInserter.c)
 *     MiCreateProcessDefaultAweInfo @ 0x1408D5AC0 (MiCreateProcessDefaultAweInfo.c)
 *     MiRemoveUserPhysicalPagesView @ 0x1408D644C (MiRemoveUserPhysicalPagesView.c)
 *     MiScrubProcessPhysicalPages @ 0x1408D6640 (MiScrubProcessPhysicalPages.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1402A2710 (ExAcquireAutoExpandPushLockExclusive.c)
 */

__int64 __fastcall MiLockAweVadsExclusive(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 1680LL);
  --*(_WORD *)(a1 + 486);
  return ExAcquireAutoExpandPushLockExclusive(v2 + 408, 0LL);
}
