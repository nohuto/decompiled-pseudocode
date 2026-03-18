/*
 * XREFs of ?UpdateOutstandingDecommit@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z @ 0x1C0001528
 * Callers:
 *     ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1C007E450 (-MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z.c)
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z @ 0x1C0080C40 (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C008108C (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::UpdateOutstandingDecommit(unsigned __int64 a1, struct VIDMM_RECYCLE_BLOCK *a2)
{
  if ( (__int64)(a1 + _InterlockedExchangeAdd64(&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedDecommit, a1)) < 0 )
  {
    if ( g_IsInternalRelease )
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
  }
}
