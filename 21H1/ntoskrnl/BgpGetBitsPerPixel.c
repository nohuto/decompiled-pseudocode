/*
 * XREFs of BgpGetBitsPerPixel @ 0x140398D60
 * Callers:
 *     BgpGxDrawRectangle @ 0x140398978 (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x140398A08 (GxpWriteFrameBufferPixels.c)
 *     BgpTxtDisplayCharacter @ 0x1403AF7F4 (BgpTxtDisplayCharacter.c)
 *     BgpGxProcessQrCodeBitmap @ 0x1403CA348 (BgpGxProcessQrCodeBitmap.c)
 *     BgpClearScreen @ 0x1405BE6A4 (BgpClearScreen.c)
 *     BgpFwDisplayBugCheckScreen @ 0x1405BFB34 (BgpFwDisplayBugCheckScreen.c)
 *     AnFwConfigureProgressResources @ 0x1409EE608 (AnFwConfigureProgressResources.c)
 *     LogFwReport @ 0x1409EE718 (LogFwReport.c)
 *     BgpGxReadRectangle @ 0x1409EE9D0 (BgpGxReadRectangle.c)
 *     GxpReadFrameBufferPixels @ 0x1409EEA40 (GxpReadFrameBufferPixels.c)
 *     AnFwDisplayFade @ 0x1409EEC00 (AnFwDisplayFade.c)
 *     AnFwpFadeAnimationTimer @ 0x1409EF4C0 (AnFwpFadeAnimationTimer.c)
 * Callees:
 *     <none>
 */

__int64 BgpGetBitsPerPixel()
{
  __int64 result; // rax

  if ( (_DWORD)xmmword_140C13270 == 4 )
    return 24LL;
  result = 1LL;
  if ( (_DWORD)xmmword_140C13270 == 5 )
    return 32LL;
  return result;
}
