/*
 * XREFs of BgpGetBitsPerPixel @ 0x14039C280
 * Callers:
 *     BgpGxDrawRectangle @ 0x14039BE98 (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x14039BF28 (GxpWriteFrameBufferPixels.c)
 *     BgpTxtDisplayCharacter @ 0x1403B1888 (BgpTxtDisplayCharacter.c)
 *     BgpGxProcessQrCodeBitmap @ 0x1403CE610 (BgpGxProcessQrCodeBitmap.c)
 *     BgpClearScreen @ 0x1405C4274 (BgpClearScreen.c)
 *     BgpFwDisplayBugCheckScreen @ 0x1405C5704 (BgpFwDisplayBugCheckScreen.c)
 *     LogFwReport @ 0x1409F1524 (LogFwReport.c)
 *     AnFwConfigureProgressResources @ 0x1409F1744 (AnFwConfigureProgressResources.c)
 *     BgpGxReadRectangle @ 0x1409F19D0 (BgpGxReadRectangle.c)
 *     GxpReadFrameBufferPixels @ 0x1409F1A40 (GxpReadFrameBufferPixels.c)
 *     AnFwDisplayFade @ 0x1409F1C00 (AnFwDisplayFade.c)
 *     AnFwpFadeAnimationTimer @ 0x1409F24C0 (AnFwpFadeAnimationTimer.c)
 * Callees:
 *     <none>
 */

__int64 BgpGetBitsPerPixel()
{
  __int64 result; // rax

  if ( (_DWORD)xmmword_140C13490 == 4 )
    return 24LL;
  result = 1LL;
  if ( (_DWORD)xmmword_140C13490 == 5 )
    return 32LL;
  return result;
}
