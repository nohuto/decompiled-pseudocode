/*
 * XREFs of sub_180018764 @ 0x180018764
 * Callers:
 *     sub_1800187F0 @ 0x1800187F0 (sub_1800187F0.c)
 *     sub_1800ED7F8 @ 0x1800ED7F8 (sub_1800ED7F8.c)
 *     sub_18010781C @ 0x18010781C (sub_18010781C.c)
 * Callees:
 *     sub_180018BD0 @ 0x180018BD0 (sub_180018BD0.c)
 *     sub_18001D188 @ 0x18001D188 (sub_18001D188.c)
 *     memmove @ 0x18011E0B2 (memmove.c)
 */

_QWORD *__fastcall sub_180018764(_QWORD *a1, __int64 a2)
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
    v6 = (char *)sub_18001D188(a1, v5);
    *a1 = v6;
    v7 = v6;
    a1[1] = v6;
    a1[2] = &v6[4 * v5];
    v8 = *(_QWORD *)(a2 + 8) - *(_QWORD *)a2;
    memmove(v6, *(const void **)a2, v8);
    v10[0] = 0LL;
    a1[1] = &v7[v8];
    sub_180018BD0(v10);
  }
  return a1;
}
