/*
 * XREFs of sub_1800A6374 @ 0x1800A6374
 * Callers:
 *     sub_1800A7C5C @ 0x1800A7C5C (sub_1800A7C5C.c)
 *     sub_18011CBE8 @ 0x18011CBE8 (sub_18011CBE8.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010AF8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18001269C @ 0x18001269C (sub_18001269C.c)
 *     sub_180031970 @ 0x180031970 (sub_180031970.c)
 *     sub_1800ADECC @ 0x1800ADECC (sub_1800ADECC.c)
 */

unsigned __int64 __fastcall sub_1800A6374(__int64 *a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // r12
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  __int64 *v11; // rax
  __int64 *v12; // r14
  unsigned __int64 v13; // r12
  __int64 *v14; // r15
  _QWORD *v15; // rdx
  __int64 v16; // rax
  _QWORD *v17; // rcx
  _QWORD *v18; // rcx
  _QWORD *v19; // rcx
  unsigned __int64 v20; // rbx
  unsigned __int64 result; // rax
  __int64 *v22; // [rsp+20h] [rbp-68h]
  __int64 *v25; // [rsp+40h] [rbp-48h]
  __int64 v26; // [rsp+48h] [rbp-40h]

  v5 = (__int64)a2 - *a1;
  v6 = (a1[1] - *a1) >> 5;
  if ( v6 == 0x7FFFFFFFFFFFFFFLL )
    std::vector<void *>::_Xlen();
  v7 = v6 + 1;
  v8 = (a1[2] - *a1) >> 5;
  v9 = v8 >> 1;
  if ( v8 <= 0x7FFFFFFFFFFFFFFLL - (v8 >> 1) )
  {
    v10 = v9 + v8;
    if ( v9 + v8 < v7 )
      v10 = v7;
  }
  else
  {
    v10 = v7;
  }
  v11 = sub_180031970((__int64)a1, v10);
  v12 = v11;
  v26 = (__int64)v11;
  v13 = v5 & 0xFFFFFFFFFFFFFFE0uLL;
  v14 = (__int64 *)((char *)v11 + v13);
  v25 = (__int64 *)((char *)v11 + v13 + 32);
  v14[2] = 0LL;
  v14[3] = 0LL;
  try
  {
    sub_18001269C((__int64 *)((char *)v11 + v13), a3);
    v22 = v14;
    v15 = (_QWORD *)a1[1];
    v16 = *a1;
    if ( a2 == v15 )
    {
      if ( (_QWORD *)v16 != v15 )
      {
        v17 = v12 + 3;
        do
        {
          *(v17 - 1) = 0LL;
          *v17 = 0LL;
          *(_OWORD *)(v17 - 3) = *(_OWORD *)v16;
          *(_OWORD *)(v17 - 1) = *(_OWORD *)(v16 + 16);
          *(_QWORD *)(v16 + 16) = 0LL;
          *(_QWORD *)(v16 + 24) = 7LL;
          *(_WORD *)v16 = 0;
          v17 += 4;
          v16 += 32LL;
        }
        while ( (_QWORD *)v16 != v15 );
      }
    }
    else
    {
      if ( (_QWORD *)v16 != a2 )
      {
        v18 = v12 + 3;
        do
        {
          *(v18 - 1) = 0LL;
          *v18 = 0LL;
          *(_OWORD *)(v18 - 3) = *(_OWORD *)v16;
          *(_OWORD *)(v18 - 1) = *(_OWORD *)(v16 + 16);
          *(_QWORD *)(v16 + 16) = 0LL;
          *(_QWORD *)(v16 + 24) = 7LL;
          *(_WORD *)v16 = 0;
          v18 += 4;
          v16 += 32LL;
        }
        while ( (_QWORD *)v16 != a2 );
        v15 = (_QWORD *)a1[1];
      }
      v22 = v12;
      if ( a2 != v15 )
      {
        v19 = v14 + 7;
        v20 = (char *)a2 - v13 - (char *)v12;
        do
        {
          *(v19 - 1) = 0LL;
          *v19 = 0LL;
          *(_OWORD *)(v19 - 3) = *(_OWORD *)((char *)v19 + v20 - 56);
          *(_OWORD *)(v19 - 1) = *(_OWORD *)((char *)v19 + v20 - 40);
          *(_QWORD *)((char *)v19 + v20 - 40) = 0LL;
          *(_QWORD *)((char *)v19 + v20 - 32) = 7LL;
          *(_WORD *)((char *)v19 + v20 - 56) = 0;
          v19 += 4;
        }
        while ( (_QWORD *)((char *)v19 + v20 - 56) != v15 );
      }
    }
    sub_1800ADECC(a1, v12, v7, v10);
    result = v13 + *a1;
  }
  catch ( ... )
  {
    sub_18006BAD4((__int64)a1, v22, v25);
    sub_1800319E0((__int64)a1, v26, v10);
    throw;
  }
  return result;
}
