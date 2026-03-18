/*
 * XREFs of ?GetActiveLightCount@CDrawingContext@@QEBAIXZ @ 0x180178D74
 * Callers:
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180055DC0 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x180047970 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 */

unsigned int __fastcall CDrawingContext::GetActiveLightCount(const struct CVisualTree **this)
{
  struct CVisual *CurrentVisual; // rax

  CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)(this + 3));
  return CLightStack::GetActiveLightCount((CLightStack *)(this + 75), CurrentVisual, this[741], 1);
}
