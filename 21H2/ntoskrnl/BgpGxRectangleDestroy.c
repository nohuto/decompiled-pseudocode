/*
 * XREFs of BgpGxRectangleDestroy @ 0x1409F3290
 * Callers:
 *     BgpGxDrawRectangle @ 0x14039BFE8 (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x14039C078 (GxpWriteFrameBufferPixels.c)
 *     BgpTxtDisplayCharacter @ 0x1403B19F8 (BgpTxtDisplayCharacter.c)
 *     BgpGxProcessQrCodeBitmap @ 0x1403CE780 (BgpGxProcessQrCodeBitmap.c)
 *     BgpGxConvertRectangle @ 0x1403CE804 (BgpGxConvertRectangle.c)
 *     ResFwFreeContext @ 0x1409F207C (ResFwFreeContext.c)
 *     BgpGxParseBitmap @ 0x1409F2880 (BgpGxParseBitmap.c)
 *     BgpGxReadRectangle @ 0x1409F29D0 (BgpGxReadRectangle.c)
 *     AnFwDisplayFade @ 0x1409F2C00 (AnFwDisplayFade.c)
 *     AnFwFadeCompletion @ 0x1409F31B4 (AnFwFadeCompletion.c)
 *     BgpTxtCreateRegion @ 0x1409F40D4 (BgpTxtCreateRegion.c)
 *     AnFwpDisableProgressTimer @ 0x1409F44EC (AnFwpDisableProgressTimer.c)
 *     BgpTxtDestroyRegion @ 0x1409F50EC (BgpTxtDestroyRegion.c)
 *     AnFwDisplayProgressIndicator @ 0x1409F5370 (AnFwDisplayProgressIndicator.c)
 *     TxtpAddCacheEntry @ 0x1409F55FC (TxtpAddCacheEntry.c)
 *     BgpGxBlendRectangle @ 0x1409F83F0 (BgpGxBlendRectangle.c)
 *     BgpGxDrawBitmapImage @ 0x1409F8704 (BgpGxDrawBitmapImage.c)
 *     BgpTxtDisplayString @ 0x1409F8784 (BgpTxtDisplayString.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14039BEB0 (BgpFwFreeMemory.c)
 */

__int64 __fastcall BgpGxRectangleDestroy(__int64 a1)
{
  if ( a1 && (*(_DWORD *)(a1 + 16) & 1) == 0 )
    BgpFwFreeMemory(a1);
  return 0LL;
}
