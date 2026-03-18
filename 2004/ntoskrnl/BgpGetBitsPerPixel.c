/*
 * XREFs of BgpGetBitsPerPixel @ 0x1403994F0
 * Callers:
 *     BgpGxDrawRectangle @ 0x140399108 (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x140399198 (GxpWriteFrameBufferPixels.c)
 *     BgpTxtDisplayCharacter @ 0x1403A8F98 (BgpTxtDisplayCharacter.c)
 *     BgpGxProcessQrCodeBitmap @ 0x1403CB128 (BgpGxProcessQrCodeBitmap.c)
 *     BgpClearScreen @ 0x1405BEDC4 (BgpClearScreen.c)
 *     BgpFwDisplayBugCheckScreen @ 0x1405C0254 (BgpFwDisplayBugCheckScreen.c)
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

  if ( (_DWORD)xmmword_140C132B0 == 4 )
    return 24LL;
  result = 1LL;
  if ( (_DWORD)xmmword_140C132B0 == 5 )
    return 32LL;
  return result;
}
