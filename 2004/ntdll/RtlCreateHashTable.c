/*
 * XREFs of RtlCreateHashTable @ 0x1800732B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCreateHashTable(__int64 a1, unsigned int a2, unsigned int a3)
{
  return RtlpCreateHashTable(a1, 128LL, a2, a3);
}
