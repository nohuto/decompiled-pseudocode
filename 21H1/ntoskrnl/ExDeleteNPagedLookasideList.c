/*
 * XREFs of ExDeleteNPagedLookasideList @ 0x1403975C0
 * Callers:
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x1408861D0 (FsRtlDeleteExtraCreateParameterLookasideList.c)
 * Callees:
 *     ExpFlushGeneralLookaside @ 0x14030EBC0 (ExpFlushGeneralLookaside.c)
 *     ExpRemoveGeneralLookaside @ 0x14030EC94 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeleteNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside)
{
  ExpRemoveGeneralLookaside(&ExNPagedLookasideLock, (__int64)Lookaside);
  ExpFlushGeneralLookaside((__int64)Lookaside);
}
