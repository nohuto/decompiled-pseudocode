/*
 * XREFs of sub_180018D48 @ 0x180018D48
 * Callers:
 *     sub_180018DD4 @ 0x180018DD4 (sub_180018DD4.c)
 *     sub_1800F30C8 @ 0x1800F30C8 (sub_1800F30C8.c)
 *     sub_18010D0EC @ 0x18010D0EC (sub_18010D0EC.c)
 * Callees:
 *     sub_180019338 @ 0x180019338 (sub_180019338.c)
 *     sub_180020F80 @ 0x180020F80 (sub_180020F80.c)
 *     memmove @ 0x180123982 (memmove.c)
 */

_QWORD *__fastcall sub_180018D48(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rbx
  char *v6; // rax
  char *v7; // rdi
  size_t v8; // rbx
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)a2 != v4 )
  {
    v5 = (v4 - *(_QWORD *)a2) >> 2;
    v6 = (char *)sub_180020F80(a1, v5);
    *a1 = v6;
    v7 = v6;
    a1[1] = v6;
    a1[2] = &v6[4 * v5];
    v8 = *(_QWORD *)(a2 + 8) - *(_QWORD *)a2;
    memmove(v6, *(const void **)a2, v8);
    v10[0] = 0LL;
    a1[1] = &v7[v8];
    sub_180019338(v10);
  }
  return a1;
}
