/*
 * XREFs of ExDeleteNPagedLookasideList @ 0x140245F80
 * Callers:
 *     DifExDeleteNPagedLookasideListWrapper @ 0x140607D60 (DifExDeleteNPagedLookasideListWrapper.c)
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x14092D010 (FsRtlDeleteExtraCreateParameterLookasideList.c)
 * Callees:
 *     ExpFlushGeneralLookaside @ 0x140245FE0 (ExpFlushGeneralLookaside.c)
 *     ExpRemoveGeneralLookaside @ 0x1402460B4 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeleteNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside)
{
  ExpRemoveGeneralLookaside(&ExNPagedLookasideLock);
  ExpFlushGeneralLookaside(Lookaside);
}
