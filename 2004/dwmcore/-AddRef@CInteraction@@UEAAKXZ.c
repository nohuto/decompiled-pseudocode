/*
 * XREFs of ?AddRef@CInteraction@@UEAAKXZ @ 0x1800C0840
 * Callers:
 *     ?AddRef@CHolographicExclusivePresentData@@W7EAAKXZ @ 0x1800F0D10 (-AddRef@CHolographicExclusivePresentData@@W7EAAKXZ.c)
 *     ?AddRef@CHolographicFrameProcessor@@WCA@EAAKXZ @ 0x1800F2B40 (-AddRef@CHolographicFrameProcessor@@WCA@EAAKXZ.c)
 *     ?AddRef@CHolographicFrameProcessor@@WCI@EAAKXZ @ 0x1800F2B50 (-AddRef@CHolographicFrameProcessor@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteraction::AddRef(CInteraction *this)
{
  return CMILCOMBase::InternalAddRef((CInteraction *)((char *)this + 8));
}
