/*
 * XREFs of ?OnEndDraw@CDrawListBatchManager@@IEAAXXZ @ 0x18007E374
 * Callers:
 *     ?EndDraw@CD2DContext@@AEAAJXZ @ 0x18007BEE4 (-EndDraw@CD2DContext@@AEAAJXZ.c)
 * Callees:
 *     ?Optimize@?$ShrinkableReferenceArray@PEAVCBaseDrawListEntry@@@@QEAAXXZ @ 0x1800D7248 (-Optimize@-$ShrinkableReferenceArray@PEAVCBaseDrawListEntry@@@@QEAAXXZ.c)
 *     ?Optimize@?$ShrinkableReferenceArray@PEAVCDrawListEntryBatch@@@@QEAAXXZ @ 0x1800D93CC (-Optimize@-$ShrinkableReferenceArray@PEAVCDrawListEntryBatch@@@@QEAAXXZ.c)
 *     ?Optimize@?$ShrinkableReferenceArray@PEAVCGroupDrawListEntry@@@@QEAAXXZ @ 0x1800D95AC (-Optimize@-$ShrinkableReferenceArray@PEAVCGroupDrawListEntry@@@@QEAAXXZ.c)
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
