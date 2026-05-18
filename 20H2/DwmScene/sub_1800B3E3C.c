/*
 * XREFs of sub_1800B3E3C @ 0x1800B3E3C
 * Callers:
 *     sub_1800D40E0 @ 0x1800D40E0 (sub_1800D40E0.c)
 *     sub_1800FEFCC @ 0x1800FEFCC (sub_1800FEFCC.c)
 *     sub_1800FF83C @ 0x1800FF83C (sub_1800FF83C.c)
 * Callees:
 *     sub_18000FB34 @ 0x18000FB34 (sub_18000FB34.c)
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_1 @ 0x180026D38 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_1.c)
 *     memmove @ 0x18011E0B2 (memmove.c)
 */

__int64 *__fastcall sub_1800B3E3C(__int64 *a1, _QWORD *a2, unsigned __int64 a3, size_t a4)
{
  unsigned __int64 v4; // rax
  size_t v5; // rdi
  __int64 *v6; // rbx
  size_t v7; // rax
  char *v8; // r9
  void *v9; // rsi

  v4 = a2[2];
  v5 = a4;
  v6 = a1;
  if ( v4 < a3 )
    std::vector<void *>::_Xlen();
  v7 = v4 - a3;
  if ( v7 < a4 )
    v5 = v7;
  if ( a2[3] >= 0x10uLL )
    a2 = (_QWORD *)*a2;
  v8 = (char *)a2 + a3;
  if ( v5 > a1[3] )
    return sub_18000FB34(a1, v5, 0LL, v8);
  v9 = a1;
  if ( (unsigned __int64)a1[3] >= 0x10 )
    v9 = (void *)*a1;
  a1[2] = v5;
  memmove(v9, v8, v5);
  *((_BYTE *)v9 + v5) = 0;
  return v6;
}
