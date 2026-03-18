/*
 * XREFs of ?AddDirtyRegion@CBitmapRealization@@$4PPPPPPPM@A@EAAXAEBVCRegion@@@Z @ 0x1800EFC30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CBitmapRealization::AddDirtyRegion(__int64 a1, const struct FastRegion::Internal::CRgnData **a2)
{
  CBitmapRealization::AddDirtyRegion((CBitmapRealization *)(a1 - *(int *)(a1 - 4)), a2);
}
