/*
 * XREFs of sub_180069D50 @ 0x180069D50
 * Callers:
 *     sub_18006B958 @ 0x18006B958 (sub_18006B958.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010BD8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18006AC88 @ 0x18006AC88 (sub_18006AC88.c)
 *     sub_18006AD74 @ 0x18006AD74 (sub_18006AD74.c)
 *     sub_18006D110 @ 0x18006D110 (sub_18006D110.c)
 *     sub_18006D528 @ 0x18006D528 (sub_18006D528.c)
 */

__int64 __fastcall sub_180069D50(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  __int64 v6; // rbx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r14
  __int64 v12; // r12
  __int64 v13; // rbx
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v21; // [rsp+20h] [rbp-98h]
  __int64 v22; // [rsp+28h] [rbp-90h]
  __int64 v23; // [rsp+28h] [rbp-90h]
  _QWORD *v24; // [rsp+30h] [rbp-88h]
  __int64 v25; // [rsp+48h] [rbp-70h]
  unsigned __int64 v26; // [rsp+50h] [rbp-68h]
  __int64 v27; // [rsp+58h] [rbp-60h]

  v4 = a2;
  v6 = (a2 - *a1) / 152;
  v7 = (__int64)((unsigned __int128)((__int64)(a1[1] - *a1) * (__int128)0x6BCA1AF286BCA1BLL) >> 64) >> 2;
  v8 = (v7 >> 63) + v7;
  v26 = v8;
  if ( v8 == 0x1AF286BCA1AF286LL )
    std::vector<void *>::_Xlen();
  v9 = (a1[2] - *a1) / 152LL;
  v10 = v9 >> 1;
  if ( v9 <= 0x1AF286BCA1AF286LL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 + 1 )
      v11 = v8 + 1;
  }
  else
  {
    v11 = v8 + 1;
  }
  v12 = sub_18006D528(a1, v11);
  v27 = 152 * v6;
  v13 = 152 * v6 + v12;
  v14 = v13 + 152;
  sub_18006AC88(v13, a3);
  v15 = a1[1];
  v25 = v15;
  v16 = *a1;
  v24 = a1;
  v21 = v12;
  if ( v4 == v15 )
  {
    v17 = v12;
    v22 = v12;
    while ( v16 != v15 )
    {
      sub_18006AD74(v17, v16);
      v17 += 152LL;
      v22 = v17;
      v16 += 152LL;
      v15 = v25;
    }
  }
  else
  {
    v18 = v12;
    v23 = v12;
    while ( v16 != v4 )
    {
      sub_18006AC88(v18, v16);
      v18 = v23 + 152;
      v23 += 152LL;
      v16 += 152LL;
    }
    v19 = a1[1];
    v21 = v14;
    v22 = v14;
    v24 = a1;
    while ( v4 != v19 )
    {
      sub_18006AC88(v14, v4);
      v14 += 152LL;
      v22 = v14;
      v4 += 152LL;
    }
  }
  sub_18006D110(a1, v12, v26 + 1, v11, v21, v22, v24);
  return v27 + *a1;
}
