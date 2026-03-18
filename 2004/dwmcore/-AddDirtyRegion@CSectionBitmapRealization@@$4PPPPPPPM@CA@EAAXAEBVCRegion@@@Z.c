/*
 * XREFs of ?AddDirtyRegion@CSectionBitmapRealization@@$4PPPPPPPM@CA@EAAXAEBVCRegion@@@Z @ 0x1800F2BE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSectionBitmapRealization::AddDirtyRegion(__int64 a1, const struct CRegion *a2)
{
  CSectionBitmapRealization::AddDirtyRegion((CSectionBitmapRealization *)(a1 - *(int *)(a1 - 4) - 32), a2);
}
