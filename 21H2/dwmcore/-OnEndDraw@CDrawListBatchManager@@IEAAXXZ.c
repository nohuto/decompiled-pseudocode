/*
 * XREFs of ?OnEndDraw@CDrawListBatchManager@@IEAAXXZ @ 0x180020A24
 * Callers:
 *     ?EndDraw@CD2DContext@@AEAAJXZ @ 0x180020984 (-EndDraw@CD2DContext@@AEAAJXZ.c)
 * Callees:
 *     ?Optimize@?$ShrinkableArray@PEAVCBatchCommand@@U?$UniqueLifetime@PEAVCBatchCommand@@@@@@QEAAXXZ @ 0x180020A78 (-Optimize@-$ShrinkableArray@PEAVCBatchCommand@@U-$UniqueLifetime@PEAVCBatchCommand@@@@@@QEAAXXZ.c)
 *     ?Optimize@?$ShrinkableArray@PEAVCDrawListEntryBatch@@U?$RefCountLifetime@PEAVCDrawListEntryBatch@@@@@@QEAAXXZ @ 0x180020B90 (-Optimize@-$ShrinkableArray@PEAVCDrawListEntryBatch@@U-$RefCountLifetime@PEAVCDrawListEntryBatch.c)
 */

void __fastcall CDrawListBatchManager::OnEndDraw(CDrawListBatchManager *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 39);
  if ( !v1 )
  {
    *((_DWORD *)this + 39) = 512;
    ((void (*)(void))ShrinkableArray<CBatchCommand *,UniqueLifetime<CBatchCommand *>>::Optimize)();
    ShrinkableArray<CBatchCommand *,UniqueLifetime<CBatchCommand *>>::Optimize((char *)this + 40);
    ShrinkableArray<CDrawListEntryBatch *,RefCountLifetime<CDrawListEntryBatch *>>::Optimize((char *)this + 80);
    v1 = *((_DWORD *)this + 39);
  }
  *((_DWORD *)this + 39) = v1 - 1;
}
