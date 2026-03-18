/*
 * XREFs of BgConvertResources @ 0x1409F9550
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1403CC330 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpGxConvertRectangle @ 0x1403CDDCC (BgpGxConvertRectangle.c)
 */

__int64 __fastcall BgConvertResources(unsigned int a1)
{
  return BgpGxConvertRectangle(&qword_140C133B8, a1);
}
