/*
 * XREFs of sub_18004134C @ 0x18004134C
 * Callers:
 *     _expandlocale @ 0x1800418BC (_expandlocale.c)
 *     sub_1800E9A20 @ 0x1800E9A20 (sub_1800E9A20.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010BD8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_180020F80 @ 0x180020F80 (sub_180020F80.c)
 *     sub_1800427A0 @ 0x1800427A0 (sub_1800427A0.c)
 *     memmove @ 0x180123982 (memmove.c)
 */

__int64 __fastcall sub_18004134C(const void **a1, _BYTE *a2, _DWORD *a3)
{
  __int64 v6; // r15
  __int64 v7; // r14
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  _QWORD *v12; // rsi
  _BYTE *v13; // r8
  _BYTE *v14; // rdx
  char *v15; // rcx
  size_t v16; // r8

  v6 = (a2 - (_BYTE *)*a1) >> 2;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2;
  if ( v7 == 0x3FFFFFFFFFFFFFFFLL )
    std::vector<void *>::_Xlen();
  v8 = v7 + 1;
  v9 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 2;
  v10 = v9 >> 1;
  if ( v9 <= 0x3FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = sub_180020F80((__int64)a1, v11);
  *((_DWORD *)v12 + v6) = *a3;
  v13 = a1[1];
  v14 = *a1;
  v15 = (char *)v12;
  if ( a2 == v13 )
  {
    v16 = v13 - v14;
  }
  else
  {
    memmove(v12, v14, a2 - (_BYTE *)*a1);
    v15 = (char *)v12 + 4 * v6 + 4;
    v16 = (_BYTE *)a1[1] - a2;
    v14 = a2;
  }
  memmove(v15, v14, v16);
  sub_1800427A0(a1, v12, v8, v11, v11, v12, a1);
  return (__int64)*a1 + 4 * v6;
}
