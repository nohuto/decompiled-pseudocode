/*
 * XREFs of MiLockAweVadsExclusive @ 0x1405AB9B8
 * Callers:
 *     MiFreePhysicalPages @ 0x1405AAA4C (MiFreePhysicalPages.c)
 *     MiCloneVads @ 0x1405B99AC (MiCloneVads.c)
 *     MmSetGraphicsPtes @ 0x14096B560 (MmSetGraphicsPtes.c)
 *     MiAweViewInserter @ 0x14097C814 (MiAweViewInserter.c)
 *     MiCreateProcessDefaultAweInfo @ 0x14097CC1C (MiCreateProcessDefaultAweInfo.c)
 *     MiRemoveUserPhysicalPagesView @ 0x14097D5F0 (MiRemoveUserPhysicalPagesView.c)
 *     MiScrubProcessPhysicalPages @ 0x14097D7F8 (MiScrubProcessPhysicalPages.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1402A3C30 (ExAcquireAutoExpandPushLockExclusive.c)
 */

__int64 __fastcall MiLockAweVadsExclusive(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 1680LL);
  --*(_WORD *)(a1 + 486);
  return ExAcquireAutoExpandPushLockExclusive(v2 + 392, 0LL);
}
