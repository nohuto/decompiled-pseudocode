/*
 * XREFs of sub_1800F66D4 @ 0x1800F66D4
 * Callers:
 *     sub_1800F6F64 @ 0x1800F6F64 (sub_1800F6F64.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010BD8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_180010BEC @ 0x180010BEC (sub_180010BEC.c)
 *     sub_18003709C @ 0x18003709C (sub_18003709C.c)
 */

unsigned __int64 __fastcall sub_1800F66D4(__int64 *a1, char *a2, _OWORD *a3)
{
  char *v4; // rbx
  unsigned __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  _QWORD *v12; // rax
  unsigned __int64 v13; // r14
  char *v14; // rdx
  char *v15; // rcx
  _OWORD *v16; // r8
  signed __int64 v17; // rcx

  v4 = a2;
  v6 = (unsigned __int64)&a2[-*a1];
  v7 = (a1[1] - *a1) >> 4;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::vector<void *>::_Xlen();
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) >> 4;
  v10 = v9 >> 1;
  if ( v9 <= 0xFFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = sub_180010BEC((__int64)a1, v11);
  v13 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
  *(_OWORD *)((char *)v12 + v13) = *a3;
  v14 = (char *)a1[1];
  v15 = (char *)*a1;
  v16 = v12;
  if ( v4 == v14 )
  {
    while ( v15 != v14 )
    {
      *v16++ = *(_OWORD *)v15;
      v15 += 16;
    }
  }
  else
  {
    if ( v15 != v4 )
    {
      do
      {
        *v16++ = *(_OWORD *)v15;
        v15 += 16;
      }
      while ( v15 != v4 );
      v14 = (char *)a1[1];
    }
    if ( v4 != v14 )
    {
      v17 = (char *)v12 + v13 + 16 - v4;
      do
      {
        *(_OWORD *)&v4[v17] = *(_OWORD *)v4;
        v4 += 16;
      }
      while ( v4 != v14 );
    }
  }
  sub_18003709C(a1, (__int64)v12, v8, v11);
  return v13 + *a1;
}
