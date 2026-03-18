/*
 * XREFs of ?GetChildAt@CVisual@@QEAAPEAV1@I@Z @ 0x180017184
 * Callers:
 *     ?GotoFirstChild@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@PEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x1800170C0 (-GotoFirstChild@-$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@PEAV-$vector@PEAVCVisual@@V-$all.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800678C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GotoSibling@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@PEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x1800A0484 (-GotoSibling@-$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@PEAV-$vector@PEAVCVisual@@V-$alloca.c)
 * Callees:
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800BD6F8 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 */

struct CVisual *__fastcall CVisual::GetChildAt(CVisual *this)
{
  unsigned __int64 Count; // rax
  unsigned __int64 v2; // rdx

  Count = CPtrArrayBase::GetCount((CVisual *)((char *)this + 72));
  if ( Count <= v2 )
    return 0LL;
  else
    return (struct CVisual *)CPtrArrayBase::operator[]();
}
