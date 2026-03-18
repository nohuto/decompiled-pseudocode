/*
 * XREFs of RtlNumberGenericTableElementsAvl @ 0x1402FEBE0
 * Callers:
 *     PiUpdateDriverDBCache @ 0x14076950C (PiUpdateDriverDBCache.c)
 *     PiDmGetObjectCount @ 0x14089F06C (PiDmGetObjectCount.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlNumberGenericTableElementsAvl(PRTL_AVL_TABLE Table)
{
  return Table->NumberGenericTableElements;
}
