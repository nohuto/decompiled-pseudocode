/*
 * XREFs of ?Present@CLegacySwapChain@@$4PPPPPPPM@A@EAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x1801090B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacySwapChain::Present(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  return CLegacySwapChain::Present(a1 - *(int *)(a1 - 4), a2, a3, a4, a5);
}
