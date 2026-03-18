/*
 * XREFs of RtlCreateHashTableEx @ 0x1403986E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateHashTable @ 0x140373F10 (RtlpCreateHashTable.c)
 */

char __fastcall RtlCreateHashTableEx(PVOID *a1, unsigned int a2, int a3, int a4)
{
  return RtlpCreateHashTable(a1, a2, a3, a4);
}
