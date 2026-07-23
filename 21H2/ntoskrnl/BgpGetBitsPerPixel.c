/*
 * XREFs of BgpGetBitsPerPixel @ 0x14039C3D0
 * Callers:
 *     BgpGxDrawRectangle @ 0x14039BFE8 (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x14039C078 (GxpWriteFrameBufferPixels.c)
 *     BgpTxtDisplayCharacter @ 0x1403B19F8 (BgpTxtDisplayCharacter.c)
 *     BgpGxProcessQrCodeBitmap @ 0x1403CE780 (BgpGxProcessQrCodeBitmap.c)
 *     BgpClearScreen @ 0x1405C44A4 (BgpClearScreen.c)
 *     BgpFwDisplayBugCheckScreen @ 0x1405C5934 (BgpFwDisplayBugCheckScreen.c)
 *     LogFwReport @ 0x1409F2524 (LogFwReport.c)
 *     AnFwConfigureProgressResources @ 0x1409F2744 (AnFwConfigureProgressResources.c)
 *     BgpGxReadRectangle @ 0x1409F29D0 (BgpGxReadRectangle.c)
 *     GxpReadFrameBufferPixels @ 0x1409F2A40 (GxpReadFrameBufferPixels.c)
 *     AnFwDisplayFade @ 0x1409F2C00 (AnFwDisplayFade.c)
 *     AnFwpFadeAnimationTimer @ 0x1409F34C0 (AnFwpFadeAnimationTimer.c)
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
