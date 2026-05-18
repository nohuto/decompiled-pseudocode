/*
 * XREFs of sub_1800EB700 @ 0x1800EB700
 * Callers:
 *     sub_1800EBD68 @ 0x1800EBD68 (sub_1800EBD68.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010AF8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_1800EBC80 @ 0x1800EBC80 (sub_1800EBC80.c)
 *     sub_1800EDD9C @ 0x1800EDD9C (sub_1800EDD9C.c)
 *     sub_1800EE068 @ 0x1800EE068 (sub_1800EE068.c)
 */

__int64 __fastcall sub_1800EB700(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r12
  __int64 v6; // rdx
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // r13
  __int64 v13; // rcx
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx

  v5 = (a2 - *a1) / 40;
  v6 = (a1[1] - *a1) / 40;
  if ( v6 == 0x666666666666666LL )
    std::vector<void *>::_Xlen();
  v7 = v6 + 1;
  v8 = (a1[2] - *a1) / 40;
  v9 = v8 >> 1;
  if ( v8 <= 0x666666666666666LL - (v8 >> 1) )
  {
    v10 = v9 + v8;
    if ( v9 + v8 < v7 )
      v10 = v7;
  }
  else
  {
    v10 = v7;
  }
  v11 = sub_1800EE068(a1, v10);
  v12 = 5 * v5;
  v13 = v11 + 40 * v5;
  v14 = v13 + 40;
  *(_QWORD *)v13 = 0LL;
  *(_QWORD *)(v13 + 8) = 0LL;
  v15 = *(_QWORD *)(a3 + 8);
  if ( v15 )
    _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
  *(_QWORD *)v13 = *(_QWORD *)a3;
  *(_QWORD *)(v13 + 8) = *(_QWORD *)(a3 + 8);
  *(_QWORD *)(v13 + 16) = 0LL;
  *(_QWORD *)(v13 + 24) = 0LL;
  v16 = *(_QWORD *)(a3 + 24);
  if ( v16 )
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
  *(_QWORD *)(v13 + 16) = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(v13 + 24) = *(_QWORD *)(a3 + 24);
  *(_DWORD *)(v13 + 32) = *(_DWORD *)(a3 + 32);
  v17 = a1[1];
  v18 = *a1;
  if ( a2 == v17 )
  {
    v14 = v11;
  }
  else
  {
    sub_1800EBC80(v18, a2, v11, a1);
    v17 = a1[1];
    v18 = a2;
  }
  sub_1800EBC80(v18, v17, v14, a1);
  sub_1800EDD9C(a1, v11, v7, v10);
  return *a1 + 8 * v12;
}
