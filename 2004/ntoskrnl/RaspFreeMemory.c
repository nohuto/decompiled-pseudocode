/*
 * XREFs of RaspFreeMemory @ 0x1403A9C18
 * Callers:
 *     BgpRasPrintGlyph @ 0x1403A9258 (BgpRasPrintGlyph.c)
 *     RaspGetXExtent @ 0x1403A9814 (RaspGetXExtent.c)
 *     RaspRectangleDestroy @ 0x1403A9A34 (RaspRectangleDestroy.c)
 *     RaspRasterize @ 0x1403A9A4C (RaspRasterize.c)
 *     RaspDestroySegmentList @ 0x1403A9B4C (RaspDestroySegmentList.c)
 *     RaspGetUnscaledGlyphData @ 0x1403A9C34 (RaspGetUnscaledGlyphData.c)
 *     RaspScanConvert @ 0x1403A9D20 (RaspScanConvert.c)
 *     RaspInitializeGlyphData @ 0x1403AA940 (RaspInitializeGlyphData.c)
 *     RaspGetCompositeGlyphList @ 0x1405C062C (RaspGetCompositeGlyphList.c)
 *     RaspInitializeCompositeGlyphData @ 0x1405C0964 (RaspInitializeCompositeGlyphData.c)
 *     RaspLoadCompositeGlyphData @ 0x1405C0CE0 (RaspLoadCompositeGlyphData.c)
 *     RaspDestroyCachedBitmap @ 0x1409F1708 (RaspDestroyCachedBitmap.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140398FD0 (BgpFwFreeMemory.c)
 */

void __fastcall RaspFreeMemory(__int64 a1, _QWORD *a2)
{
  if ( !*a2 )
    BgpFwFreeMemory(a1);
}
