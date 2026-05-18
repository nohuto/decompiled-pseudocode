/*
 * XREFs of sub_180069994 @ 0x180069994
 * Callers:
 *     sub_18006B958 @ 0x18006B958 (sub_18006B958.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010BD8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18006AC88 @ 0x18006AC88 (sub_18006AC88.c)
 *     sub_18006AD74 @ 0x18006AD74 (sub_18006AD74.c)
 *     sub_18006D110 @ 0x18006D110 (sub_18006D110.c)
 *     sub_18006D528 @ 0x18006D528 (sub_18006D528.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180069994(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v4; // rbx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r14
  __int64 v10; // r12
  __int64 v11; // rbx
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 result; // rax
  __int64 v19; // [rsp+20h] [rbp-98h]
  __int64 v20; // [rsp+28h] [rbp-90h]
  __int64 v21; // [rsp+28h] [rbp-90h]
  _QWORD *v22; // [rsp+30h] [rbp-88h]
  __int64 v23; // [rsp+38h] [rbp-80h]
  __int64 v24; // [rsp+48h] [rbp-70h]
  unsigned __int64 v25; // [rsp+50h] [rbp-68h]
  __int64 v26; // [rsp+58h] [rbp-60h]
  __int64 v27; // [rsp+60h] [rbp-58h]

  v2 = a2;
  v4 = (a2 - *a1) / 152;
  v5 = (__int64)((unsigned __int128)((__int64)(a1[1] - *a1) * (__int128)0x6BCA1AF286BCA1BLL) >> 64) >> 2;
  v6 = (v5 >> 63) + v5;
  v25 = v6;
  if ( v6 == 0x1AF286BCA1AF286LL )
    std::vector<void *>::_Xlen();
  v7 = (a1[2] - *a1) / 152LL;
  v8 = v7 >> 1;
  if ( v7 <= 0x1AF286BCA1AF286LL - (v7 >> 1) )
  {
    v9 = v8 + v7;
    if ( v8 + v7 < v6 + 1 )
      v9 = v6 + 1;
  }
  else
  {
    v9 = v6 + 1;
  }
  v10 = sub_18006D528(a1, v9);
  v26 = 152 * v4;
  v11 = 152 * v4 + v10;
  v12 = v11 + 152;
  v27 = v11 + 152;
  try
  {
    ((void (*)(void))sub_18006AD74)();
    v23 = v11;
    v13 = a1[1];
    v24 = v13;
    v14 = *a1;
    v22 = a1;
    v19 = v10;
    if ( v2 == v13 )
    {
      v15 = v10;
      v20 = v10;
      while ( v14 != v13 )
      {
        sub_18006AD74(v15, v14);
        v15 += 152LL;
        v20 = v15;
        v14 += 152LL;
        v13 = v24;
      }
    }
    else
    {
      v16 = v10;
      v21 = v10;
      while ( v14 != v2 )
      {
        sub_18006AC88(v16, v14);
        v16 = v21 + 152;
        v21 += 152LL;
        v14 += 152LL;
      }
      v23 = v10;
      v17 = a1[1];
      v19 = v12;
      v20 = v12;
      v22 = a1;
      while ( v2 != v17 )
      {
        sub_18006AC88(v12, v2);
        v12 += 152LL;
        v20 = v12;
        v2 += 152LL;
      }
    }
    sub_18006D110(a1, v10, v25 + 1, v9, v19, v20, v22);
    result = v26 + *a1;
  }
  catch ( ... )
  {
    sub_18006D2EC(a1, v23, v27);
    sub_18006D684(a1, v10, v9);
    throw;
  }
  return result;
}
