/*
 * XREFs of ?AddDirtyRegion@CSectionBitmapRealization@@$4PPPPPPPM@A@EAAXAEBVCRegion@@@Z @ 0x1800F2820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSectionBitmapRealization::AddDirtyRegion(__int64 a1, const struct CRegion *a2)
{
  CSectionBitmapRealization::AddDirtyRegion((CSectionBitmapRealization *)(a1 - *(int *)(a1 - 4)), a2);
}
