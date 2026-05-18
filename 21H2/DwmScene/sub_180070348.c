/*
 * XREFs of sub_180070348 @ 0x180070348
 * Callers:
 *     sub_18006DB10 @ 0x18006DB10 (sub_18006DB10.c)
 *     sub_180070FB0 @ 0x180070FB0 (sub_180070FB0.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_2 @ 0x180071498 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_2.c)
 */

__int64 __fastcall sub_180070348(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 248);
  if ( !((*(_QWORD *)(a1 + 256) - v1) >> 4) )
    std::vector<void *>::_Xlen();
  return *(_QWORD *)v1;
}
