/*
 * XREFs of sub_18001101C @ 0x18001101C
 * Callers:
 *     sub_180012870 @ 0x180012870 (sub_180012870.c)
 *     sub_1800448B0 @ 0x1800448B0 (sub_1800448B0.c)
 *     sub_180078E1C @ 0x180078E1C (sub_180078E1C.c)
 *     sub_1800797A4 @ 0x1800797A4 (sub_1800797A4.c)
 *     sub_1800843C8 @ 0x1800843C8 (sub_1800843C8.c)
 *     sub_180084514 @ 0x180084514 (sub_180084514.c)
 *     sub_1800B482C @ 0x1800B482C (sub_1800B482C.c)
 *     sub_1800C3C50 @ 0x1800C3C50 (sub_1800C3C50.c)
 *     sub_1800CB840 @ 0x1800CB840 (sub_1800CB840.c)
 *     sub_1800DAB84 @ 0x1800DAB84 (sub_1800DAB84.c)
 *     sub_1800DBD40 @ 0x1800DBD40 (sub_1800DBD40.c)
 *     sub_1800DDA3C @ 0x1800DDA3C (sub_1800DDA3C.c)
 *     sub_1800EBF90 @ 0x1800EBF90 (sub_1800EBF90.c)
 *     sub_1800FC200 @ 0x1800FC200 (sub_1800FC200.c)
 *     sub_18010B0B4 @ 0x18010B0B4 (sub_18010B0B4.c)
 *     sub_18010B2A4 @ 0x18010B2A4 (sub_18010B2A4.c)
 *     sub_18010EB94 @ 0x18010EB94 (sub_18010EB94.c)
 *     sub_180113810 @ 0x180113810 (sub_180113810.c)
 *     sub_18011C880 @ 0x18011C880 (sub_18011C880.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010BD8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_180010BEC @ 0x180010BEC (sub_180010BEC.c)
 *     sub_1800126C4 @ 0x1800126C4 (sub_1800126C4.c)
 */

unsigned __int64 __fastcall sub_18001101C(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  _QWORD *v12; // r10
  unsigned __int64 v13; // r14
  _QWORD *v14; // rcx
  _QWORD *v15; // rdx
  __int64 v16; // rax
  _QWORD *v17; // r9
  _QWORD *v18; // rcx
  _QWORD *v19; // rdx
  _QWORD *v20; // r8
  unsigned __int64 v21; // rbx
  char *v23; // [rsp+20h] [rbp-58h]

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
  v12 = sub_180010BEC((__int64)a1, v11);
  v13 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
  v14 = (_QWORD *)((char *)v12 + v13);
  v15 = (_QWORD *)((char *)v12 + v13 + 16);
  *v14 = 0LL;
  v14[1] = 0LL;
  v16 = a3[1];
  if ( v16 )
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
  *v14 = *a3;
  v14[1] = a3[1];
  v23 = (char *)v12 + v13;
  v17 = (_QWORD *)a1[1];
  v18 = (_QWORD *)*a1;
  if ( a2 == v17 )
  {
    v19 = v12;
    while ( v18 != v17 )
    {
      *v19 = 0LL;
      v19[1] = 0LL;
      *v19 = *v18;
      v19[1] = v18[1];
      *v18 = 0LL;
      v18[1] = 0LL;
      v19 += 2;
      v18 += 2;
    }
  }
  else
  {
    v20 = v12;
    if ( v18 != a2 )
    {
      do
      {
        *v20 = 0LL;
        v20[1] = 0LL;
        *v20 = *v18;
        v20[1] = v18[1];
        *v18 = 0LL;
        v18[1] = 0LL;
        v20 += 2;
        v18 += 2;
      }
      while ( v18 != a2 );
      v17 = (_QWORD *)a1[1];
    }
    v23 = (char *)v12;
    if ( a2 != v17 )
    {
      v21 = (char *)a2 - v13 - (char *)v12;
      do
      {
        *v15 = 0LL;
        v15[1] = 0LL;
        *v15 = *(_QWORD *)((char *)v15 + v21 - 16);
        v15[1] = *(_QWORD *)((char *)v15 + v21 - 8);
        *(_QWORD *)((char *)v15 + v21 - 16) = 0LL;
        *(_QWORD *)((char *)v15 + v21 - 8) = 0LL;
        v15 += 2;
      }
      while ( (_QWORD *)((char *)v15 + v21 - 16) != v17 );
    }
  }
  sub_1800126C4(a1, v12, v8, v11, v23, v11, a1, (char *)v12 + v13 + 16, v12);
  return v13 + *a1;
}
