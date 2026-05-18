/*
 * XREFs of sub_180092F9C @ 0x180092F9C
 * Callers:
 *     sub_1800930D0 @ 0x1800930D0 (sub_1800930D0.c)
 *     sub_1800931C0 @ 0x1800931C0 (sub_1800931C0.c)
 *     sub_18009341C @ 0x18009341C (sub_18009341C.c)
 *     sub_1800A43E4 @ 0x1800A43E4 (sub_1800A43E4.c)
 *     sub_1800F2A24 @ 0x1800F2A24 (sub_1800F2A24.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010BD8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_180019338 @ 0x180019338 (sub_180019338.c)
 *     sub_180020F80 @ 0x180020F80 (sub_180020F80.c)
 *     memmove @ 0x180123982 (memmove.c)
 */

void __fastcall sub_180092F9C(_QWORD *a1, const void *a2, __int64 a3)
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
    v7 = sub_180020F80((__int64)a1, (a3 - (__int64)a2) >> 2);
    *a1 = v7;
    a1[1] = v7;
    v8 = v7;
    a1[2] = (char *)v7 + 4 * v6;
    memmove(v7, a2, v4);
    v9 = 0LL;
    a1[1] = (char *)v8 + v4;
    sub_180019338(&v9);
  }
}
