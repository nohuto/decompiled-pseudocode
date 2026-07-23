/*
 * XREFs of ExDeletePagedLookasideList @ 0x14023CE20
 * Callers:
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x14088A740 (FsRtlDeleteExtraCreateParameterLookasideList.c)
 * Callees:
 *     ExpFlushGeneralLookaside @ 0x14023CE50 (ExpFlushGeneralLookaside.c)
 *     ExpRemoveGeneralLookaside @ 0x14023CF24 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeletePagedLookasideList(PPAGED_LOOKASIDE_LIST Lookaside)
{
  ExpRemoveGeneralLookaside(&ExPagedLookasideLock);
  ExpFlushGeneralLookaside(Lookaside);
}
