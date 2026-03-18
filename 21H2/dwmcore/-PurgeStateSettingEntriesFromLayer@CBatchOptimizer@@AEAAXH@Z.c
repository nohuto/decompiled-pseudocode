/*
 * XREFs of ?PurgeStateSettingEntriesFromLayer@CBatchOptimizer@@AEAAXH@Z @ 0x180019080
 * Callers:
 *     ?TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ @ 0x18007FFE0 (-TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ.c)
 *     ?ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z @ 0x1800805F0 (-ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z.c)
 *     ?TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z @ 0x180113676 (-TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z.c)
 * Callees:
 *     ?DiscardEntries@CBatchOptimizer@@CAXPEAVCDrawListBatchManager@@AEBV?$span@PEAVCBatchCommand@@$0?0@gsl@@@Z @ 0x1800115DC (-DiscardEntries@CBatchOptimizer@@CAXPEAVCDrawListBatchManager@@AEBV-$span@PEAVCBatchCommand@@$0-.c)
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 */

void __fastcall CBatchOptimizer::PurgeStateSettingEntriesFromLayer(CBatchOptimizer *this, int a2)
{
  _DWORD *v2; // rbx
  int v3; // eax
  __int64 v4; // rsi
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (_DWORD *)((char *)this + 520 * *((int *)this + a2 + 12));
  v3 = v2[24] - v2[25];
  if ( v3 )
  {
    v4 = v3;
    v5[0] = v3;
    if ( v3 == -1LL || (v5[1] = v2 + 30, v2 == (_DWORD *)-120LL) )
    {
      gsl::details::terminate(this);
      JUMPOUT(0x18012082ALL);
    }
    CBatchOptimizer::DiscardEntries(*((_QWORD *)this + 1), (__int64)v5);
    memmove_0(v2 + 30, &v2[2 * v4 + 30], 8LL * (unsigned int)v2[25]);
    v2[24] = v2[25];
  }
}
