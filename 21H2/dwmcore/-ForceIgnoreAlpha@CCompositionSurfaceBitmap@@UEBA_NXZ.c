/*
 * XREFs of ?ForceIgnoreAlpha@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x1800E1E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionSurfaceBitmap::ForceIgnoreAlpha(CCompositionSurfaceBitmap *this)
{
  return *((_BYTE *)this + 128);
}
