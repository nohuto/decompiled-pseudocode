/*
 * XREFs of BgConvertResources @ 0x1409F6550
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1403CCD00 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpGxConvertRectangle @ 0x1403CE694 (BgpGxConvertRectangle.c)
 */

__int64 __fastcall BgConvertResources(unsigned int a1)
{
  return BgpGxConvertRectangle(&qword_140C13578, a1);
}
