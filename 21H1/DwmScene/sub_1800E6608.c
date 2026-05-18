/*
 * XREFs of sub_1800E6608 @ 0x1800E6608
 * Callers:
 *     sub_1800E5780 @ 0x1800E5780 (sub_1800E5780.c)
 *     sub_1800E6880 @ 0x1800E6880 (sub_1800E6880.c)
 *     sub_1800E6D90 @ 0x1800E6D90 (sub_1800E6D90.c)
 *     sub_1800EA830 @ 0x1800EA830 (sub_1800EA830.c)
 *     sub_18010A1F0 @ 0x18010A1F0 (sub_18010A1F0.c)
 * Callees:
 *     sub_18001CD3C @ 0x18001CD3C (sub_18001CD3C.c)
 *     memmove @ 0x18011E0B2 (memmove.c)
 */

char *__fastcall sub_1800E6608(__int64 a1, __int64 a2)
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
      sub_18001CD3C((__int64 *)(a1 + 528), v5 >> 2);
      v4 = *v2;
    }
    memmove(v4, v3, v5);
    result = &v4[v5];
    v2[1] = &v4[v5];
  }
  return result;
}
