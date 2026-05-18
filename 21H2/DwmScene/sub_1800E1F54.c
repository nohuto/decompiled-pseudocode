/*
 * XREFs of sub_1800E1F54 @ 0x1800E1F54
 * Callers:
 *     sub_1800E231C @ 0x1800E231C (sub_1800E231C.c)
 *     sub_1800E278C @ 0x1800E278C (sub_1800E278C.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010BD8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_1800E2990 @ 0x1800E2990 (sub_1800E2990.c)
 *     sub_1800E2B18 @ 0x1800E2B18 (sub_1800E2B18.c)
 *     sub_18010AE58 @ 0x18010AE58 (sub_18010AE58.c)
 */

// Hidden C++ exception states: #wind=3
unsigned __int64 __fastcall sub_1800E1F54(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // r13
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // r15
  __int64 v17; // rbx
  unsigned __int64 result; // rax
  __int64 v19; // [rsp+20h] [rbp-98h]
  __int64 v20; // [rsp+28h] [rbp-90h]
  _QWORD *v21; // [rsp+30h] [rbp-88h]
  unsigned __int64 v22; // [rsp+38h] [rbp-80h]
  __int64 v23; // [rsp+48h] [rbp-70h]
  __int64 v24; // [rsp+50h] [rbp-68h]
  __int64 v25; // [rsp+58h] [rbp-60h]
  unsigned __int64 v26; // [rsp+60h] [rbp-58h]
  unsigned __int64 v27; // [rsp+68h] [rbp-50h]

  v2 = a2;
  v4 = a2 - *a1;
  v5 = (__int64)(a1[1] - *a1) >> 7;
  v25 = v5;
  if ( v5 == 0x1FFFFFFFFFFFFFFLL )
    std::vector<void *>::_Xlen();
  v6 = v5 + 1;
  v7 = (__int64)(a1[2] - *a1) >> 7;
  v8 = v7 >> 1;
  if ( v7 <= 0x1FFFFFFFFFFFFFFLL - (v7 >> 1) )
  {
    v9 = v8 + v7;
    if ( v8 + v7 < v6 )
      v9 = v6;
  }
  else
  {
    v9 = v6;
  }
  v10 = sub_1800E2B18(a1, v9);
  v11 = v10;
  v23 = v10;
  v26 = v4 & 0xFFFFFFFFFFFFFF80uLL;
  v12 = v10 + (v4 & 0xFFFFFFFFFFFFFF80uLL);
  v13 = v12 + 128;
  v27 = v12 + 128;
  try
  {
    ((void (*)(void))sub_18010AE58)();
    v22 = v12;
    v14 = a1[1];
    v24 = v14;
    v15 = *a1;
    v21 = a1;
    v19 = v11;
    v20 = v11;
    if ( v2 == v14 )
    {
      v16 = v11;
      while ( v15 != v14 )
      {
        sub_18010AE58(v16, v15);
        v16 += 128LL;
        v20 = v16;
        v15 += 128LL;
        v14 = v24;
      }
    }
    else
    {
      while ( v15 != v2 )
      {
        sub_18010AE58(v11, v15);
        v11 += 128LL;
        v15 += 128LL;
      }
      v11 = v23;
      v22 = v23;
      v17 = a1[1];
      v19 = v13;
      v20 = v13;
      v21 = a1;
      while ( v2 != v17 )
      {
        sub_18010AE58(v13, v2);
        v13 += 128LL;
        v20 = v13;
        v2 += 128LL;
      }
    }
    sub_1800E2990(a1, v11, v25 + 1, v9, v19, v20, v21);
    result = v26 + *a1;
  }
  catch ( ... )
  {
    sub_1800E2A48(a1, v22, v27);
    sub_1800E2B88(a1, v23, v9);
    throw;
  }
  return result;
}
