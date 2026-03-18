/*
 * XREFs of ?PresentDFlip@CLegacyStereoSwapChain@@UEAAJIIIPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x180290B8C
 * Callers:
 *     ?PresentDFlip@CLegacyStereoSwapChain@@$4PPPPPPPM@A@EAAJIIIPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x18010A0F0 (-PresentDFlip@CLegacyStereoSwapChain@@$4PPPPPPPM@A@EAAJIIIPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_.c)
 * Callees:
 *     ?PostPresent@CLegacySwapChain@@IEAAX_N0@Z @ 0x18001BF70 (-PostPresent@CLegacySwapChain@@IEAAX_N0@Z.c)
 *     ?Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z @ 0x18001C148 (-Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x180111D0C (McTemplateU0x_EventWriteTransfer.c)
 */

__int64 __fastcall CLegacyStereoSwapChain::PresentDFlip(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx

  v2 = CD3DDevice::Present(*(CD3DDevice **)(a1 - 360), *(struct IDXGISwapChainDWM1 **)(a1 - 352));
  v4 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0LL, v2, 0xAEu);
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McTemplateU0x_EventWriteTransfer(v3, &EVTDESC_ETWGUID_DIRECTFLIP_PRESENTEVENT, *(unsigned int *)(a1 - 272));
    CLegacySwapChain::PostPresent((CLegacySwapChain *)(a1 - 424), 0, v4 == 142213121);
  }
  return v4;
}
