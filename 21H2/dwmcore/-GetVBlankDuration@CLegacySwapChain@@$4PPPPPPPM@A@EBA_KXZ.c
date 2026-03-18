/*
 * XREFs of ?GetVBlankDuration@CLegacySwapChain@@$4PPPPPPPM@A@EBA_KXZ @ 0x180108F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CLegacySwapChain::GetVBlankDuration(__int64 a1)
{
  return CLegacySwapChain::GetVBlankDuration((CLegacySwapChain *)(a1 - *(int *)(a1 - 4)));
}
