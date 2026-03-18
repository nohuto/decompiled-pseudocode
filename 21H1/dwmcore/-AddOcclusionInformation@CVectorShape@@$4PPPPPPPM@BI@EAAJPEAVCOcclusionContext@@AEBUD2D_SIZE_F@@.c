/*
 * XREFs of ?AddOcclusionInformation@CVectorShape@@$4PPPPPPPM@BI@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x1800EBFD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVectorShape::AddOcclusionInformation(__int64 a1)
{
  return CLegacyStereoSwapChain::EnsureComputeScribbleResources((CLegacyStereoSwapChain *)(a1 - *(int *)(a1 - 4) - 24));
}
