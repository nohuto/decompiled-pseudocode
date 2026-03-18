/*
 * XREFs of ?AddRef@CInteraction@@UEAAKXZ @ 0x1800BAB10
 * Callers:
 *     ?AddRef@CHolographicExclusivePresentData@@W7EAAKXZ @ 0x1800EDD80 (-AddRef@CHolographicExclusivePresentData@@W7EAAKXZ.c)
 *     ?AddRef@CHolographicFrameProcessor@@WCA@EAAKXZ @ 0x1800EFBB0 (-AddRef@CHolographicFrameProcessor@@WCA@EAAKXZ.c)
 *     ?AddRef@CHolographicFrameProcessor@@WCI@EAAKXZ @ 0x1800EFBC0 (-AddRef@CHolographicFrameProcessor@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteraction::AddRef(CInteraction *this)
{
  return CMILCOMBase::InternalAddRef((CInteraction *)((char *)this + 8));
}
