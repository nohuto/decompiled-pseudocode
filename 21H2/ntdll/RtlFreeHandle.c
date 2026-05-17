/*
 * XREFs of RtlFreeHandle @ 0x180059D40
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1800A4780 (memset.c)
 */

char __fastcall RtlFreeHandle(__int64 a1, _QWORD *a2)
{
  char result; // al

  memset(a2, 0, *(unsigned int *)(a1 + 4));
  *a2 = *(_QWORD *)(a1 + 16);
  result = 1;
  *(_QWORD *)(a1 + 16) = a2;
  return result;
}
