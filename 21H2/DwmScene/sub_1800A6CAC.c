/*
 * XREFs of sub_1800A6CAC @ 0x1800A6CAC
 * Callers:
 *     sub_18007B4CC @ 0x18007B4CC (sub_18007B4CC.c)
 * Callees:
 *     sub_180020AC0 @ 0x180020AC0 (sub_180020AC0.c)
 *     memmove @ 0x180123982 (memmove.c)
 */

char *__fastcall sub_1800A6CAC(__int64 a1, __int64 a2)
{
  char **v2; // rbx
  const void *v3; // rbp
  char *v4; // rdi
  signed __int64 v5; // rsi
  char *result; // rax

  v2 = (char **)(a1 + 18664);
  if ( a1 + 18664 != a2 )
  {
    v3 = *(const void **)a2;
    v4 = *v2;
    v5 = *(_QWORD *)(a2 + 8) - *(_QWORD *)a2;
    if ( v5 >> 2 > (unsigned __int64)((__int64)(*(_QWORD *)(a1 + 18680) - *(_QWORD *)(a1 + 18664)) >> 2) )
    {
      sub_180020AC0((__int64 *)(a1 + 18664), v5 >> 2);
      v4 = *v2;
    }
    memmove(v4, v3, v5);
    result = &v4[v5];
    v2[1] = &v4[v5];
  }
  return result;
}
