/*
 * XREFs of sub_180040E38 @ 0x180040E38
 * Callers:
 *     sub_180041788 @ 0x180041788 (sub_180041788.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010AF8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_180031970 @ 0x180031970 (sub_180031970.c)
 *     sub_180041BE8 @ 0x180041BE8 (sub_180041BE8.c)
 *     memmove @ 0x18011E0B2 (memmove.c)
 */

unsigned __int64 __fastcall sub_180040E38(const void **a1, _BYTE *a2, _OWORD *a3)
{
  signed __int64 v6; // r14
  __int64 v7; // r15
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  char *v12; // rsi
  unsigned __int64 v13; // r14
  _BYTE *v14; // r8
  _BYTE *v15; // rdx
  char *v16; // rcx
  size_t v17; // r8

  v6 = a2 - (_BYTE *)*a1;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 5;
  if ( v7 == 0x7FFFFFFFFFFFFFFLL )
    std::vector<void *>::_Xlen();
  v8 = v7 + 1;
  v9 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 5;
  v10 = v9 >> 1;
  if ( v9 <= 0x7FFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = (char *)sub_180031970((__int64)a1, v11);
  v13 = v6 & 0xFFFFFFFFFFFFFFE0uLL;
  *(_OWORD *)&v12[v13] = *a3;
  *(_OWORD *)&v12[v13 + 16] = a3[1];
  v14 = a1[1];
  v15 = *a1;
  v16 = v12;
  if ( a2 == v14 )
  {
    v17 = v14 - v15;
  }
  else
  {
    memmove(v12, v15, a2 - (_BYTE *)*a1);
    v16 = &v12[v13 + 32];
    v17 = (_BYTE *)a1[1] - a2;
    v15 = a2;
  }
  memmove(v16, v15, v17);
  sub_180041BE8(a1, v12, v8, v11, v11, v12, a1);
  return (unsigned __int64)*a1 + v13;
}
