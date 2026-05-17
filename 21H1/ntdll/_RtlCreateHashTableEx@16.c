/*
 * XREFs of _RtlCreateHashTableEx@16 @ 0x4B35AE10
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpCreateHashTable@16 @ 0x4B35B3EB (_RtlpCreateHashTable@16.c)
 */

int __stdcall RtlCreateHashTableEx(int a1, int a2, int a3, int a4)
{
  return RtlpCreateHashTable(a3, a4);
}
