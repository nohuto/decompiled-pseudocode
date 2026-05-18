/*
 * XREFs of sub_1801030C8 @ 0x1801030C8
 * Callers:
 *     sub_180105C94 @ 0x180105C94 (sub_180105C94.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010BD8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_180010BEC @ 0x180010BEC (sub_180010BEC.c)
 */

__int64 __fastcall sub_1801030C8(__int64 *a1, unsigned __int64 a2)
{
  __int64 v4; // r14
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  _DWORD *v11; // rax
  _OWORD *v12; // r8
  _OWORD *v13; // rax
  _OWORD *v14; // rcx

  if ( a2 > 0xFFFFFFFFFFFFFFFLL )
    std::vector<void *>::_Xlen();
  v4 = (a1[1] - *a1) >> 4;
  v5 = (a1[2] - *a1) >> 4;
  v6 = v5 >> 1;
  if ( v5 <= 0xFFFFFFFFFFFFFFFLL - (v5 >> 1) )
  {
    v7 = v6 + v5;
    if ( v6 + v5 < a2 )
      v7 = a2;
  }
  else
  {
    v7 = a2;
  }
  v8 = sub_180010BEC((__int64)a1, v7);
  v9 = (__int64)v8;
  v10 = a2 - v4;
  if ( a2 != v4 )
  {
    v11 = &v8[2 * v4 + 1];
    do
    {
      *((_QWORD *)v11 - 1) = 0LL;
      *v11 = 0;
      v11[1] = 1065353216;
      v11 += 4;
      --v10;
    }
    while ( v10 );
  }
  v12 = (_OWORD *)a1[1];
  v13 = (_OWORD *)*a1;
  v14 = (_OWORD *)v9;
  while ( v13 != v12 )
    *v14++ = *v13++;
  return sub_18003709C(a1, v9, a2, v7);
}
