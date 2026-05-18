/*
 * XREFs of sub_1800E3C28 @ 0x1800E3C28
 * Callers:
 *     sub_1800E3E90 @ 0x1800E3E90 (sub_1800E3E90.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010AF8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     sub_1800E4268 @ 0x1800E4268 (sub_1800E4268.c)
 *     sub_1800E433C @ 0x1800E433C (sub_1800E433C.c)
 *     sub_1800E43C8 @ 0x1800E43C8 (sub_1800E43C8.c)
 */

__int64 __fastcall sub_1800E3C28(_QWORD *a1, _DWORD *a2, _DWORD *a3, __int64 a4, __int64 *a5, __int64 *a6)
{
  __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // rax
  _QWORD *v15; // r13
  _QWORD *v16; // r12
  __int64 v17; // rbx
  __int64 v18; // rdi
  _QWORD *v19; // rdx
  _DWORD *v20; // r10
  __int64 v21; // rbx
  __int64 result; // rax
  _DWORD *v23; // rdx
  _QWORD *v24; // rcx
  _QWORD *v25; // rcx
  signed __int64 v26; // rsi
  __int64 v27; // [rsp+20h] [rbp-88h]
  _QWORD *v28; // [rsp+28h] [rbp-80h]
  unsigned __int64 v32; // [rsp+50h] [rbp-58h]
  __int64 v33; // [rsp+60h] [rbp-48h]

  v8 = ((__int64)a2 - *a1) / 56;
  v9 = (__int64)((unsigned __int128)((__int64)(a1[1] - *a1) * (__int128)0x4924924924924925LL) >> 64) >> 4;
  v10 = (v9 >> 63) + v9;
  v32 = v10;
  if ( v10 == 0x492492492492492LL )
    std::vector<void *>::_Xlen();
  v11 = (a1[2] - *a1) / 56LL;
  v12 = v11 >> 1;
  if ( v11 <= 0x492492492492492LL - (v11 >> 1) )
  {
    v13 = v12 + v11;
    if ( v12 + v11 < v10 + 1 )
      v13 = v10 + 1;
  }
  else
  {
    v13 = v10 + 1;
  }
  v14 = sub_1800E43C8(a1, v13);
  v15 = (_QWORD *)v14;
  v33 = v14;
  v27 = 56 * v8;
  v16 = (_QWORD *)(56 * v8 + v14);
  v17 = *a6;
  v18 = *a5;
  *(_DWORD *)v16 = *a3;
  v16[3] = 0LL;
  v16[4] = 0LL;
  try
  {
    sub_18001CDF8(v16 + 1, a4);
    v16[5] = v18;
    v16[6] = v17;
    v28 = v16;
    v19 = (_QWORD *)a1[1];
    v20 = (_DWORD *)*a1;
    if ( a2 == (_DWORD *)v19 )
    {
      sub_1800E433C(a1, *a1, a1[1], v15);
    }
    else
    {
      if ( v20 != a2 )
      {
        v23 = v20 + 2;
        v24 = v15 + 4;
        do
        {
          *((_DWORD *)v24 - 8) = *v20;
          *(v24 - 1) = 0LL;
          *v24 = 0LL;
          *(_OWORD *)(v24 - 3) = *(_OWORD *)v23;
          *(_OWORD *)(v24 - 1) = *((_OWORD *)v23 + 1);
          *((_QWORD *)v23 + 2) = 0LL;
          *((_QWORD *)v23 + 3) = 15LL;
          *(_BYTE *)v23 = 0;
          v24[1] = *((_QWORD *)v23 + 4);
          v24[2] = *((_QWORD *)v23 + 5);
          v24 += 7;
          v20 += 14;
          v23 += 14;
        }
        while ( v20 != a2 );
        v19 = (_QWORD *)a1[1];
      }
      v28 = v15;
      if ( a2 != (_DWORD *)v19 )
      {
        v25 = v16 + 11;
        v21 = v27;
        v26 = (char *)&a2[v27 / 0xFFFFFFFFFFFFFFFCuLL] - (char *)v15;
        do
        {
          *((_DWORD *)v25 - 8) = *(_DWORD *)((char *)v25 + v26 - 88);
          *(v25 - 1) = 0LL;
          *v25 = 0LL;
          *(_OWORD *)(v25 - 3) = *(_OWORD *)((char *)v25 + v26 - 80);
          *(_OWORD *)(v25 - 1) = *(_OWORD *)((char *)v25 + v26 - 64);
          *(_QWORD *)((char *)v25 + v26 - 64) = 0LL;
          *(_QWORD *)((char *)v25 + v26 - 56) = 15LL;
          *((_BYTE *)v25 + v26 - 80) = 0;
          v25[1] = *(_QWORD *)((char *)v25 + v26 - 48);
          v25[2] = *(_QWORD *)((char *)v25 + v26 - 40);
          v25 += 7;
        }
        while ( (_QWORD *)((char *)v25 + v26 - 88) != v19 );
        goto LABEL_10;
      }
    }
    v21 = v27;
LABEL_10:
    sub_1800E4268(a1, v15, v32 + 1, v13);
    result = v21 + *a1;
  }
  catch ( ... )
  {
    sub_18007B51C((__int64)a1, v28, v16 + 7);
    sub_18007BBFC((__int64)a1, v33, v13);
    throw;
  }
  return result;
}
