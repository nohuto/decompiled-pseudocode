/*
 * XREFs of ?Present@CLegacyStereoSwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x1800EB45C
 * Callers:
 *     ?Present@CLegacyStereoSwapChain@@$4PPPPPPPM@A@EAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x1800EF0D0 (-Present@CLegacyStereoSwapChain@@$4PPPPPPPM@A@EAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z @ 0x18006D074 (-Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z.c)
 *     ?PostPresent@CLegacySwapChain@@IEAAX_N@Z @ 0x1800BC46C (-PostPresent@CLegacySwapChain@@IEAAX_N@Z.c)
 *     ?PrePresent@CLegacySwapChain@@IEAAX_N@Z @ 0x1800BE7F0 (-PrePresent@CLegacySwapChain@@IEAAX_N@Z.c)
 *     McTemplateU0qqq_EventWriteTransfer @ 0x180155E98 (McTemplateU0qqq_EventWriteTransfer.c)
 */

__int64 __fastcall CLegacyStereoSwapChain::Present(__int64 a1, unsigned int a2, char a3, __int64 a4, unsigned int a5)
{
  CLegacySwapChain *v5; // r14
  int v8; // ebx
  char v10; // bp
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebx

  v5 = (CLegacySwapChain *)(a1 - 376);
  v8 = a3 & 2;
  v10 = v8 != 0;
  CLegacySwapChain::PrePresent((CLegacySwapChain *)(a1 - 376), v8 != 0);
  v11 = CD3DDevice::Present(*(CD3DDevice **)(a1 - 312), *(struct IDXGISwapChainDWM1 **)(a1 - 304), a2, a3);
  v13 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x85u, 0LL);
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0qqq_EventWriteTransfer(v12, (unsigned int)&EVTDESC_ETWGUID_PRESENT, a5, 0, a3);
    CLegacySwapChain::PostPresent(v5, v10);
  }
  return v13;
}
