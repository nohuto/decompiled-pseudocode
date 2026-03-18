/*
 * XREFs of ExDeletePagedLookasideList @ 0x14034C070
 * Callers:
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x1408874F0 (FsRtlDeleteExtraCreateParameterLookasideList.c)
 * Callees:
 *     ExpFlushGeneralLookaside @ 0x14034C0A0 (ExpFlushGeneralLookaside.c)
 *     ExpRemoveGeneralLookaside @ 0x14034C174 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeletePagedLookasideList(PPAGED_LOOKASIDE_LIST Lookaside)
{
  ExpRemoveGeneralLookaside(&ExPagedLookasideLock);
  ExpFlushGeneralLookaside(Lookaside);
}
