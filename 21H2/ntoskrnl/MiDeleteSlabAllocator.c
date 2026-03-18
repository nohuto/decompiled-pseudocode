/*
 * XREFs of MiDeleteSlabAllocator @ 0x1405B0E10
 * Callers:
 *     <none>
 * Callees:
 *     MiFreeSlabEntries @ 0x14023A710 (MiFreeSlabEntries.c)
 */

__int64 __fastcall MiDeleteSlabAllocator(__int64 a1, __int64 a2)
{
  MiFreeSlabEntries(a1, a2, 1);
  return 0LL;
}
