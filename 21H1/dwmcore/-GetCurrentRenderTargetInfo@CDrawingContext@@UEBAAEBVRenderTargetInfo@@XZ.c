/*
 * XREFs of ?GetCurrentRenderTargetInfo@CDrawingContext@@UEBAAEBVRenderTargetInfo@@XZ @ 0x1800DC9E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct RenderTargetInfo *__fastcall CDrawingContext::GetCurrentRenderTargetInfo(CDrawingContext *this)
{
  return (CDrawingContext *)((char *)this + 32);
}
