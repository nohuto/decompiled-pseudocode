/*
 * XREFs of ExDeleteNPagedLookasideList @ 0x1403981F0
 * Callers:
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x1408874F0 (FsRtlDeleteExtraCreateParameterLookasideList.c)
 * Callees:
 *     ExpFlushGeneralLookaside @ 0x14034C0A0 (ExpFlushGeneralLookaside.c)
 *     ExpRemoveGeneralLookaside @ 0x14034C174 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeleteNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside)
{
  ExpRemoveGeneralLookaside(&ExNPagedLookasideLock, (__int64)Lookaside);
  ExpFlushGeneralLookaside((__int64)Lookaside);
}
