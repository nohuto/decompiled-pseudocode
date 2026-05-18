/*
 * XREFs of sub_1800E7E48 @ 0x1800E7E48
 * Callers:
 *     sub_1800E8960 @ 0x1800E8960 (sub_1800E8960.c)
 *     sub_1800EA590 @ 0x1800EA590 (sub_1800EA590.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010AF8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18001D118 @ 0x18001D118 (sub_18001D118.c)
 *     sub_180085B50 @ 0x180085B50 (sub_180085B50.c)
 *     memmove @ 0x18011E0B2 (memmove.c)
 */

void __fastcall sub_1800E7E48(_QWORD *a1, const void *a2, __int64 a3)
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
    v7 = sub_18001D118((__int64)a1, (a3 - (__int64)a2) >> 3);
    *a1 = v7;
    a1[1] = v7;
    v8 = v7;
    a1[2] = &v7[v6];
    memmove(v7, a2, v4);
    v9 = 0LL;
    a1[1] = (char *)v8 + v4;
    sub_180085B50(&v9);
  }
}
