/*
 * XREFs of ?OnEndDraw@CDrawListBatchManager@@IEAAXXZ @ 0x18006D2B4
 * Callers:
 *     ?EndDraw@CD2DContext@@AEAAJXZ @ 0x18006AF84 (-EndDraw@CD2DContext@@AEAAJXZ.c)
 * Callees:
 *     ?Optimize@?$ShrinkableReferenceArray@PEAVCBaseDrawListEntry@@@@QEAAXXZ @ 0x1800CF138 (-Optimize@-$ShrinkableReferenceArray@PEAVCBaseDrawListEntry@@@@QEAAXXZ.c)
 *     ?Optimize@?$ShrinkableReferenceArray@PEAVCDrawListEntryBatch@@@@QEAAXXZ @ 0x1800D149C (-Optimize@-$ShrinkableReferenceArray@PEAVCDrawListEntryBatch@@@@QEAAXXZ.c)
 *     ?Optimize@?$ShrinkableReferenceArray@PEAVCGroupDrawListEntry@@@@QEAAXXZ @ 0x1800D167C (-Optimize@-$ShrinkableReferenceArray@PEAVCGroupDrawListEntry@@@@QEAAXXZ.c)
 */

void __fastcall CDrawListBatchManager::OnEndDraw(CDrawListBatchManager *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 49);
  if ( !v1 )
  {
    *((_DWORD *)this + 49) = 512;
    ShrinkableReferenceArray<CBaseDrawListEntry *>::Optimize();
    ShrinkableReferenceArray<CGroupDrawListEntry *>::Optimize((char *)this + 40);
    ShrinkableReferenceArray<CGroupDrawListEntry *>::Optimize((char *)this + 80);
    ShrinkableReferenceArray<CDrawListEntryBatch *>::Optimize((char *)this + 120);
    v1 = *((_DWORD *)this + 49);
  }
  *((_DWORD *)this + 49) = v1 - 1;
}
