/*
 * XREFs of sub_1800FB0BC @ 0x1800FB0BC
 * Callers:
 *     sub_1800FB430 @ 0x1800FB430 (sub_1800FB430.c)
 *     sub_1800FBE6C @ 0x1800FBE6C (sub_1800FBE6C.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010BD8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_1800F5ED0 @ 0x1800F5ED0 (sub_1800F5ED0.c)
 *     sub_1800F6294 @ 0x1800F6294 (sub_1800F6294.c)
 */

__int64 __fastcall sub_1800FB0BC(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v6; // r15
  __int64 v7; // rdx
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdi
  _QWORD *v12; // rdx
  __int64 v13; // r15
  __int64 v14; // r8
  __int64 v15; // rcx
  _QWORD *v16; // r9
  char *v17; // rcx

  v4 = a2;
  v6 = (a2 - *a1) / 12;
  v7 = (a1[1] - *a1) / 12;
  if ( v7 == 0x1555555555555555LL )
    std::vector<void *>::_Xlen();
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) / 12;
  v10 = v9 >> 1;
  if ( v9 <= 0x1555555555555555LL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = sub_1800F6294((__int64)a1, v11);
  v13 = 3 * v6;
  *(_QWORD *)((char *)v12 + 4 * v13) = *(_QWORD *)a3;
  *((_DWORD *)v12 + v13 + 2) = *(_DWORD *)(a3 + 8);
  v14 = a1[1];
  v15 = *a1;
  v16 = v12;
  if ( v4 == v14 )
  {
    while ( v15 != v14 )
    {
      *v16 = *(_QWORD *)v15;
      *((_DWORD *)v16 + 2) = *(_DWORD *)(v15 + 8);
      v16 = (_QWORD *)((char *)v16 + 12);
      v15 += 12LL;
    }
  }
  else
  {
    if ( v15 != v4 )
    {
      do
      {
        *v16 = *(_QWORD *)v15;
        *((_DWORD *)v16 + 2) = *(_DWORD *)(v15 + 8);
        v16 = (_QWORD *)((char *)v16 + 12);
        v15 += 12LL;
      }
      while ( v15 != v4 );
      v14 = a1[1];
    }
    if ( v4 != v14 )
    {
      v17 = (char *)v12 + 4 * v13 - v4 + 12;
      do
      {
        *(_QWORD *)&v17[v4] = *(_QWORD *)v4;
        *(_DWORD *)&v17[v4 + 8] = *(_DWORD *)(v4 + 8);
        v4 += 12LL;
      }
      while ( v4 != v14 );
    }
  }
  sub_1800F5ED0(a1, (__int64)v12, v8, v11);
  return *a1 + 4 * v13;
}
