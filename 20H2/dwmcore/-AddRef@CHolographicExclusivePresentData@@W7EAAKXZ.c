/*
 * XREFs of ?AddRef@CHolographicExclusivePresentData@@W7EAAKXZ @ 0x1800F0960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicExclusivePresentData::AddRef(__int64 a1)
{
  return CInteraction::AddRef((CInteraction *)(a1 - 8));
}
