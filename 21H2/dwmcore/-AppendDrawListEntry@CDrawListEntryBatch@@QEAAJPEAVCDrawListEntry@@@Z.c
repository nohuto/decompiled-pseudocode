/*
 * XREFs of ?AppendDrawListEntry@CDrawListEntryBatch@@QEAAJPEAVCDrawListEntry@@@Z @ 0x1801AAA74
 * Callers:
 *     ?AppendDrawListEntry@CD2DContext@@QEAAJPEAVCDrawListEntry@@PEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18023B1CC (-AppendDrawListEntry@CD2DContext@@QEAAJPEAVCDrawListEntry@@PEAVCHwLightCollectionBuffer@@PEAVCli.c)
 * Callees:
 *     ?AddRenderingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCDrawListEntry@@@Z @ 0x180078BC0 (-AddRenderingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCDrawListEntry@@@Z.c)
 */

__int64 __fastcall CDrawListEntryBatch::AppendDrawListEntry(CDrawListEntryBatch *this, struct CDrawListEntry *a2)
{
  __int64 v2; // r8
  CBatchOptimizer *v3; // rcx

  ++dword_180347278;
  v2 = *((_QWORD *)this + 3);
  v3 = *(CBatchOptimizer **)(v2 + 200);
  if ( !v3 )
    return CDrawListBatchManager::BatchDrawListEntry(
             (CDrawListBatchManager *)(v2 + 24),
             (struct CBaseDrawListEntry *)(((unsigned __int64)a2 + 16) & -(__int64)(a2 != 0LL)));
  CBatchOptimizer::AddRenderingDrawListEntry(v3, a2);
  return 0LL;
}
