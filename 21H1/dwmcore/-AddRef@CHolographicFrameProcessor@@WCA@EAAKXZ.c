/*
 * XREFs of ?AddRef@CHolographicFrameProcessor@@WCA@EAAKXZ @ 0x1800EFBB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicFrameProcessor::AddRef(__int64 a1)
{
  return CInteraction::AddRef((CInteraction *)(a1 - 32));
}
