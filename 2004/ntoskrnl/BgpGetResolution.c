/*
 * XREFs of BgpGetResolution @ 0x140360B50
 * Callers:
 *     LogFwReport @ 0x1409EE718 (LogFwReport.c)
 *     GxpReadFrameBufferPixels @ 0x1409EEA40 (GxpReadFrameBufferPixels.c)
 *     BgpTxtCreateRegion @ 0x1409F00D4 (BgpTxtCreateRegion.c)
 *     BgpConsoleInitialize @ 0x1409F1820 (BgpConsoleInitialize.c)
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
