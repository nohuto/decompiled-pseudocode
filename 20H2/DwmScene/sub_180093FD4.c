/*
 * XREFs of sub_180093FD4 @ 0x180093FD4
 * Callers:
 *     sub_180093F08 @ 0x180093F08 (sub_180093F08.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010AF8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_1800940F8 @ 0x1800940F8 (sub_1800940F8.c)
 *     sub_180094424 @ 0x180094424 (sub_180094424.c)
 *     sub_180098304 @ 0x180098304 (sub_180098304.c)
 */

__int64 __fastcall sub_180093FD4(__int64 *a1, unsigned __int64 a2)
{
  __int64 v4; // r14
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // r15
  __int64 v9; // r13
  __int64 v10; // r14
  __int64 v11; // r12

  if ( a2 > 0x2E8BA2E8BA2E8BALL )
    std::vector<void *>::_Xlen();
  v4 = (a1[1] - *a1) / 88;
  v5 = (a1[2] - *a1) / 88;
  v6 = v5 >> 1;
  if ( v5 <= 0x2E8BA2E8BA2E8BALL - (v5 >> 1) )
  {
    v7 = v6 + v5;
    if ( v6 + v5 < a2 )
      v7 = a2;
  }
  else
  {
    v7 = a2;
  }
  v8 = sub_180098304(a1, v7);
  sub_1800940F8(v8 + 88 * v4, a2 - v4, a1, 0LL);
  v9 = a1[1];
  v10 = *a1;
  v11 = v8;
  while ( v10 != v9 )
  {
    sub_180094424(v11, v10);
    v11 += 88LL;
    v10 += 88LL;
  }
  return sub_18009801C(a1, v8, a2, v7);
}
