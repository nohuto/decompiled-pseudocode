/*
 * XREFs of BgpGxRectangleDestroy @ 0x1409F2290
 * Callers:
 *     BgpGxDrawRectangle @ 0x14039BE98 (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x14039BF28 (GxpWriteFrameBufferPixels.c)
 *     BgpTxtDisplayCharacter @ 0x1403B1888 (BgpTxtDisplayCharacter.c)
 *     BgpGxProcessQrCodeBitmap @ 0x1403CE610 (BgpGxProcessQrCodeBitmap.c)
 *     BgpGxConvertRectangle @ 0x1403CE694 (BgpGxConvertRectangle.c)
 *     ResFwFreeContext @ 0x1409F107C (ResFwFreeContext.c)
 *     BgpGxParseBitmap @ 0x1409F1880 (BgpGxParseBitmap.c)
 *     BgpGxReadRectangle @ 0x1409F19D0 (BgpGxReadRectangle.c)
 *     AnFwDisplayFade @ 0x1409F1C00 (AnFwDisplayFade.c)
 *     AnFwFadeCompletion @ 0x1409F21B4 (AnFwFadeCompletion.c)
 *     BgpTxtCreateRegion @ 0x1409F30D4 (BgpTxtCreateRegion.c)
 *     AnFwpDisableProgressTimer @ 0x1409F34EC (AnFwpDisableProgressTimer.c)
 *     BgpTxtDestroyRegion @ 0x1409F40EC (BgpTxtDestroyRegion.c)
 *     AnFwDisplayProgressIndicator @ 0x1409F4370 (AnFwDisplayProgressIndicator.c)
 *     TxtpAddCacheEntry @ 0x1409F45FC (TxtpAddCacheEntry.c)
 *     BgpGxBlendRectangle @ 0x1409F73F0 (BgpGxBlendRectangle.c)
 *     BgpGxDrawBitmapImage @ 0x1409F7704 (BgpGxDrawBitmapImage.c)
 *     BgpTxtDisplayString @ 0x1409F7784 (BgpTxtDisplayString.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14039BD60 (BgpFwFreeMemory.c)
 */

__int64 __fastcall BgpGxRectangleDestroy(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  if ( a1 && (*(_DWORD *)(a1 + 16) & 1) == 0 )
    BgpFwFreeMemory(a1, a2, a3, a4);
  return 0LL;
}
