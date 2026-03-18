/*
 * XREFs of ?AddRef@CManipulationContext@@UEAAKXZ @ 0x180181FD0
 * Callers:
 *     ?AddRef@CHolographicManager@@W7EAAKXZ @ 0x180105210 (-AddRef@CHolographicManager@@W7EAAKXZ.c)
 *     ?AddRef@CHolographicFrameProcessor@@W7EAAKXZ @ 0x18010AD90 (-AddRef@CHolographicFrameProcessor@@W7EAAKXZ.c)
 *     ?AddRef@CHolographicFrameProcessor@@WCA@EAAKXZ @ 0x18010ADB0 (-AddRef@CHolographicFrameProcessor@@WCA@EAAKXZ.c)
 *     ?AddRef@CHolographicFrameProcessor@@WCI@EAAKXZ @ 0x18010ADD0 (-AddRef@CHolographicFrameProcessor@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CManipulationContext::AddRef(CManipulationContext *this)
{
  return CMILRefCountImpl::AddReference((CManipulationContext *)((char *)this + 16));
}
