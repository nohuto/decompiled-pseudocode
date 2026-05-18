/*
 * XREFs of sub_18000F9B8 @ 0x18000F9B8
 * Callers:
 *     sub_18000F8A8 @ 0x18000F8A8 (sub_18000F8A8.c)
 *     sub_180017764 @ 0x180017764 (sub_180017764.c)
 *     sub_180017874 @ 0x180017874 (sub_180017874.c)
 *     sub_180017984 @ 0x180017984 (sub_180017984.c)
 *     sub_180024740 @ 0x180024740 (sub_180024740.c)
 *     sub_18002C82C @ 0x18002C82C (sub_18002C82C.c)
 *     sub_18006E66C @ 0x18006E66C (sub_18006E66C.c)
 *     sub_1800964A0 @ 0x1800964A0 (sub_1800964A0.c)
 *     sub_1800965B0 @ 0x1800965B0 (sub_1800965B0.c)
 *     sub_1800A1664 @ 0x1800A1664 (sub_1800A1664.c)
 *     sub_1800A1774 @ 0x1800A1774 (sub_1800A1774.c)
 *     sub_1800A1884 @ 0x1800A1884 (sub_1800A1884.c)
 *     sub_1800A1994 @ 0x1800A1994 (sub_1800A1994.c)
 *     sub_1800A1AA4 @ 0x1800A1AA4 (sub_1800A1AA4.c)
 *     sub_1800A76CC @ 0x1800A76CC (sub_1800A76CC.c)
 *     sub_1800B4C68 @ 0x1800B4C68 (sub_1800B4C68.c)
 *     sub_1800F39EC @ 0x1800F39EC (sub_1800F39EC.c)
 *     sub_1800F65C4 @ 0x1800F65C4 (sub_1800F65C4.c)
 * Callees:
 *     sub_180010A10 @ 0x180010A10 (sub_180010A10.c)
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010BD8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_180010BEC @ 0x180010BEC (sub_180010BEC.c)
 */

unsigned __int64 __fastcall sub_18000F9B8(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  __int64 v12; // r10
  unsigned __int64 v13; // r14
  _QWORD *v14; // rcx
  _QWORD *v15; // rdx
  _QWORD *v16; // r8
  _QWORD *v17; // rcx
  _QWORD *v18; // rdx
  _QWORD *v19; // r9
  unsigned __int64 v20; // rbx
  __int64 v22; // [rsp+20h] [rbp-58h]

  v6 = (unsigned __int64)a2 - *a1;
  v7 = (__int64)(a1[1] - *a1) >> 4;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::vector<void *>::_Xlen();
  v8 = v7 + 1;
  v9 = (__int64)(a1[2] - *a1) >> 4;
  v10 = v9 >> 1;
  if ( v9 <= 0xFFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = sub_180010BEC(a1, v11);
  v13 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
  v14 = (_QWORD *)(v13 + v12);
  v15 = (_QWORD *)(v13 + v12 + 16);
  *v14 = 0LL;
  v14[1] = 0LL;
  *v14 = *a3;
  v14[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  v22 = v13 + v12;
  v16 = (_QWORD *)a1[1];
  v17 = (_QWORD *)*a1;
  if ( a2 == v16 )
  {
    v18 = (_QWORD *)v12;
    while ( v17 != v16 )
    {
      *v18 = 0LL;
      v18[1] = 0LL;
      *v18 = *v17;
      v18[1] = v17[1];
      *v17 = 0LL;
      v17[1] = 0LL;
      v18 += 2;
      v17 += 2;
    }
  }
  else
  {
    v19 = (_QWORD *)v12;
    if ( v17 != a2 )
    {
      do
      {
        *v19 = 0LL;
        v19[1] = 0LL;
        *v19 = *v17;
        v19[1] = v17[1];
        *v17 = 0LL;
        v17[1] = 0LL;
        v19 += 2;
        v17 += 2;
      }
      while ( v17 != a2 );
      v16 = (_QWORD *)a1[1];
    }
    v22 = v12;
    if ( a2 != v16 )
    {
      v20 = (unsigned __int64)a2 - v13 - v12;
      do
      {
        *v15 = 0LL;
        v15[1] = 0LL;
        *v15 = *(_QWORD *)((char *)v15 + v20 - 16);
        v15[1] = *(_QWORD *)((char *)v15 + v20 - 8);
        *(_QWORD *)((char *)v15 + v20 - 16) = 0LL;
        *(_QWORD *)((char *)v15 + v20 - 8) = 0LL;
        v15 += 2;
      }
      while ( (_QWORD *)((char *)v15 + v20 - 16) != v16 );
    }
  }
  sub_180010A10(a1, v12, v8, v11, v22);
  return v13 + *a1;
}
