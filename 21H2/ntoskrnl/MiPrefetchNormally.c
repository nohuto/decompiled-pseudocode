/*
 * XREFs of MiPrefetchNormally @ 0x14025F878
 * Callers:
 *     MiPfPutPagesInTransition @ 0x140306370 (MiPfPutPagesInTransition.c)
 *     MiPfPrepareReadList @ 0x140706CF0 (MiPfPrepareReadList.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x14025F8BC (MiGetAvailablePagesBelowPriority.c)
 *     MiCommitmentAvailable @ 0x14025F8F8 (MiCommitmentAvailable.c)
 */

_BOOL8 __fastcall MiPrefetchNormally(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  unsigned int v3; // r8d

  return *(__int64 *)(a1 + 7168) >= 160
      && (unsigned __int64)MiCommitmentAvailable(a1, a2, (unsigned int)a2) >= 0x1080
      && MiGetAvailablePagesBelowPriority(v2, v3);
}
