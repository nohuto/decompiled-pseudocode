/*
 * XREFs of ?HasContent@CCompositionSurfaceBitmap@@QEAA_NXZ @ 0x1801F2678
 * Callers:
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180095750 (-GetContentBounds@CWindowNode@@UEAAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 * Callees:
 *     ?GetRenderingRealization@CCompositionSurfaceBitmap@@AEAAPEAVIBitmapRealization@@XZ @ 0x1800163E0 (-GetRenderingRealization@CCompositionSurfaceBitmap@@AEAAPEAVIBitmapRealization@@XZ.c)
 */

bool __fastcall CCompositionSurfaceBitmap::HasContent(CCompositionSurfaceBitmap *this)
{
  return CCompositionSurfaceBitmap::GetRenderingRealization(this) != 0LL;
}
