/*
 * XREFs of sub_18009E8D4 @ 0x18009E8D4
 * Callers:
 *     sub_18009EAF4 @ 0x18009EAF4 (sub_18009EAF4.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010BD8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_180037240 @ 0x180037240 (sub_180037240.c)
 *     sub_1800474B8 @ 0x1800474B8 (sub_1800474B8.c)
 */

unsigned __int64 __fastcall sub_18009E8D4(
        __int64 *a1,
        char *a2,
        _QWORD *a3,
        __int64 *a4,
        int *a5,
        int *a6,
        int *a7,
        int *a8)
{
  char *v10; // rbx
  unsigned __int64 v12; // r14
  __int64 v13; // rax
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdi
  _QWORD *v18; // r11
  unsigned __int64 v19; // r14
  int v20; // r10d
  int v21; // r9d
  int v22; // r8d
  int v23; // edx
  __int64 v24; // rcx
  char *v25; // rcx
  char *v26; // rax
  _OWORD *v27; // rdx
  signed __int64 v28; // rax

  v10 = a2;
  v12 = (unsigned __int64)&a2[-*a1];
  v13 = (a1[1] - *a1) >> 5;
  if ( v13 == 0x7FFFFFFFFFFFFFFLL )
    std::vector<void *>::_Xlen();
  v14 = v13 + 1;
  v15 = (a1[2] - *a1) >> 5;
  v16 = v15 >> 1;
  if ( v15 <= 0x7FFFFFFFFFFFFFFLL - (v15 >> 1) )
  {
    v17 = v16 + v15;
    if ( v16 + v15 < v14 )
      v17 = v14;
  }
  else
  {
    v17 = v14;
  }
  v18 = sub_180037240((__int64)a1, v17);
  v19 = v12 & 0xFFFFFFFFFFFFFFE0uLL;
  v20 = *a8;
  v21 = *a7;
  v22 = *a6;
  v23 = *a5;
  v24 = *a4;
  *(_QWORD *)((char *)v18 + v19) = *a3;
  *(_QWORD *)((char *)v18 + v19 + 8) = v24;
  *(_DWORD *)((char *)v18 + v19 + 16) = v23;
  *(_DWORD *)((char *)v18 + v19 + 20) = v22;
  *(_DWORD *)((char *)v18 + v19 + 24) = v21;
  *(_DWORD *)((char *)v18 + v19 + 28) = v20;
  v25 = (char *)a1[1];
  v26 = (char *)*a1;
  v27 = v18;
  if ( v10 == v25 )
  {
    while ( v26 != v25 )
    {
      *v27 = *(_OWORD *)v26;
      v27[1] = *((_OWORD *)v26 + 1);
      v27 += 2;
      v26 += 32;
    }
  }
  else
  {
    if ( v26 != v10 )
    {
      do
      {
        *v27 = *(_OWORD *)v26;
        v27[1] = *((_OWORD *)v26 + 1);
        v27 += 2;
        v26 += 32;
      }
      while ( v26 != v10 );
      v25 = (char *)a1[1];
    }
    if ( v10 != v25 )
    {
      v28 = (char *)v18 + v19 + 32 - v10;
      do
      {
        *(_OWORD *)&v10[v28] = *(_OWORD *)v10;
        *(_OWORD *)&v10[v28 + 16] = *((_OWORD *)v10 + 1);
        v10 += 32;
      }
      while ( v10 != v25 );
    }
  }
  sub_1800474B8(a1, (__int64)v18, v14, v17);
  return v19 + *a1;
}
