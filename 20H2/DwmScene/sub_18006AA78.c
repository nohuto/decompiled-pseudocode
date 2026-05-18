/*
 * XREFs of sub_18006AA78 @ 0x18006AA78
 * Callers:
 *     sub_180068240 @ 0x180068240 (sub_180068240.c)
 *     sub_18006B6E0 @ 0x18006B6E0 (sub_18006B6E0.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_2 @ 0x18006BBC8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_2.c)
 */

__int64 __fastcall sub_18006AA78(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 248);
  if ( !((*(_QWORD *)(a1 + 256) - v1) >> 4) )
    std::vector<void *>::_Xlen();
  return *(_QWORD *)v1;
}
