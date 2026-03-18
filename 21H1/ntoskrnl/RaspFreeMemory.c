/*
 * XREFs of RaspFreeMemory @ 0x1403B0474
 * Callers:
 *     BgpRasPrintGlyph @ 0x1403AFAB4 (BgpRasPrintGlyph.c)
 *     RaspGetXExtent @ 0x1403B0070 (RaspGetXExtent.c)
 *     RaspRectangleDestroy @ 0x1403B0290 (RaspRectangleDestroy.c)
 *     RaspRasterize @ 0x1403B02A8 (RaspRasterize.c)
 *     RaspDestroySegmentList @ 0x1403B03A8 (RaspDestroySegmentList.c)
 *     RaspGetUnscaledGlyphData @ 0x1403B0490 (RaspGetUnscaledGlyphData.c)
 *     RaspScanConvert @ 0x1403B0570 (RaspScanConvert.c)
 *     RaspInitializeGlyphData @ 0x1403B1190 (RaspInitializeGlyphData.c)
 *     RaspGetCompositeGlyphList @ 0x1405BFF0C (RaspGetCompositeGlyphList.c)
 *     RaspInitializeCompositeGlyphData @ 0x1405C0244 (RaspInitializeCompositeGlyphData.c)
 *     RaspLoadCompositeGlyphData @ 0x1405C05C0 (RaspLoadCompositeGlyphData.c)
 *     RaspDestroyCachedBitmap @ 0x1409F1708 (RaspDestroyCachedBitmap.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140398840 (BgpFwFreeMemory.c)
 */

void __fastcall RaspFreeMemory(__int64 a1, _QWORD *a2)
{
  if ( !*a2 )
    BgpFwFreeMemory(a1);
}
