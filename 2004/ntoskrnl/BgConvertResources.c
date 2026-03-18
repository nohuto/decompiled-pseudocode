/*
 * XREFs of BgConvertResources @ 0x1409F3550
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1403C96F0 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpGxConvertRectangle @ 0x1403CB1AC (BgpGxConvertRectangle.c)
 */

__int64 __fastcall BgConvertResources(unsigned int a1)
{
  return BgpGxConvertRectangle(&qword_140C13398, a1);
}
