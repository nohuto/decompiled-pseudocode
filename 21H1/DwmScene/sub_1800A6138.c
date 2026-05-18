/*
 * XREFs of sub_1800A6138 @ 0x1800A6138
 * Callers:
 *     sub_1800A7CD4 @ 0x1800A7CD4 (sub_1800A7CD4.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010AF8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_1800ADDEC @ 0x1800ADDEC (sub_1800ADDEC.c)
 *     sub_1800AE1DC @ 0x1800AE1DC (sub_1800AE1DC.c)
 *     sub_1800AE260 @ 0x1800AE260 (sub_1800AE260.c)
 */

__int64 __fastcall sub_1800A6138(_QWORD *a1, _BYTE *a2, __int64 a3)
{
  __int64 v6; // r12
  __int64 v7; // rdx
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdi
  __int64 v12; // r14
  __int64 v13; // r12
  __int64 v14; // r9
  __int64 v15; // rax
  _QWORD *v16; // rdx
  _BYTE *v17; // r10
  _QWORD *v18; // rdx
  _QWORD *v19; // rcx
  _QWORD *v20; // rcx
  __int64 v21; // rbx
  __int64 v23; // [rsp+20h] [rbp-68h]

  v6 = (__int64)&a2[-*a1] / 48;
  v7 = (a1[1] - *a1) / 48LL;
  if ( v7 == 0x555555555555555LL )
    std::vector<void *>::_Xlen();
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) / 48LL;
  v10 = v9 >> 1;
  if ( v9 <= 0x555555555555555LL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = sub_1800AE260(a1, v11);
  v13 = 48 * v6;
  v14 = v13 + v12;
  *(_BYTE *)v14 = *(_BYTE *)a3;
  *(_QWORD *)(v14 + 8) = *(_QWORD *)(a3 + 8);
  *(_QWORD *)(v14 + 16) = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(v14 + 24) = *(_QWORD *)(a3 + 24);
  *(_QWORD *)(v14 + 32) = 0LL;
  *(_QWORD *)(v14 + 40) = 0LL;
  v15 = *(_QWORD *)(a3 + 40);
  if ( v15 )
    _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
  *(_QWORD *)(v14 + 32) = *(_QWORD *)(a3 + 32);
  *(_QWORD *)(v14 + 40) = *(_QWORD *)(a3 + 40);
  v16 = (_QWORD *)a1[1];
  v17 = (_BYTE *)*a1;
  if ( a2 == (_BYTE *)v16 )
  {
    sub_1800AE1DC(a1, *a1, a1[1], v12, v14);
  }
  else
  {
    if ( v17 != a2 )
    {
      v18 = v17 + 40;
      v19 = (_QWORD *)(v12 + 40);
      do
      {
        *((_BYTE *)v19 - 40) = *v17;
        *(v19 - 4) = *(v18 - 4);
        *(v19 - 3) = *(v18 - 3);
        *(v19 - 2) = *(v18 - 2);
        *(v19 - 1) = 0LL;
        *v19 = 0LL;
        *(v19 - 1) = *(v18 - 1);
        *v19 = *v18;
        *(v18 - 1) = 0LL;
        *v18 = 0LL;
        v19 += 6;
        v17 += 48;
        v18 += 6;
      }
      while ( v17 != a2 );
      v16 = (_QWORD *)a1[1];
    }
    v23 = v12;
    if ( a2 != (_BYTE *)v16 )
    {
      v20 = (_QWORD *)(v14 + 88);
      v21 = (__int64)&a2[-v13 - v12];
      do
      {
        *((_BYTE *)v20 - 40) = *((_BYTE *)v20 + v21 - 88);
        *(v20 - 4) = *(_QWORD *)((char *)v20 + v21 - 80);
        *(v20 - 3) = *(_QWORD *)((char *)v20 + v21 - 72);
        *(v20 - 2) = *(_QWORD *)((char *)v20 + v21 - 64);
        *(v20 - 1) = 0LL;
        *v20 = 0LL;
        *(v20 - 1) = *(_QWORD *)((char *)v20 + v21 - 56);
        *v20 = *(_QWORD *)((char *)v20 + v21 - 48);
        *(_QWORD *)((char *)v20 + v21 - 56) = 0LL;
        *(_QWORD *)((char *)v20 + v21 - 48) = 0LL;
        v20 += 6;
      }
      while ( (_QWORD *)((char *)v20 + v21 - 88) != v16 );
    }
  }
  sub_1800ADDEC(a1, v12, v8, v11, v23);
  return v13 + *a1;
}
