/*
 * XREFs of sub_1800AC6B4 @ 0x1800AC6B4
 * Callers:
 *     sub_1800AC5C0 @ 0x1800AC5C0 (sub_1800AC5C0.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010BD8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_1800B3AAC @ 0x1800B3AAC (sub_1800B3AAC.c)
 *     sub_1800B3B30 @ 0x1800B3B30 (sub_1800B3B30.c)
 */

__int64 __fastcall sub_1800AC6B4(_QWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
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
  v11 = sub_1800B3B30(a1, v10);
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
  sub_1800B3AAC(a1, *a1, a1[1], v11, v11 + 48 * v7);
  return sub_1800B36BC(a1, v11, a2, v10, a5);
}
