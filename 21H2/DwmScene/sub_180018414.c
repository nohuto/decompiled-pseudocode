/*
 * XREFs of sub_180018414 @ 0x180018414
 * Callers:
 *     sub_18001AF60 @ 0x18001AF60 (sub_18001AF60.c)
 *     sub_1800E2D0C @ 0x1800E2D0C (sub_1800E2D0C.c)
 *     sub_180107740 @ 0x180107740 (sub_180107740.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010BD8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_180020A38 @ 0x180020A38 (sub_180020A38.c)
 *     sub_180020F10 @ 0x180020F10 (sub_180020F10.c)
 *     memmove @ 0x180123982 (memmove.c)
 */

__int64 __fastcall sub_180018414(const void **a1, _BYTE *a2, _QWORD *a3)
{
  __int64 v6; // r15
  __int64 v7; // r14
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  char *v12; // rsi
  _BYTE *v13; // r8
  _BYTE *v14; // rdx
  char *v15; // rcx
  size_t v16; // r8

  v6 = (a2 - (_BYTE *)*a1) >> 3;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<void *>::_Xlen();
  v8 = v7 + 1;
  v9 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = (char *)sub_180020F10(a1, v11);
  *(_QWORD *)&v12[8 * v6] = *a3;
  v13 = a1[1];
  v14 = *a1;
  v15 = v12;
  if ( a2 == v13 )
  {
    v16 = v13 - v14;
  }
  else
  {
    memmove(v12, v14, a2 - (_BYTE *)*a1);
    v15 = &v12[8 * v6 + 8];
    v16 = (_BYTE *)a1[1] - a2;
    v14 = a2;
  }
  memmove(v15, v14, v16);
  sub_180020A38(a1, v12, v8, v11);
  return (__int64)*a1 + 8 * v6;
}
