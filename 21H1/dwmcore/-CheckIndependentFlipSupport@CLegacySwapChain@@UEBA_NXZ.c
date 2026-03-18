/*
 * XREFs of ?CheckIndependentFlipSupport@CLegacySwapChain@@UEBA_NXZ @ 0x18024A3CC
 * Callers:
 *     ?CheckIndependentFlipSupport@CLegacySwapChain@@$4PPPPPPPM@A@EBA_NXZ @ 0x1800EEA90 (-CheckIndependentFlipSupport@CLegacySwapChain@@$4PPPPPPPM@A@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CLegacySwapChain::CheckIndependentFlipSupport(CLegacySwapChain *this)
{
  return *(_DWORD *)(*((_QWORD *)this - 36) + 628LL) >= 1300;
}
