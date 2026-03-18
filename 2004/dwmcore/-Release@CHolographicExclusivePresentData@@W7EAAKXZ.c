/*
 * XREFs of ?Release@CHolographicExclusivePresentData@@W7EAAKXZ @ 0x1800F2B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHolographicExclusivePresentData::Release(__int64 a1)
{
  return CHolographicFrameProcessor::Release((CHolographicFrameProcessor *)(a1 - 8));
}
