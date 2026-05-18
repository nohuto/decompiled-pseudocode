/*
 * XREFs of sub_1800F13F8 @ 0x1800F13F8
 * Callers:
 *     sub_1800F1374 @ 0x1800F1374 (sub_1800F1374.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010BD8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_180020F80 @ 0x180020F80 (sub_180020F80.c)
 *     memset @ 0x18012396A (memset.c)
 *     memmove @ 0x180123982 (memmove.c)
 */

__int64 __fastcall sub_1800F13F8(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // r15
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  _QWORD *v8; // r14

  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    std::vector<void *>::_Xlen();
  v4 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 2;
  v5 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 2;
  v6 = v5 >> 1;
  if ( v5 <= 0x3FFFFFFFFFFFFFFFLL - (v5 >> 1) )
  {
    v7 = v6 + v5;
    if ( v6 + v5 < a2 )
      v7 = a2;
  }
  else
  {
    v7 = a2;
  }
  v8 = sub_180020F80(a1, v7);
  if ( a2 != v4 )
    memset((char *)v8 + 4 * v4, 0, 4 * (a2 - v4));
  memmove(v8, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  return sub_1800427A0((__int64 *)a1, (__int64)v8, a2, v7);
}
