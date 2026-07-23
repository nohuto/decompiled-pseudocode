/*
 * XREFs of BgConvertResources @ 0x1409F7550
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1403CCE70 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpGxConvertRectangle @ 0x1403CE804 (BgpGxConvertRectangle.c)
 */

__int64 __fastcall BgConvertResources(unsigned int a1)
{
  return BgpGxConvertRectangle(&qword_140C13578, a1);
}
