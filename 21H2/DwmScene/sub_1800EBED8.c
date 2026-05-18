/*
 * XREFs of sub_1800EBED8 @ 0x1800EBED8
 * Callers:
 *     sub_1800EB050 @ 0x1800EB050 (sub_1800EB050.c)
 *     sub_1800EC150 @ 0x1800EC150 (sub_1800EC150.c)
 *     sub_1800EC660 @ 0x1800EC660 (sub_1800EC660.c)
 *     sub_1800F0100 @ 0x1800F0100 (sub_1800F0100.c)
 *     sub_18010FAC0 @ 0x18010FAC0 (sub_18010FAC0.c)
 * Callees:
 *     sub_180020AC0 @ 0x180020AC0 (sub_180020AC0.c)
 *     memmove @ 0x180123982 (memmove.c)
 */

char *__fastcall sub_1800EBED8(__int64 a1, __int64 a2)
{
  char **v2; // rbx
  const void *v3; // rbp
  char *v4; // rdi
  signed __int64 v5; // rsi
  char *result; // rax

  v2 = (char **)(a1 + 528);
  if ( a1 + 528 != a2 )
  {
    v3 = *(const void **)a2;
    v4 = *v2;
    v5 = *(_QWORD *)(a2 + 8) - *(_QWORD *)a2;
    if ( v5 >> 2 > (unsigned __int64)((__int64)(*(_QWORD *)(a1 + 544) - *(_QWORD *)(a1 + 528)) >> 2) )
    {
      sub_180020AC0((__int64 *)(a1 + 528), v5 >> 2);
      v4 = *v2;
    }
    memmove(v4, v3, v5);
    result = &v4[v5];
    v2[1] = &v4[v5];
  }
  return result;
}
