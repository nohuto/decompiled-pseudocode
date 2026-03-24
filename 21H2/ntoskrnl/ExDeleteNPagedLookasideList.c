/*
 * XREFs of ExDeleteNPagedLookasideList @ 0x14039AB20
 * Callers:
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x14088A5E0 (FsRtlDeleteExtraCreateParameterLookasideList.c)
 * Callees:
 *     ExpFlushGeneralLookaside @ 0x1402BE810 (ExpFlushGeneralLookaside.c)
 *     ExpRemoveGeneralLookaside @ 0x1402BE8E4 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeleteNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside)
{
  ExpRemoveGeneralLookaside(&ExNPagedLookasideLock, (__int64)Lookaside);
  ExpFlushGeneralLookaside((__int64)Lookaside);
}
