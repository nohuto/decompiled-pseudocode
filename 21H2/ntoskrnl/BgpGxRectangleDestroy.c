/*
 * XREFs of BgpGxRectangleDestroy @ 0x140AAD3E0
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x1403A7CAC (BgpTxtDisplayCharacter.c)
 *     BgpGxDrawRectangle @ 0x1403A7F70 (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x1403A8000 (GxpWriteFrameBufferPixels.c)
 *     BgpGxProcessQrCodeBitmap @ 0x1403DD848 (BgpGxProcessQrCodeBitmap.c)
 *     BgpGxConvertRectangle @ 0x1403DD8CC (BgpGxConvertRectangle.c)
 *     ResFwFreeContext @ 0x140AAB07C (ResFwFreeContext.c)
 *     AnFwpDisableProgressTimer @ 0x140AABA70 (AnFwpDisableProgressTimer.c)
 *     BgpGxParseBitmap @ 0x140AABCD8 (BgpGxParseBitmap.c)
 *     BgpGxReadRectangle @ 0x140AABE28 (BgpGxReadRectangle.c)
 *     AnFwDisplayFade @ 0x140AAC1BC (AnFwDisplayFade.c)
 *     BgpTxtCreateRegion @ 0x140AAC868 (BgpTxtCreateRegion.c)
 *     AnFwFadeCompletion @ 0x140AACA74 (AnFwFadeCompletion.c)
 *     AnFwDisplayProgressIndicator @ 0x140AAD1C4 (AnFwDisplayProgressIndicator.c)
 *     TxtpAddCacheEntry @ 0x140AAD338 (TxtpAddCacheEntry.c)
 *     BgpTxtDestroyRegion @ 0x140AAEAF4 (BgpTxtDestroyRegion.c)
 *     BgpGxBlendRectangle @ 0x140AB14B4 (BgpGxBlendRectangle.c)
 *     BgpGxDrawBitmapImage @ 0x140AB17C4 (BgpGxDrawBitmapImage.c)
 *     BgpTxtDisplayString @ 0x140AB1844 (BgpTxtDisplayString.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x1403A8CB4 (BgpFwFreeMemory.c)
 */

__int64 __fastcall BgpGxRectangleDestroy(__int64 a1)
{
  if ( a1 && (*(_DWORD *)(a1 + 16) & 1) == 0 )
    BgpFwFreeMemory(a1);
  return 0LL;
}
