/*
 * XREFs of MiDeleteSlabAllocator @ 0x14054D0C0
 * Callers:
 *     <none>
 * Callees:
 *     MiFreeSlabEntries @ 0x140308F00 (MiFreeSlabEntries.c)
 */

__int64 __fastcall MiDeleteSlabAllocator(__int64 a1, __int64 a2)
{
  MiFreeSlabEntries(a1, a2, 1);
  return 0LL;
}
