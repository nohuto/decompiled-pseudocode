/*
 * XREFs of ?Present@CConversionSwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x1800EC2E8
 * Callers:
 *     ?Present@CConversionSwapChain@@$4PPPPPPPM@A@EAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x1800F2480 (-Present@CConversionSwapChain@@$4PPPPPPPM@A@EAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Present@CLegacySwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x1800EC058 (-Present@CLegacySwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@I@Z.c)
 *     ?ConvertSingleDesktopPlane@CConversionSwapChain@@IEAAJXZ @ 0x18024D2E0 (-ConvertSingleDesktopPlane@CConversionSwapChain@@IEAAJXZ.c)
 */

__int64 __fastcall CConversionSwapChain::Present(__int64 a1, unsigned int a2, char a3, __int64 a4, unsigned int a5)
{
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // edi
  __int64 result; // rax

  if ( (a3 & 2) == 0 )
  {
    *(_DWORD *)(a1 - 460) = 0;
    CConversionSwapChain::ConvertSingleDesktopPlane((CConversionSwapChain *)(a1 - 776));
  }
  v9 = CLegacySwapChain::Present(a1 - 424, a2, a3, a4, a5);
  v11 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x11Au, 0LL);
  result = v11;
  **(_DWORD **)(a1 - 184) = 0;
  return result;
}
