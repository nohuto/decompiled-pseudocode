/*
 * XREFs of sub_18001851C @ 0x18001851C
 * Callers:
 *     sub_18001727C @ 0x18001727C (sub_18001727C.c)
 *     sub_18002395C @ 0x18002395C (sub_18002395C.c)
 *     sub_180023BA4 @ 0x180023BA4 (sub_180023BA4.c)
 *     sub_180023DEC @ 0x180023DEC (sub_180023DEC.c)
 *     sub_180024034 @ 0x180024034 (sub_180024034.c)
 *     sub_18002427C @ 0x18002427C (sub_18002427C.c)
 *     sub_180070EF0 @ 0x180070EF0 (sub_180070EF0.c)
 *     sub_180078570 @ 0x180078570 (sub_180078570.c)
 *     sub_1800A9A9C @ 0x1800A9A9C (sub_1800A9A9C.c)
 *     sub_1800F99EC @ 0x1800F99EC (sub_1800F99EC.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010BD8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_180010BEC @ 0x180010BEC (sub_180010BEC.c)
 *     sub_1800126C4 @ 0x1800126C4 (sub_1800126C4.c)
 */

unsigned __int64 __fastcall sub_18001851C(__int64 *a1, _QWORD *a2, _QWORD *a3)
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
  v12 = sub_180010BEC((__int64)a1, v11);
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
  sub_1800126C4(a1, (__int64)v12, v8, v11);
  return v13 + *a1;
}
