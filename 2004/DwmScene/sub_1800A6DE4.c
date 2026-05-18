/*
 * XREFs of sub_1800A6DE4 @ 0x1800A6DE4
 * Callers:
 *     sub_1800A6CF0 @ 0x1800A6CF0 (sub_1800A6CF0.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010AF8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_1800AE1DC @ 0x1800AE1DC (sub_1800AE1DC.c)
 *     sub_1800AE260 @ 0x1800AE260 (sub_1800AE260.c)
 */

__int64 __fastcall sub_1800A6DE4(_QWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // r15
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbx
  __int64 v11; // r14
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx

  if ( a2 > 0x555555555555555LL )
    std::vector<void *>::_Xlen();
  v7 = (a1[1] - *a1) / 48LL;
  v8 = (a1[2] - *a1) / 48LL;
  v9 = v8 >> 1;
  if ( v8 <= 0x555555555555555LL - (v8 >> 1) )
  {
    v10 = v9 + v8;
    if ( v9 + v8 < a2 )
      v10 = a2;
  }
  else
  {
    v10 = a2;
  }
  v11 = sub_1800AE260(a1, v10);
  v12 = v11 + 48 * v7;
  v13 = a2 - v7;
  if ( a2 != v7 )
  {
    do
    {
      *(_DWORD *)(v12 + 1) = 0;
      *(_WORD *)(v12 + 5) = 0;
      *(_BYTE *)(v12 + 7) = 0;
      *(_BYTE *)v12 = 1;
      *(_QWORD *)(v12 + 8) = 0LL;
      *(_QWORD *)(v12 + 16) = 0LL;
      *(_QWORD *)(v12 + 24) = 0LL;
      *(_QWORD *)(v12 + 32) = 0LL;
      *(_QWORD *)(v12 + 40) = 0LL;
      v12 += 48LL;
      --v13;
    }
    while ( v13 );
  }
  sub_1800AE1DC(a1, *a1, a1[1], v11, v11 + 48 * v7);
  return sub_1800ADDEC(a1, v11, a2, v10, a5);
}
