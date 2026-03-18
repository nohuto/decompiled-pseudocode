/*
 * XREFs of ?BoostFrameRate@CLegacySwapChain@@$4PPPPPPPM@BKI@EAA_N_N@Z @ 0x18010A330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CLegacySwapChain::BoostFrameRate(__int64 a1, bool a2)
{
  return CLegacySwapChain::BoostFrameRate((CLegacySwapChain *)(a1 - *(int *)(a1 - 4) - 424), a2);
}
