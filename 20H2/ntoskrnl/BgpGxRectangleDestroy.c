/*
 * XREFs of BgpGxRectangleDestroy @ 0x1409F5290
 * Callers:
 *     BgpGxDrawRectangle @ 0x14039B5C8 (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x14039B658 (GxpWriteFrameBufferPixels.c)
 *     BgpTxtDisplayCharacter @ 0x1403AB988 (BgpTxtDisplayCharacter.c)
 *     BgpGxProcessQrCodeBitmap @ 0x1403CDD48 (BgpGxProcessQrCodeBitmap.c)
 *     BgpGxConvertRectangle @ 0x1403CDDCC (BgpGxConvertRectangle.c)
 *     ResFwFreeContext @ 0x1409F407C (ResFwFreeContext.c)
 *     BgpGxParseBitmap @ 0x1409F4880 (BgpGxParseBitmap.c)
 *     BgpGxReadRectangle @ 0x1409F49D0 (BgpGxReadRectangle.c)
 *     AnFwDisplayFade @ 0x1409F4C00 (AnFwDisplayFade.c)
 *     AnFwFadeCompletion @ 0x1409F51B4 (AnFwFadeCompletion.c)
 *     BgpTxtCreateRegion @ 0x1409F60D4 (BgpTxtCreateRegion.c)
 *     AnFwpDisableProgressTimer @ 0x1409F64EC (AnFwpDisableProgressTimer.c)
 *     BgpTxtDestroyRegion @ 0x1409F70EC (BgpTxtDestroyRegion.c)
 *     AnFwDisplayProgressIndicator @ 0x1409F7370 (AnFwDisplayProgressIndicator.c)
 *     TxtpAddCacheEntry @ 0x1409F75FC (TxtpAddCacheEntry.c)
 *     BgpGxBlendRectangle @ 0x1409FA3F0 (BgpGxBlendRectangle.c)
 *     BgpGxDrawBitmapImage @ 0x1409FA704 (BgpGxDrawBitmapImage.c)
 *     BgpTxtDisplayString @ 0x1409FA784 (BgpTxtDisplayString.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14039B490 (BgpFwFreeMemory.c)
 */

__int64 __fastcall BgpGxRectangleDestroy(__int64 a1)
{
  if ( a1 && (*(_DWORD *)(a1 + 16) & 1) == 0 )
    BgpFwFreeMemory(a1);
  return 0LL;
}
