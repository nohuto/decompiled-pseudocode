/*
 * XREFs of sub_1800ED718 @ 0x1800ED718
 * Callers:
 *     sub_1800EE230 @ 0x1800EE230 (sub_1800EE230.c)
 *     sub_1800EFE60 @ 0x1800EFE60 (sub_1800EFE60.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010BD8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_180020F10 @ 0x180020F10 (sub_180020F10.c)
 *     sub_18008B420 @ 0x18008B420 (sub_18008B420.c)
 *     memmove @ 0x180123982 (memmove.c)
 */

void __fastcall sub_1800ED718(_QWORD *a1, const void *a2, __int64 a3)
{
  size_t v4; // rsi
  unsigned __int64 v6; // rdi
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  __int64 *v9; // [rsp+20h] [rbp-38h] BYREF

  v4 = a3 - (_QWORD)a2;
  v6 = (a3 - (__int64)a2) >> 3;
  if ( v6 )
  {
    if ( v6 > 0x1FFFFFFFFFFFFFFFLL )
      std::vector<void *>::_Xlen();
    v7 = sub_180020F10((__int64)a1, (a3 - (__int64)a2) >> 3);
    *a1 = v7;
    a1[1] = v7;
    v8 = v7;
    a1[2] = &v7[v6];
    memmove(v7, a2, v4);
    v9 = 0LL;
    a1[1] = (char *)v8 + v4;
    sub_18008B420(&v9);
  }
}
