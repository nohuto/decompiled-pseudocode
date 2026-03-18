/*
 * XREFs of FsRtlDeleteExtraCreateParameterLookasideList @ 0x1408874F0
 * Callers:
 *     <none>
 * Callees:
 *     ExDeletePagedLookasideList @ 0x14034C070 (ExDeletePagedLookasideList.c)
 *     ExDeleteNPagedLookasideList @ 0x1403981F0 (ExDeleteNPagedLookasideList.c)
 */

void __stdcall FsRtlDeleteExtraCreateParameterLookasideList(PVOID Lookaside, FSRTL_ECP_LOOKASIDE_FLAGS Flags)
{
  if ( (Flags & 2) != 0 )
    ExDeleteNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)Lookaside);
  else
    ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)Lookaside);
}
