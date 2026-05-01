/*
 * XREFs of sub_18006E758 @ 0x18006E758
 * Callers:
 *     sub_18006EF94 @ 0x18006EF94 (sub_18006EF94.c)
 *     sub_18006F1FC @ 0x18006F1FC (sub_18006F1FC.c)
 * Callees:
 *     memset @ 0x18004683A (memset.c)
 */

void *__fastcall sub_18006E758(__int64 a1, __int64 a2, _QWORD *a3)
{
  void *result; // rax

  result = memset(a3, 0, 0xB0uLL);
  a3[4] = a1;
  *((_OWORD *)a3 + 7) = *(_OWORD *)a2;
  *((_OWORD *)a3 + 8) = *(_OWORD *)(a2 + 16);
  a3[18] = *(_QWORD *)(a2 + 32);
  *a3 = 1LL;
  a3[9] = 0LL;
  a3[10] = 0LL;
  *((_DWORD *)a3 + 26) = 2;
  return result;
}
