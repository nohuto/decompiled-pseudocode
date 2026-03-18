/*
 * XREFs of ?Present@CLegacyStereoSwapChain@@$4PPPPPPPM@A@EAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x1800EF0D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyStereoSwapChain::Present(__int64 a1, unsigned int a2, char a3, __int64 a4, unsigned int a5)
{
  return CLegacyStereoSwapChain::Present(a1 - *(int *)(a1 - 4), a2, a3, a4, a5);
}
