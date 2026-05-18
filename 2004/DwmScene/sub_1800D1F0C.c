/*
 * XREFs of sub_1800D1F0C @ 0x1800D1F0C
 * Callers:
 *     sub_1800D3808 @ 0x1800D3808 (sub_1800D3808.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010AF8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     sub_1800AE260 @ 0x1800AE260 (sub_1800AE260.c)
 *     sub_1800D4B50 @ 0x1800D4B50 (sub_1800D4B50.c)
 *     sub_1800D4F68 @ 0x1800D4F68 (sub_1800D4F68.c)
 */

__int64 __fastcall sub_1800D1F0C(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // r14
  __int64 v6; // rdx
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdi
  _QWORD *v11; // rax
  _QWORD *v12; // r15
  __int64 v13; // r12
  _QWORD *v14; // r14
  _QWORD *v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // rbx
  __int64 result; // rax
  _QWORD *v21; // [rsp+20h] [rbp-68h]
  __int64 v24; // [rsp+48h] [rbp-40h]

  v5 = ((__int64)a2 - *a1) / 48;
  v6 = (a1[1] - *a1) / 48LL;
  if ( v6 == 0x555555555555555LL )
    std::vector<void *>::_Xlen();
  v7 = v6 + 1;
  v8 = (a1[2] - *a1) / 48LL;
  v9 = v8 >> 1;
  if ( v8 <= 0x555555555555555LL - (v8 >> 1) )
  {
    v10 = v9 + v8;
    if ( v9 + v8 < v7 )
      v10 = v7;
  }
  else
  {
    v10 = v7;
  }
  v11 = sub_1800AE260((__int64)a1, v10);
  v12 = v11;
  v24 = (__int64)v11;
  v13 = 48 * v5;
  v14 = &v11[6 * v5];
  v14[2] = 0LL;
  v14[3] = 0LL;
  try
  {
    sub_18001CDF8(v14, a3);
    v14[4] = *(_QWORD *)(a3 + 32);
    v14[5] = *(_QWORD *)(a3 + 40);
    v21 = v14;
    v15 = (_QWORD *)a1[1];
    v16 = *a1;
    if ( a2 == v15 )
    {
      sub_1800D4F68(a1, *a1, a1[1], v12);
    }
    else
    {
      if ( (_QWORD *)v16 != a2 )
      {
        v17 = v12 + 3;
        do
        {
          *(v17 - 1) = 0LL;
          *v17 = 0LL;
          *(_OWORD *)(v17 - 3) = *(_OWORD *)v16;
          *(_OWORD *)(v17 - 1) = *(_OWORD *)(v16 + 16);
          *(_QWORD *)(v16 + 16) = 0LL;
          *(_QWORD *)(v16 + 24) = 15LL;
          *(_BYTE *)v16 = 0;
          v17[1] = *(_QWORD *)(v16 + 32);
          v17[2] = *(_QWORD *)(v16 + 40);
          v17 += 6;
          v16 += 48LL;
        }
        while ( (_QWORD *)v16 != a2 );
        v15 = (_QWORD *)a1[1];
      }
      v21 = v12;
      if ( a2 != v15 )
      {
        v18 = v14 + 9;
        v19 = (char *)&a2[v13 / 0xFFFFFFFFFFFFFFF8uLL] - (char *)v12;
        do
        {
          *(v18 - 1) = 0LL;
          *v18 = 0LL;
          *(_OWORD *)(v18 - 3) = *(_OWORD *)((char *)v18 + v19 - 72);
          *(_OWORD *)(v18 - 1) = *(_OWORD *)((char *)v18 + v19 - 56);
          *(_QWORD *)((char *)v18 + v19 - 56) = 0LL;
          *(_QWORD *)((char *)v18 + v19 - 48) = 15LL;
          *((_BYTE *)v18 + v19 - 72) = 0;
          v18[1] = *(_QWORD *)((char *)v18 + v19 - 40);
          v18[2] = *(_QWORD *)((char *)v18 + v19 - 32);
          v18 += 6;
        }
        while ( (_QWORD *)((char *)v18 + v19 - 72) != v15 );
      }
    }
    sub_1800D4B50(a1, v12, v7, v10);
    result = v13 + *a1;
  }
  catch ( ... )
  {
    sub_1800D4C30(a1, v21, v14 + 6);
    sub_1800AE34C((__int64)a1, v24, v10);
    throw;
  }
  return result;
}
