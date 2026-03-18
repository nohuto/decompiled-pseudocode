/*
 * XREFs of MiPrefetchNormally @ 0x1403328A4
 * Callers:
 *     MiPfPutPagesInTransition @ 0x14024CE50 (MiPfPutPagesInTransition.c)
 *     MiPfPrepareReadList @ 0x140680D90 (MiPfPrepareReadList.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x1403328E8 (MiGetAvailablePagesBelowPriority.c)
 *     MiCommitmentAvailable @ 0x140332924 (MiCommitmentAvailable.c)
 */

_BOOL8 __fastcall MiPrefetchNormally(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  unsigned int v3; // r8d

  return *(__int64 *)(a1 + 7168) >= 160
      && (unsigned __int64)MiCommitmentAvailable(a1, a2, (unsigned int)a2) >= 0x1080
      && MiGetAvailablePagesBelowPriority(v2, v3);
}
