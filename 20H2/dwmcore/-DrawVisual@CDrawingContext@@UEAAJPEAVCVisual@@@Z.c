/*
 * XREFs of ?DrawVisual@CDrawingContext@@UEAAJPEAVCVisual@@@Z @ 0x180021220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CDrawingContext::DrawVisual(CDrawingContext *this, struct CVisual *a2)
{
  return CDrawingContext::DrawVisual((CDrawingContext *)((char *)this - 16), a2, 0);
}
