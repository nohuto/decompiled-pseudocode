/*
 * XREFs of ?CheckOcclusionState@CRenderTarget@@$4PPPPPPPM@HOI@EAAJXZ @ 0x1800EC310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderTarget::CheckOcclusionState(__int64 a1)
{
  return CDDARenderTarget::CheckOcclusionState((CDDARenderTarget *)(a1 - *(int *)(a1 - 4) - 2024));
}
