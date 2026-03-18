/*
 * XREFs of ?SetVBlankDuration@CLegacySwapChain@@$4PPPPPPPM@A@EAA_N_K@Z @ 0x180109250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CLegacySwapChain::SetVBlankDuration(__int64 a1, unsigned __int64 a2)
{
  return CLegacySwapChain::SetVBlankDuration((CLegacySwapChain *)(a1 - *(int *)(a1 - 4)), a2);
}
