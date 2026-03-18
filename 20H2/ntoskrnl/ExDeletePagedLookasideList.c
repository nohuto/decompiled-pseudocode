/*
 * XREFs of ExDeletePagedLookasideList @ 0x14031CF90
 * Callers:
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x14088D040 (FsRtlDeleteExtraCreateParameterLookasideList.c)
 * Callees:
 *     ExpFlushGeneralLookaside @ 0x14031CFC0 (ExpFlushGeneralLookaside.c)
 *     ExpRemoveGeneralLookaside @ 0x14031D094 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeletePagedLookasideList(PPAGED_LOOKASIDE_LIST Lookaside)
{
  ExpRemoveGeneralLookaside(&ExPagedLookasideLock);
  ExpFlushGeneralLookaside(Lookaside);
}
