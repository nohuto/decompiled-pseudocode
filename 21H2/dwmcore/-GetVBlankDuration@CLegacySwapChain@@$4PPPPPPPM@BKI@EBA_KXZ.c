/*
 * XREFs of ?GetVBlankDuration@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA_KXZ @ 0x18010A590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CLegacySwapChain::GetVBlankDuration(__int64 a1)
{
  return CLegacySwapChain::GetVBlankDuration((CLegacySwapChain *)(a1 - *(int *)(a1 - 4) - 424));
}
