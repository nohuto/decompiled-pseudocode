/*
 * XREFs of sub_1800A13DC @ 0x1800A13DC
 * Callers:
 *     sub_180075BFC @ 0x180075BFC (sub_180075BFC.c)
 * Callees:
 *     sub_18001CD3C @ 0x18001CD3C (sub_18001CD3C.c)
 *     memmove @ 0x18011E0B2 (memmove.c)
 */

char *__fastcall sub_1800A13DC(__int64 a1, __int64 a2)
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
      sub_18001CD3C((__int64 *)(a1 + 18664), v5 >> 2);
      v4 = *v2;
    }
    memmove(v4, v3, v5);
    result = &v4[v5];
    v2[1] = &v4[v5];
  }
  return result;
}
