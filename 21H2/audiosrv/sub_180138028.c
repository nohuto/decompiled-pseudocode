/*
 * XREFs of sub_180138028 @ 0x180138028
 * Callers:
 *     sub_1800600A4 @ 0x1800600A4 (sub_1800600A4.c)
 *     sub_18007C5D2 @ 0x18007C5D2 (sub_18007C5D2.c)
 *     sub_180133EDC @ 0x180133EDC (sub_180133EDC.c)
 *     sub_180134056 @ 0x180134056 (sub_180134056.c)
 *     sub_180137F70 @ 0x180137F70 (sub_180137F70.c)
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 */

_QWORD *__fastcall sub_180138028(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rdi
  void *v6; // rcx
  unsigned __int64 v7; // rdx
  _QWORD *result; // rax

  v3 = *(_QWORD *)a3;
  **(_QWORD **)(a3 + 8) = *(_QWORD *)a3;
  *(_QWORD *)(*(_QWORD *)a3 + 8LL) = *(_QWORD *)(a3 + 8);
  --*(_QWORD *)(a1 + 8);
  v6 = *(void **)(a3 + 48);
  *(_QWORD *)(a3 + 48) = 0LL;
  if ( v6 )
    sub_180033A70(v6);
  v7 = *(_QWORD *)(a3 + 40);
  if ( v7 >= 8 )
    sub_1800472E0(*(_QWORD *)(a3 + 16), 2 * v7 + 2);
  *(_QWORD *)(a3 + 32) = 0LL;
  *(_QWORD *)(a3 + 40) = 7LL;
  *(_WORD *)(a3 + 16) = 0;
  sub_1800472E0(a3, 0x38uLL);
  result = a2;
  *a2 = v3;
  return result;
}
