/*
 * XREFs of sub_1800F0E44 @ 0x1800F0E44
 * Callers:
 *     sub_1800F15C4 @ 0x1800F15C4 (sub_1800F15C4.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010BD8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_1800E9C98 @ 0x1800E9C98 (sub_1800E9C98.c)
 *     sub_1800F14CC @ 0x1800F14CC (sub_1800F14CC.c)
 *     sub_1800F3598 @ 0x1800F3598 (sub_1800F3598.c)
 */

__int64 __fastcall sub_1800F0E44(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  __int64 v6; // rdx
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbx
  _QWORD *v11; // rax
  _QWORD *v12; // r14
  _QWORD *v13; // rdi
  _QWORD *v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 result; // rax
  _QWORD *v18; // [rsp+20h] [rbp-78h]
  __int64 v21; // [rsp+40h] [rbp-58h]
  __int64 v22; // [rsp+50h] [rbp-48h]

  v5 = (a2 - *a1) / 56;
  v6 = (a1[1] - *a1) / 56;
  if ( v6 == 0x492492492492492LL )
    std::vector<void *>::_Xlen();
  v7 = v6 + 1;
  v8 = (a1[2] - *a1) / 56;
  v9 = v8 >> 1;
  if ( v8 <= 0x492492492492492LL - (v8 >> 1) )
  {
    v10 = v9 + v8;
    if ( v9 + v8 < v7 )
      v10 = v7;
  }
  else
  {
    v10 = v7;
  }
  v11 = sub_1800E9C98((__int64)a1, v10);
  v12 = v11;
  v22 = (__int64)v11;
  v21 = 56 * v5;
  v13 = &v11[7 * v5];
  v14 = v13 + 7;
  v13[2] = 0LL;
  v13[3] = 0LL;
  try
  {
    sub_180020B7C(v13, a3);
    *((_WORD *)v13 + 16) = *(_WORD *)(a3 + 32);
    *((_DWORD *)v13 + 9) = *(_DWORD *)(a3 + 36);
    *((_DWORD *)v13 + 10) = *(_DWORD *)(a3 + 40);
    *((_DWORD *)v13 + 11) = *(_DWORD *)(a3 + 44);
    *((_DWORD *)v13 + 12) = *(_DWORD *)(a3 + 48);
    v18 = v13;
    v15 = a1[1];
    v16 = *a1;
    if ( a2 == v15 )
    {
      v14 = v12;
    }
    else
    {
      sub_1800F14CC(v16, a2, v12, a1);
      v18 = v12;
      v15 = a1[1];
      v16 = a2;
    }
    sub_1800F14CC(v16, v15, v14, a1);
    sub_1800F3598(a1, v12, v7, v10);
    result = v21 + *a1;
  }
  catch ( ... )
  {
    sub_1800F375C(a1, v18, v13 + 7);
    sub_1800814CC((__int64)a1, v22, v10);
    throw;
  }
  return result;
}
