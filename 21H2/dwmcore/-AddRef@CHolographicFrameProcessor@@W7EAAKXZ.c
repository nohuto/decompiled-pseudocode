/*
 * XREFs of ?AddRef@CHolographicFrameProcessor@@W7EAAKXZ @ 0x18010AD90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHolographicFrameProcessor::AddRef(__int64 a1)
{
  return CManipulationContext::AddRef((CManipulationContext *)(a1 - 8));
}
