/*
 * XREFs of sub_1800D0F48 @ 0x1800D0F48
 * Callers:
 *     sub_1800D0E34 @ 0x1800D0E34 (sub_1800D0E34.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010AF8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_1800654A4 @ 0x1800654A4 (sub_1800654A4.c)
 *     sub_180065588 @ 0x180065588 (sub_180065588.c)
 *     sub_180067C58 @ 0x180067C58 (sub_180067C58.c)
 *     memset @ 0x18011E09A (memset.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800D0F48(__int64 *a1, unsigned __int64 a2)
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
  v8 = sub_180067C58((__int64)a1, v7);
  v9 = &v8[19 * v4];
  v22 = v9;
  v10 = a2 - v4;
  try
  {
    while ( v10 )
    {
      memset(v9, 0, 0x98uLL);
      sub_180065588((__int64)v9);
      v9 += 19;
      --v10;
    }
    v20 = v9;
    v11 = a1[1];
    v12 = *a1;
    v13 = (__int64)v8;
    while ( v12 != v11 )
    {
      sub_1800654A4(v13, v12);
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
    sub_180067A1C((__int64)a1, v22, v20);
    v19 = sub_180010A94((__int64)a1);
    sub_180067DB4(v19, (__int64)v8, v7);
    throw;
  }
  return sub_180067840(v17, v16, v15, v14);
}
