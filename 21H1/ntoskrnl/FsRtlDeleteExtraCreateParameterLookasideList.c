/*
 * XREFs of FsRtlDeleteExtraCreateParameterLookasideList @ 0x1408861D0
 * Callers:
 *     <none>
 * Callees:
 *     ExDeletePagedLookasideList @ 0x14030EB90 (ExDeletePagedLookasideList.c)
 *     ExDeleteNPagedLookasideList @ 0x1403975C0 (ExDeleteNPagedLookasideList.c)
 */

void __stdcall FsRtlDeleteExtraCreateParameterLookasideList(PVOID Lookaside, FSRTL_ECP_LOOKASIDE_FLAGS Flags)
{
  if ( (Flags & 2) != 0 )
    ExDeleteNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)Lookaside);
  else
    ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)Lookaside);
}
