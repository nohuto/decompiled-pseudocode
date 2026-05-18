/*
 * XREFs of sub_180018074 @ 0x180018074
 * Callers:
 *     sub_18001703C @ 0x18001703C (sub_18001703C.c)
 *     sub_18001E08C @ 0x18001E08C (sub_18001E08C.c)
 *     sub_18001E2D4 @ 0x18001E2D4 (sub_18001E2D4.c)
 *     sub_18001E51C @ 0x18001E51C (sub_18001E51C.c)
 *     sub_18001E764 @ 0x18001E764 (sub_18001E764.c)
 *     sub_18001E9AC @ 0x18001E9AC (sub_18001E9AC.c)
 *     sub_18006B620 @ 0x18006B620 (sub_18006B620.c)
 *     sub_180072CA0 @ 0x180072CA0 (sub_180072CA0.c)
 *     sub_1800A41CC @ 0x1800A41CC (sub_1800A41CC.c)
 *     sub_1800F411C @ 0x1800F411C (sub_1800F411C.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010AF8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_180010B0C @ 0x180010B0C (sub_180010B0C.c)
 *     sub_1800125E4 @ 0x1800125E4 (sub_1800125E4.c)
 */

unsigned __int64 __fastcall sub_180018074(__int64 *a1, _QWORD *a2, _QWORD *a3)
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
  _QWORD *v16; // r8
  _QWORD *v17; // rcx
  _QWORD *v18; // rdx
  _QWORD *v19; // r9
  unsigned __int64 v20; // rbx

  v6 = (unsigned __int64)a2 - *a1;
  v7 = (a1[1] - *a1) >> 4;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::vector<void *>::_Xlen();
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) >> 4;
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
  v12 = sub_180010B0C((__int64)a1, v11);
  v13 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
  v14 = (_QWORD *)((char *)v12 + v13);
  v15 = (_QWORD *)((char *)v12 + v13 + 16);
  *v14 = 0LL;
  v14[1] = 0LL;
  *v14 = *a3;
  v14[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  v16 = (_QWORD *)a1[1];
  v17 = (_QWORD *)*a1;
  if ( a2 == v16 )
  {
    v18 = v12;
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
    v19 = v12;
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
    if ( a2 != v16 )
    {
      v20 = (char *)a2 - v13 - (char *)v12;
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
  sub_1800125E4(a1, (__int64)v12, v8, v11);
  return v13 + *a1;
}
