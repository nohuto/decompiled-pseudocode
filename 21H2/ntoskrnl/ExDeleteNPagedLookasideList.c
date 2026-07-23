/*
 * XREFs of ExDeleteNPagedLookasideList @ 0x14039AC70
 * Callers:
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x14088A740 (FsRtlDeleteExtraCreateParameterLookasideList.c)
 * Callees:
 *     ExpFlushGeneralLookaside @ 0x14023CE50 (ExpFlushGeneralLookaside.c)
 *     ExpRemoveGeneralLookaside @ 0x14023CF24 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeleteNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside)
{
  ExpRemoveGeneralLookaside(&ExNPagedLookasideLock, (__int64)Lookaside);
  ExpFlushGeneralLookaside((__int64)Lookaside);
}
