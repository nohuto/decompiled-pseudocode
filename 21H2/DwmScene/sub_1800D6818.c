/*
 * XREFs of sub_1800D6818 @ 0x1800D6818
 * Callers:
 *     sub_1800D6704 @ 0x1800D6704 (sub_1800D6704.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010BD8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18006AD74 @ 0x18006AD74 (sub_18006AD74.c)
 *     sub_18006AE58 @ 0x18006AE58 (sub_18006AE58.c)
 *     sub_18006D528 @ 0x18006D528 (sub_18006D528.c)
 *     memset @ 0x18012396A (memset.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800D6818(__int64 *a1, unsigned __int64 a2)
{
  __int64 v4; // r13
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdi
  _QWORD *v8; // r12
  __int64 *v9; // rbx
  unsigned __int64 v10; // r15
  __int64 v11; // r13
  __int64 v12; // r15
  __int64 v13; // rbx
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 *v17; // rcx
  __int64 v19; // rax
  __int64 *v20; // [rsp+38h] [rbp-50h]
  __int64 *v22; // [rsp+50h] [rbp-38h]

  if ( a2 > 0x1AF286BCA1AF286LL )
    std::vector<void *>::_Xlen();
  v4 = (a1[1] - *a1) / 152;
  v5 = (a1[2] - *a1) / 152;
  v6 = v5 >> 1;
  if ( v5 <= 0x1AF286BCA1AF286LL - (v5 >> 1) )
  {
    v7 = v6 + v5;
    if ( v6 + v5 < a2 )
      v7 = a2;
  }
  else
  {
    v7 = a2;
  }
  v8 = sub_18006D528((__int64)a1, v7);
  v9 = &v8[19 * v4];
  v22 = v9;
  v10 = a2 - v4;
  try
  {
    while ( v10 )
    {
      memset(v9, 0, 0x98uLL);
      sub_18006AE58((__int64)v9);
      v9 += 19;
      --v10;
    }
    v20 = v9;
    v11 = a1[1];
    v12 = *a1;
    v13 = (__int64)v8;
    while ( v12 != v11 )
    {
      sub_18006AD74(v13, v12);
      v13 += 152LL;
      v12 += 152LL;
    }
    v14 = v7;
    v15 = a2;
    v16 = (__int64)v8;
    v17 = a1;
  }
  catch ( ... )
  {
    sub_18006D2EC((__int64)a1, v22, v20);
    v19 = sub_180010B74((__int64)a1);
    sub_18006D684(v19, (__int64)v8, v7);
    throw;
  }
  return sub_18006D110(v17, v16, v15, v14);
}
