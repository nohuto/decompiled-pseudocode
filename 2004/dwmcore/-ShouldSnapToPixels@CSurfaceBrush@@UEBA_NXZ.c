/*
 * XREFs of ?ShouldSnapToPixels@CSurfaceBrush@@UEBA_NXZ @ 0x1800DE880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSurfaceBrush::ShouldSnapToPixels(CSurfaceBrush *this)
{
  return *((_BYTE *)this + 152);
}
