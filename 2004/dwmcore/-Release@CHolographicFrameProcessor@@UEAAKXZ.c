/*
 * XREFs of ?Release@CHolographicFrameProcessor@@UEAAKXZ @ 0x18025B180
 * Callers:
 *     ?Release@CHolographicExclusivePresentData@@W7EAAKXZ @ 0x1800F2B70 (-Release@CHolographicExclusivePresentData@@W7EAAKXZ.c)
 *     ?Release@CHolographicFrameProcessor@@WCA@EAAKXZ @ 0x1800F2B80 (-Release@CHolographicFrameProcessor@@WCA@EAAKXZ.c)
 *     ?Release@CHolographicFrameProcessor@@WCI@EAAKXZ @ 0x1800F2B90 (-Release@CHolographicFrameProcessor@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicFrameProcessor::Release(CHolographicFrameProcessor *this)
{
  return CRenderTargetBitmap::Release((CHolographicFrameProcessor *)((char *)this + 8));
}
