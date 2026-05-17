/*
 * XREFs of _RtlCreateHashTable@12 @ 0x4B35ADE0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpCreateHashTable@16 @ 0x4B35B3EB (_RtlpCreateHashTable@16.c)
 */

int __stdcall RtlCreateHashTable(int a1, int a2, int a3)
{
  return RtlpCreateHashTable(a2, a3);
}
