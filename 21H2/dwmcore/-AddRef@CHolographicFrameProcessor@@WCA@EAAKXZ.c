/*
 * XREFs of ?AddRef@CHolographicFrameProcessor@@WCA@EAAKXZ @ 0x18010ADB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHolographicFrameProcessor::AddRef(__int64 a1)
{
  return CManipulationContext::AddRef((CManipulationContext *)(a1 - 32));
}
