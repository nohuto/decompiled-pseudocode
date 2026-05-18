/*
 * XREFs of sub_1800FAF8C @ 0x1800FAF8C
 * Callers:
 *     sub_1800FB430 @ 0x1800FB430 (sub_1800FB430.c)
 *     sub_1800FBE6C @ 0x1800FBE6C (sub_1800FBE6C.c)
 *     sub_180113810 @ 0x180113810 (sub_180113810.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010BD8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_180020A38 @ 0x180020A38 (sub_180020A38.c)
 *     sub_180020F10 @ 0x180020F10 (sub_180020F10.c)
 */

__int64 __fastcall sub_1800FAF8C(__int64 *a1, char *a2, _QWORD *a3)
{
  char *v4; // rbx
  __int64 v6; // r15
  __int64 v7; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  _QWORD *v12; // rax
  char *v13; // rdx
  char *v14; // rcx
  _QWORD *v15; // r8
  signed __int64 v16; // rcx

  v4 = a2;
  v6 = (__int64)&a2[-*a1] >> 3;
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
  v12 = sub_180020F10((__int64)a1, v11);
  v12[v6] = *a3;
  v13 = (char *)a1[1];
  v14 = (char *)*a1;
  v15 = v12;
  if ( v4 == v13 )
  {
    while ( v14 != v13 )
    {
      *v15++ = *(_QWORD *)v14;
      v14 += 8;
    }
  }
  else
  {
    if ( v14 != v4 )
    {
      do
      {
        *v15++ = *(_QWORD *)v14;
        v14 += 8;
      }
      while ( v14 != v4 );
      v13 = (char *)a1[1];
    }
    if ( v4 != v13 )
    {
      v16 = (char *)&v12[v6 + 1] - v4;
      do
      {
        *(_QWORD *)&v4[v16] = *(_QWORD *)v4;
        v4 += 8;
      }
      while ( v4 != v13 );
    }
  }
  sub_180020A38(a1, (__int64)v12, v8, v11);
  return *a1 + 8 * v6;
}
