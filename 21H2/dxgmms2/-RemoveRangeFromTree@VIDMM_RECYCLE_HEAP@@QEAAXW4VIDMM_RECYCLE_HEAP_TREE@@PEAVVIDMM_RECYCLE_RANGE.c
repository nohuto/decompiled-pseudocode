/*
 * XREFs of ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00E6F68
 * Callers:
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C007D414 (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C0080B58 (-LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z @ 0x1C0080C40 (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z.c)
 *     ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0081254 (-ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA-AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM.c)
 *     ?CleanupFreeBlock@VIDMM_RECYCLE_BLOCK@@QEAA_NPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C008130C (-CleanupFreeBlock@VIDMM_RECYCLE_BLOCK@@QEAA_NPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?CombineFreedRanges@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@00@Z @ 0x1C00E679C (-CombineFreedRanges@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@00@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(__int64 a1, int a2, __int64 a3)
{
  __int64 v6; // rbp
  int v7; // ebx
  __int64 result; // rax
  __int64 v9; // rcx

  v6 = a2;
  WdLogSingleEntry2(3LL, a3, a2);
  if ( !a2 )
  {
    v9 = a1 + 48;
    goto LABEL_8;
  }
  v7 = a2 - 1;
  if ( !v7 )
  {
    v9 = a1 + 56;
    goto LABEL_8;
  }
  if ( v7 == 1 )
  {
    v9 = a1 + 64;
LABEL_8:
    result = RtlAvlRemoveNode(v9, a3);
    goto LABEL_9;
  }
  result = WdLogSingleEntry5(0LL, 270LL, 52LL, 14LL, v6, 0LL);
LABEL_9:
  *(_DWORD *)(a3 + 88) = 3;
  return result;
}
