/*
 * XREFs of sub_180046708 @ 0x180046708
 * Callers:
 *     sub_180047058 @ 0x180047058 (sub_180047058.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010BD8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_180037240 @ 0x180037240 (sub_180037240.c)
 *     sub_1800474B8 @ 0x1800474B8 (sub_1800474B8.c)
 *     memmove @ 0x180123982 (memmove.c)
 */

unsigned __int64 __fastcall sub_180046708(const void **a1, _BYTE *a2, _OWORD *a3)
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
  v12 = (char *)sub_180037240((__int64)a1, v11);
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
  sub_1800474B8(a1, v12, v8, v11, v11, v12, a1);
  return (unsigned __int64)*a1 + v13;
}
