/*
 * XREFs of BgpGetResolution @ 0x140331880
 * Callers:
 *     LogFwReport @ 0x1409F4718 (LogFwReport.c)
 *     GxpReadFrameBufferPixels @ 0x1409F4A40 (GxpReadFrameBufferPixels.c)
 *     BgpTxtCreateRegion @ 0x1409F60D4 (BgpTxtCreateRegion.c)
 *     BgpConsoleInitialize @ 0x1409F7820 (BgpConsoleInitialize.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall BgpGetResolution(_DWORD *a1)
{
  *a1 = DWORD2(BgInternal);
  a1[1] = DWORD1(BgInternal);
  a1[2] = HIDWORD(BgInternal);
  return a1;
}
