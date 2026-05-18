/*
 * XREFs of sub_1800EB8A4 @ 0x1800EB8A4
 * Callers:
 *     sub_1800ED4BC @ 0x1800ED4BC (sub_1800ED4BC.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010AF8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18001CCB4 @ 0x18001CCB4 (sub_18001CCB4.c)
 *     sub_18001D118 @ 0x18001D118 (sub_18001D118.c)
 */

__int64 __fastcall sub_1800EB8A4(__int64 *a1, unsigned __int64 a2, _QWORD *a3)
{
  __int64 v6; // r15
  __int64 v7; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  _QWORD *v12; // r11
  unsigned __int64 v13; // r9
  _QWORD *v14; // rdx
  _QWORD *v15; // r10
  __int64 v16; // rcx
  unsigned __int64 v17; // r8
  __int64 v18; // r12
  unsigned __int64 v19; // r8
  _QWORD *v20; // rdx
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // rsi

  v6 = (__int64)(a2 - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<void *>::_Xlen();
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = sub_18001D118((__int64)a1, v11);
  v12[v6] = *a3;
  v13 = a1[1];
  v14 = (_QWORD *)*a1;
  v15 = v12;
  v16 = 0LL;
  if ( a2 == v13 )
  {
    v17 = (v13 - (unsigned __int64)v14 + 7) >> 3;
    if ( (unsigned __int64)v14 > v13 )
      v17 = 0LL;
    if ( v17 )
    {
      do
      {
        *v15++ = *v14++;
        ++v16;
      }
      while ( v16 != v17 );
    }
  }
  else
  {
    v18 = 0LL;
    v19 = (a2 - (unsigned __int64)v14 + 7) >> 3;
    if ( (unsigned __int64)v14 > a2 )
      v19 = 0LL;
    if ( v19 )
    {
      do
      {
        *v15++ = *v14++;
        ++v18;
      }
      while ( v18 != v19 );
      v13 = a1[1];
    }
    v20 = &v12[v6 + 1];
    v21 = (v13 - a2 + 7) >> 3;
    if ( a2 > v13 )
      v21 = 0LL;
    if ( v21 )
    {
      v22 = a2 - (_QWORD)v20;
      do
      {
        *v20 = *(_QWORD *)((char *)v20 + v22);
        ++v20;
        ++v16;
      }
      while ( v16 != v21 );
    }
  }
  sub_18001CCB4(a1, (__int64)v12, v8, v11);
  return *a1 + 8 * v6;
}
