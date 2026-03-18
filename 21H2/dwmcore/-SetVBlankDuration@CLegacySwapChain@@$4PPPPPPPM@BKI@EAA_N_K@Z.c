/*
 * XREFs of ?SetVBlankDuration@CLegacySwapChain@@$4PPPPPPPM@BKI@EAA_N_K@Z @ 0x18010A890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CLegacySwapChain::SetVBlankDuration(__int64 a1, unsigned __int64 a2)
{
  return CLegacySwapChain::SetVBlankDuration((CLegacySwapChain *)(a1 - *(int *)(a1 - 4) - 424), a2);
}
