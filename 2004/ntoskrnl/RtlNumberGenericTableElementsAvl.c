/*
 * XREFs of RtlNumberGenericTableElementsAvl @ 0x14033B4E0
 * Callers:
 *     PiUpdateDriverDBCache @ 0x14076B8EC (PiUpdateDriverDBCache.c)
 *     PiDmGetObjectCount @ 0x1408A038C (PiDmGetObjectCount.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlNumberGenericTableElementsAvl(PRTL_AVL_TABLE Table)
{
  return Table->NumberGenericTableElements;
}
