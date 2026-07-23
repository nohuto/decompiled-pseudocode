/*
 * XREFs of FsRtlDeleteExtraCreateParameterLookasideList @ 0x14088A740
 * Callers:
 *     <none>
 * Callees:
 *     ExDeletePagedLookasideList @ 0x14023CE20 (ExDeletePagedLookasideList.c)
 *     ExDeleteNPagedLookasideList @ 0x14039AC70 (ExDeleteNPagedLookasideList.c)
 */

void __stdcall FsRtlDeleteExtraCreateParameterLookasideList(PVOID Lookaside, FSRTL_ECP_LOOKASIDE_FLAGS Flags)
{
  if ( (Flags & 2) != 0 )
    ExDeleteNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)Lookaside);
  else
    ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)Lookaside);
}
