/*
 * XREFs of BgpGetBitsPerPixel @ 0x14039B9B0
 * Callers:
 *     BgpGxDrawRectangle @ 0x14039B5C8 (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x14039B658 (GxpWriteFrameBufferPixels.c)
 *     BgpTxtDisplayCharacter @ 0x1403AB988 (BgpTxtDisplayCharacter.c)
 *     BgpGxProcessQrCodeBitmap @ 0x1403CDD48 (BgpGxProcessQrCodeBitmap.c)
 *     BgpClearScreen @ 0x1405C2A44 (BgpClearScreen.c)
 *     BgpFwDisplayBugCheckScreen @ 0x1405C3ED4 (BgpFwDisplayBugCheckScreen.c)
 *     AnFwConfigureProgressResources @ 0x1409F4608 (AnFwConfigureProgressResources.c)
 *     LogFwReport @ 0x1409F4718 (LogFwReport.c)
 *     BgpGxReadRectangle @ 0x1409F49D0 (BgpGxReadRectangle.c)
 *     GxpReadFrameBufferPixels @ 0x1409F4A40 (GxpReadFrameBufferPixels.c)
 *     AnFwDisplayFade @ 0x1409F4C00 (AnFwDisplayFade.c)
 *     AnFwpFadeAnimationTimer @ 0x1409F54C0 (AnFwpFadeAnimationTimer.c)
 * Callees:
 *     <none>
 */

__int64 BgpGetBitsPerPixel()
{
  __int64 result; // rax

  if ( (_DWORD)xmmword_140C132D0 == 4 )
    return 24LL;
  result = 1LL;
  if ( (_DWORD)xmmword_140C132D0 == 5 )
    return 32LL;
  return result;
}
