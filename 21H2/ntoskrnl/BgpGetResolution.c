/*
 * XREFs of BgpGetResolution @ 0x140251E30
 * Callers:
 *     LogFwReport @ 0x1409F2524 (LogFwReport.c)
 *     GxpReadFrameBufferPixels @ 0x1409F2A40 (GxpReadFrameBufferPixels.c)
 *     BgpTxtCreateRegion @ 0x1409F40D4 (BgpTxtCreateRegion.c)
 *     BgpConsoleInitialize @ 0x1409F5820 (BgpConsoleInitialize.c)
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
