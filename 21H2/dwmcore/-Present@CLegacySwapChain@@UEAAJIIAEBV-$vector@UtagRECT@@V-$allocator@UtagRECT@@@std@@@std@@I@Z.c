/*
 * XREFs of ?Present@CLegacySwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x18001BE80
 * Callers:
 *     ?Present@CLegacySwapChain@@$4PPPPPPPM@A@EAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x1801090B0 (-Present@CLegacySwapChain@@$4PPPPPPPM@A@EAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std.c)
 *     ?Present@CConversionSwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x180292ECC (-Present@CConversionSwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@.c)
 *     ?PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180292F84 (-PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPL.c)
 * Callees:
 *     ?PostPresent@CLegacySwapChain@@IEAAX_N0@Z @ 0x18001BF70 (-PostPresent@CLegacySwapChain@@IEAAX_N0@Z.c)
 *     ?Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z @ 0x18001C148 (-Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z.c)
 *     ?PrePresent@CLegacySwapChain@@IEAAX_N@Z @ 0x18001C21C (-PrePresent@CLegacySwapChain@@IEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0qqq_EventWriteTransfer @ 0x180111C8E (McTemplateU0qqq_EventWriteTransfer.c)
 */

__int64 __fastcall CLegacySwapChain::Present(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  CLegacySwapChain *v5; // r14
  bool v10; // bp
  const struct tagRECT *v11; // r10
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // ebx

  v5 = (CLegacySwapChain *)(a1 - 400);
  v10 = (a3 & 2) != 0;
  CLegacySwapChain::PrePresent((CLegacySwapChain *)(a1 - 400), v10);
  v11 = 0LL;
  LODWORD(v12) = 0;
  if ( (a3 & 2) == 0 )
  {
    v11 = *(const struct tagRECT **)a4;
    v12 = (__int64)(*(_QWORD *)(a4 + 8) - *(_QWORD *)a4) >> 4;
    if ( !(_DWORD)v12 )
    {
      LODWORD(v12) = 1;
      v11 = (const struct tagRECT *)&TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::sc_rcEmpty;
    }
  }
  v13 = CD3DDevice::Present(
          *(CD3DDevice **)(a1 - 336),
          *(struct IDXGISwapChainDWM1 **)(a1 - 328),
          a2,
          a3,
          a5,
          0LL,
          v11,
          v12);
  v15 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x3E2u, 0LL);
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0qqq_EventWriteTransfer(v14, (unsigned int)&EVTDESC_ETWGUID_PRESENT, a5, 0, a3);
    CLegacySwapChain::PostPresent(v5, v10, v15 == 142213121);
  }
  return v15;
}
