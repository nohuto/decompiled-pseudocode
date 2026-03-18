/*
 * XREFs of ExDeletePagedLookasideList @ 0x14030EB90
 * Callers:
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x1408861D0 (FsRtlDeleteExtraCreateParameterLookasideList.c)
 * Callees:
 *     ExpFlushGeneralLookaside @ 0x14030EBC0 (ExpFlushGeneralLookaside.c)
 *     ExpRemoveGeneralLookaside @ 0x14030EC94 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeletePagedLookasideList(PPAGED_LOOKASIDE_LIST Lookaside)
{
  ExpRemoveGeneralLookaside(&ExPagedLookasideLock);
  ExpFlushGeneralLookaside(Lookaside);
}
