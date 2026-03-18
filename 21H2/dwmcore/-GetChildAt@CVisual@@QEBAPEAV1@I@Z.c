/*
 * XREFs of ?GetChildAt@CVisual@@QEBAPEAV1@I@Z @ 0x1800E649C
 * Callers:
 *     ?GotoSibling@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@PEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x180046384 (-GotoSibling@-$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@PEAV-$vector@PEAVCVisual@@V-$alloca.c)
 *     ?GotoFirstChild@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@PEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x1800E63D8 (-GotoFirstChild@-$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@PEAV-$vector@PEAVCVisual@@V-$all.c)
 * Callees:
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x180062474 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 */

struct CVisual *__fastcall CVisual::GetChildAt(CVisual *this)
{
  unsigned __int64 Count; // rax
  unsigned __int64 v2; // rdx
  __int64 *v3; // rcx

  Count = CPtrArrayBase::GetCount((CVisual *)((char *)this + 80));
  if ( Count <= v2 )
    return 0LL;
  else
    return (struct CVisual *)CPtrArrayBase::operator[](v3, v2);
}
