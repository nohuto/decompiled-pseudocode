/*
 * XREFs of ?CheckIndependentFlipSupport@CLegacySwapChain@@UEBA_NXZ @ 0x180247984
 * Callers:
 *     ?CheckIndependentFlipSupport@CLegacySwapChain@@$4PPPPPPPM@A@EBA_NXZ @ 0x1800F1A20 (-CheckIndependentFlipSupport@CLegacySwapChain@@$4PPPPPPPM@A@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CLegacySwapChain::CheckIndependentFlipSupport(CLegacySwapChain *this)
{
  return *(_DWORD *)(*((_QWORD *)this - 36) + 628LL) >= 1300;
}
