/*
 * XREFs of sub_180069B94 @ 0x180069B94
 * Callers:
 *     sub_18006C7E0 @ 0x18006C7E0 (sub_18006C7E0.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010BD8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18002C3EC @ 0x18002C3EC (sub_18002C3EC.c)
 *     sub_18006A668 @ 0x18006A668 (sub_18006A668.c)
 *     sub_18006D200 @ 0x18006D200 (sub_18006D200.c)
 *     sub_18006D598 @ 0x18006D598 (sub_18006D598.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
unsigned __int64 __fastcall sub_180069B94(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r15
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r13
  unsigned __int64 v14; // r14
  __int64 v15; // rdi
  __int64 (__fastcall ***v16)(_QWORD, unsigned __int64); // rcx
  __int64 v17; // rdx
  __int64 v18; // r12
  __int64 v19; // r14
  __int64 v20; // r14
  unsigned __int64 result; // rax
  unsigned __int64 v22; // [rsp+20h] [rbp-98h]
  __int64 v23; // [rsp+50h] [rbp-68h]
  unsigned __int64 v24; // [rsp+58h] [rbp-60h]
  unsigned __int64 v25; // [rsp+60h] [rbp-58h]
  __int64 v27; // [rsp+70h] [rbp-48h]

  v4 = a2;
  v6 = a2 - *a1;
  v7 = (a1[1] - *a1) >> 6;
  if ( v7 == 0x3FFFFFFFFFFFFFFLL )
    std::vector<void *>::_Xlen();
  v8 = v7 + 1;
  v23 = v7 + 1;
  v9 = (a1[2] - *a1) >> 6;
  v10 = v9 >> 1;
  if ( v9 <= 0x3FFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = sub_18006D598(a1, v11);
  try
  {
    v13 = v12;
    v27 = v12;
    v24 = v6 & 0xFFFFFFFFFFFFFFC0uLL;
    v14 = (v6 & 0xFFFFFFFFFFFFFFC0uLL) + v12;
    v15 = v14 + 64;
    v25 = v14 + 64;
    *(_QWORD *)(v14 + 56) = 0LL;
    v16 = *(__int64 (__fastcall ****)(_QWORD, unsigned __int64))(a3 + 56);
    if ( v16 )
      *(_QWORD *)(v14 + 56) = (**v16)(v16, v14);
    v22 = v14;
    v17 = a1[1];
    v18 = *a1;
    if ( v4 == v17 )
    {
      sub_18006A668(*a1, v17, v13, a1);
    }
    else
    {
      v19 = v13;
      while ( v18 != v4 )
      {
        *(_QWORD *)(v19 + 56) = 0LL;
        sub_18002C3EC(v19, v18);
        v19 += 64LL;
        v18 += 64LL;
      }
      v22 = v13;
      v20 = a1[1];
      while ( v4 != v20 )
      {
        *(_QWORD *)(v15 + 56) = 0LL;
        sub_18002C3EC(v15, v4);
        v15 += 64LL;
        v4 += 64LL;
      }
    }
    sub_18006D200(a1, v13, v23, v11);
    result = v24 + *a1;
  }
  catch ( ... )
  {
    sub_18006D330(a1, v22, v25);
    sub_18006D6C8(a1, v27, v11);
    throw;
  }
  return result;
}
