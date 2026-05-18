/*
 * XREFs of sub_18008D6CC @ 0x18008D6CC
 * Callers:
 *     sub_18008D800 @ 0x18008D800 (sub_18008D800.c)
 *     sub_18008D8F0 @ 0x18008D8F0 (sub_18008D8F0.c)
 *     sub_18008DB4C @ 0x18008DB4C (sub_18008DB4C.c)
 *     sub_18009EB14 @ 0x18009EB14 (sub_18009EB14.c)
 *     sub_1800ED154 @ 0x1800ED154 (sub_1800ED154.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010AF8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_180018BD0 @ 0x180018BD0 (sub_180018BD0.c)
 *     sub_18001D188 @ 0x18001D188 (sub_18001D188.c)
 *     memmove @ 0x18011E0B2 (memmove.c)
 */

void __fastcall sub_18008D6CC(_QWORD *a1, const void *a2, __int64 a3)
{
  size_t v4; // rsi
  unsigned __int64 v6; // rdi
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  __int64 *v9; // [rsp+20h] [rbp-38h] BYREF

  v4 = a3 - (_QWORD)a2;
  v6 = (a3 - (__int64)a2) >> 2;
  if ( v6 )
  {
    if ( v6 > 0x3FFFFFFFFFFFFFFFLL )
      std::vector<void *>::_Xlen();
    v7 = sub_18001D188((__int64)a1, (a3 - (__int64)a2) >> 2);
    *a1 = v7;
    a1[1] = v7;
    v8 = v7;
    a1[2] = (char *)v7 + 4 * v6;
    memmove(v7, a2, v4);
    v9 = 0LL;
    a1[1] = (char *)v8 + v4;
    sub_180018BD0(&v9);
  }
}
