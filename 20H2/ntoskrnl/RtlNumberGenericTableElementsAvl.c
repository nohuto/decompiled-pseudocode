/*
 * XREFs of RtlNumberGenericTableElementsAvl @ 0x14030E080
 * Callers:
 *     PiUpdateDriverDBCache @ 0x14077A6AC (PiUpdateDriverDBCache.c)
 *     PiDmGetObjectCount @ 0x1408A5EBC (PiDmGetObjectCount.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlNumberGenericTableElementsAvl(PRTL_AVL_TABLE Table)
{
  return Table->NumberGenericTableElements;
}
