/*
 * XREFs of RaspFreeMemory @ 0x1403AC608
 * Callers:
 *     BgpRasPrintGlyph @ 0x1403ABC48 (BgpRasPrintGlyph.c)
 *     RaspGetXExtent @ 0x1403AC204 (RaspGetXExtent.c)
 *     RaspRectangleDestroy @ 0x1403AC424 (RaspRectangleDestroy.c)
 *     RaspRasterize @ 0x1403AC43C (RaspRasterize.c)
 *     RaspDestroySegmentList @ 0x1403AC53C (RaspDestroySegmentList.c)
 *     RaspGetUnscaledGlyphData @ 0x1403AC624 (RaspGetUnscaledGlyphData.c)
 *     RaspScanConvert @ 0x1403AC710 (RaspScanConvert.c)
 *     RaspInitializeGlyphData @ 0x1403AD330 (RaspInitializeGlyphData.c)
 *     RaspGetCompositeGlyphList @ 0x1405C42AC (RaspGetCompositeGlyphList.c)
 *     RaspInitializeCompositeGlyphData @ 0x1405C45E4 (RaspInitializeCompositeGlyphData.c)
 *     RaspLoadCompositeGlyphData @ 0x1405C4960 (RaspLoadCompositeGlyphData.c)
 *     RaspDestroyCachedBitmap @ 0x1409F7708 (RaspDestroyCachedBitmap.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14039B490 (BgpFwFreeMemory.c)
 */

void __fastcall RaspFreeMemory(__int64 a1, _QWORD *a2)
{
  if ( !*a2 )
    BgpFwFreeMemory(a1);
}
