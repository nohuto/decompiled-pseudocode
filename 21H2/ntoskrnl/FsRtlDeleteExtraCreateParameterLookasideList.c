/*
 * XREFs of FsRtlDeleteExtraCreateParameterLookasideList @ 0x14092D010
 * Callers:
 *     <none>
 * Callees:
 *     ExDeleteNPagedLookasideList @ 0x140245F80 (ExDeleteNPagedLookasideList.c)
 *     ExDeletePagedLookasideList @ 0x140245FB0 (ExDeletePagedLookasideList.c)
 */

void __stdcall FsRtlDeleteExtraCreateParameterLookasideList(PVOID Lookaside, FSRTL_ECP_LOOKASIDE_FLAGS Flags)
{
  if ( (Flags & 2) != 0 )
    ExDeleteNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)Lookaside);
  else
    ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)Lookaside);
}
