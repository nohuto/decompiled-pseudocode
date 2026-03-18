/*
 * XREFs of ?IsWhitePixelInTopLeft@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x1800DDD80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionSurfaceBitmap::IsWhitePixelInTopLeft(CCompositionSurfaceBitmap *this)
{
  return *((_BYTE *)this + 129);
}
