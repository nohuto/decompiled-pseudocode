/*
 * XREFs of MiDeleteSlabAllocator @ 0x140552BB0
 * Callers:
 *     <none>
 * Callees:
 *     MiFreeSlabEntries @ 0x1402BA910 (MiFreeSlabEntries.c)
 */

__int64 __fastcall MiDeleteSlabAllocator(__int64 a1, __int64 a2)
{
  MiFreeSlabEntries(a1, a2, 1);
  return 0LL;
}
