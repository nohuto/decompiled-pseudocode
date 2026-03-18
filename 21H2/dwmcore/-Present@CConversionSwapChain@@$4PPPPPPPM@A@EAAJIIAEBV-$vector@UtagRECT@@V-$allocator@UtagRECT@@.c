/*
 * XREFs of ?Present@CConversionSwapChain@@$4PPPPPPPM@A@EAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x18010A6F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CConversionSwapChain::Present(__int64 a1, int a2, int a3, int a4, int a5)
{
  return CConversionSwapChain::Present((int)a1 - *(_DWORD *)(a1 - 4), a2, a3, a4, a5);
}
