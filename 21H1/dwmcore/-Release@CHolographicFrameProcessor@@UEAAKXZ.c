/*
 * XREFs of ?Release@CHolographicFrameProcessor@@UEAAKXZ @ 0x18025DBF0
 * Callers:
 *     ?Release@CHolographicExclusivePresentData@@W7EAAKXZ @ 0x1800EFBE0 (-Release@CHolographicExclusivePresentData@@W7EAAKXZ.c)
 *     ?Release@CHolographicFrameProcessor@@WCA@EAAKXZ @ 0x1800EFBF0 (-Release@CHolographicFrameProcessor@@WCA@EAAKXZ.c)
 *     ?Release@CHolographicFrameProcessor@@WCI@EAAKXZ @ 0x1800EFC00 (-Release@CHolographicFrameProcessor@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicFrameProcessor::Release(CHolographicFrameProcessor *this)
{
  return CRenderTargetBitmap::Release((CHolographicFrameProcessor *)((char *)this + 8));
}
