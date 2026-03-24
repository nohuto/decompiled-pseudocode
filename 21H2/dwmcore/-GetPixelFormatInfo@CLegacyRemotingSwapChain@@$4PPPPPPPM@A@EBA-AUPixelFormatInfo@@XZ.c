/*
 * XREFs of ?GetPixelFormatInfo@CLegacyRemotingSwapChain@@$4PPPPPPPM@A@EBA?AUPixelFormatInfo@@XZ @ 0x1800F8440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyRemotingSwapChain::GetPixelFormatInfo(__int64 a1)
{
  return CLegacyRemotingSwapChain::GetPixelFormatInfo(a1 - *(int *)(a1 - 4));
}
