/*
 * XREFs of BgpGxRectangleDestroy @ 0x1409EF290
 * Callers:
 *     BgpGxDrawRectangle @ 0x140399108 (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x140399198 (GxpWriteFrameBufferPixels.c)
 *     BgpTxtDisplayCharacter @ 0x1403A8F98 (BgpTxtDisplayCharacter.c)
 *     BgpGxProcessQrCodeBitmap @ 0x1403CB128 (BgpGxProcessQrCodeBitmap.c)
 *     BgpGxConvertRectangle @ 0x1403CB1AC (BgpGxConvertRectangle.c)
 *     ResFwFreeContext @ 0x1409EE224 (ResFwFreeContext.c)
 *     BgpGxParseBitmap @ 0x1409EE880 (BgpGxParseBitmap.c)
 *     BgpGxReadRectangle @ 0x1409EE9D0 (BgpGxReadRectangle.c)
 *     AnFwDisplayFade @ 0x1409EEC00 (AnFwDisplayFade.c)
 *     AnFwFadeCompletion @ 0x1409EF1B4 (AnFwFadeCompletion.c)
 *     BgpTxtCreateRegion @ 0x1409F00D4 (BgpTxtCreateRegion.c)
 *     AnFwpDisableProgressTimer @ 0x1409F04EC (AnFwpDisableProgressTimer.c)
 *     BgpTxtDestroyRegion @ 0x1409F10EC (BgpTxtDestroyRegion.c)
 *     AnFwDisplayProgressIndicator @ 0x1409F1370 (AnFwDisplayProgressIndicator.c)
 *     TxtpAddCacheEntry @ 0x1409F15FC (TxtpAddCacheEntry.c)
 *     BgpGxBlendRectangle @ 0x1409F43F0 (BgpGxBlendRectangle.c)
 *     BgpGxDrawBitmapImage @ 0x1409F4704 (BgpGxDrawBitmapImage.c)
 *     BgpTxtDisplayString @ 0x1409F4784 (BgpTxtDisplayString.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140398FD0 (BgpFwFreeMemory.c)
 */

__int64 __fastcall BgpGxRectangleDestroy(__int64 a1)
{
  if ( a1 && (*(_DWORD *)(a1 + 16) & 1) == 0 )
    BgpFwFreeMemory(a1);
  return 0LL;
}
