/*
 * XREFs of BgpGetResolution @ 0x14025E2BC
 * Callers:
 *     LogFwReport @ 0x140AABB9C (LogFwReport.c)
 *     GxpReadFrameBufferPixels @ 0x140AABFF8 (GxpReadFrameBufferPixels.c)
 *     BgpTxtCreateRegion @ 0x140AAC868 (BgpTxtCreateRegion.c)
 *     BgpConsoleInitialize @ 0x140AAE560 (BgpConsoleInitialize.c)
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
