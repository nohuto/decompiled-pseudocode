/*
 * XREFs of sub_180066784 @ 0x180066784
 * Callers:
 *     sub_1800668C4 @ 0x1800668C4 (sub_1800668C4.c)
 *     sub_18006698C @ 0x18006698C (sub_18006698C.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010BD8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_180010BEC @ 0x180010BEC (sub_180010BEC.c)
 *     sub_18003709C @ 0x18003709C (sub_18003709C.c)
 */

unsigned __int64 __fastcall sub_180066784(__int64 *a1, char *a2, _QWORD *a3, _BYTE *a4)
{
  char *v6; // rbx
  unsigned __int64 v8; // r14
  __int64 v9; // r15
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdi
  _QWORD *v14; // rdx
  unsigned __int64 v15; // r14
  char *v16; // rcx
  char *v17; // rax
  _OWORD *v18; // r8
  signed __int64 v19; // rax

  v6 = a2;
  v8 = (unsigned __int64)&a2[-*a1];
  v9 = (a1[1] - *a1) >> 4;
  if ( v9 == 0xFFFFFFFFFFFFFFFLL )
    std::vector<void *>::_Xlen();
  v10 = v9 + 1;
  v11 = (a1[2] - *a1) >> 4;
  v12 = v11 >> 1;
  if ( v11 <= 0xFFFFFFFFFFFFFFFLL - (v11 >> 1) )
  {
    v13 = v12 + v11;
    if ( v12 + v11 < v10 )
      v13 = v10;
  }
  else
  {
    v13 = v10;
  }
  v14 = sub_180010BEC((__int64)a1, v13);
  v15 = v8 & 0xFFFFFFFFFFFFFFF0uLL;
  *(_QWORD *)((char *)v14 + v15) = *a3;
  *((_BYTE *)v14 + v15 + 8) = *a4;
  v16 = (char *)a1[1];
  v17 = (char *)*a1;
  v18 = v14;
  if ( v6 == v16 )
  {
    while ( v17 != v16 )
    {
      *v18++ = *(_OWORD *)v17;
      v17 += 16;
    }
  }
  else
  {
    if ( v17 != v6 )
    {
      do
      {
        *v18++ = *(_OWORD *)v17;
        v17 += 16;
      }
      while ( v17 != v6 );
      v16 = (char *)a1[1];
    }
    if ( v6 != v16 )
    {
      v19 = (char *)v14 + v15 + 16 - v6;
      do
      {
        *(_OWORD *)&v6[v19] = *(_OWORD *)v6;
        v6 += 16;
      }
      while ( v6 != v16 );
    }
  }
  sub_18003709C(a1, (__int64)v14, v10, v13);
  return v15 + *a1;
}
