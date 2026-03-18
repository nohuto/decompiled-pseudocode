/*
 * XREFs of ?CheckPresentDurationSupport@CLegacySwapChain@@$4PPPPPPPM@A@EBAII_NI@Z @ 0x180108D50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CLegacySwapChain::CheckPresentDurationSupport(
        __int64 a1,
        unsigned int a2,
        bool a3,
        unsigned int a4)
{
  return CLegacySwapChain::CheckPresentDurationSupport((CLegacySwapChain *)(a1 - *(int *)(a1 - 4)), a2, a3, a4);
}
