/*
 * XREFs of ?AppendLayer@CBatchOptimizer@@AEAAXXZ @ 0x1800122E4
 * Callers:
 *     ?AddStateSettingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCStateSettingDrawListEntry@@@Z @ 0x180012160 (-AddStateSettingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCStateSettingDrawListEntry@@@Z.c)
 * Callees:
 *     ?FlushBottomLayer@CBatchOptimizer@@AEAAXXZ @ 0x18007BAA4 (-FlushBottomLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     ?RecycleLayer@CBatchOptimizer@@AEAAXH@Z @ 0x18007BCBC (-RecycleLayer@CBatchOptimizer@@AEAAXH@Z.c)
 *     ?TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ @ 0x18007E480 (-TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ.c)
 */

void __fastcall CBatchOptimizer::AppendLayer(CBatchOptimizer *this)
{
  if ( *((_DWORD *)this + 8) == 8 && (!*((_BYTE *)this + 4240) || !CBatchOptimizer::TryMergeOneLayer(this)) )
  {
    CBatchOptimizer::FlushBottomLayer(this);
    CBatchOptimizer::RecycleLayer(this, 0);
  }
  *(_OWORD *)((char *)this + 520 * *((int *)this + ++*((_DWORD *)this + 8) + 11) + 80) = *((_OWORD *)this + 1);
}
