/*
 * XREFs of BgConvertResources @ 0x1409F3550
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1403C88E0 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpGxConvertRectangle @ 0x1403CA3CC (BgpGxConvertRectangle.c)
 */

__int64 __fastcall BgConvertResources(unsigned int a1)
{
  return BgpGxConvertRectangle(&qword_140C13358, a1);
}
