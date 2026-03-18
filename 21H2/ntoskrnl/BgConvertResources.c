/*
 * XREFs of BgConvertResources @ 0x140AB0880
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1403DC330 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpGxConvertRectangle @ 0x1403DD8CC (BgpGxConvertRectangle.c)
 */

__int64 __fastcall BgConvertResources(unsigned int a1)
{
  return BgpGxConvertRectangle(&qword_140C0E018, a1);
}
