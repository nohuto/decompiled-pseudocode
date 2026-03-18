/*
 * XREFs of BgpGetBitsPerPixel @ 0x1403A8368
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x1403A7CAC (BgpTxtDisplayCharacter.c)
 *     BgpGxDrawRectangle @ 0x1403A7F70 (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x1403A8000 (GxpWriteFrameBufferPixels.c)
 *     BgpGxProcessQrCodeBitmap @ 0x1403DD848 (BgpGxProcessQrCodeBitmap.c)
 *     BgpClearScreen @ 0x14064D4AC (BgpClearScreen.c)
 *     BgpFwDisplayBugCheckScreen @ 0x14064E9C0 (BgpFwDisplayBugCheckScreen.c)
 *     AnFwConfigureProgressResources @ 0x140AAB930 (AnFwConfigureProgressResources.c)
 *     LogFwReport @ 0x140AABB9C (LogFwReport.c)
 *     BgpGxReadRectangle @ 0x140AABE28 (BgpGxReadRectangle.c)
 *     GxpReadFrameBufferPixels @ 0x140AABFF8 (GxpReadFrameBufferPixels.c)
 *     AnFwDisplayFade @ 0x140AAC1BC (AnFwDisplayFade.c)
 *     AnFwpFadeAnimationTimer @ 0x140AACB80 (AnFwpFadeAnimationTimer.c)
 * Callees:
 *     <none>
 */

__int64 BgpGetBitsPerPixel()
{
  __int64 result; // rax

  if ( (_DWORD)xmmword_140C0DF30 == 4 )
    return 24LL;
  result = 1LL;
  if ( (_DWORD)xmmword_140C0DF30 == 5 )
    return 32LL;
  return result;
}
