/*
 * XREFs of ?PresentDFlip@CLegacySwapChain@@UEAAJIIIPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x180248374
 * Callers:
 *     ?PresentDFlip@CLegacySwapChain@@$4PPPPPPPM@A@EAAJIIIPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x1800F1BD0 (-PresentDFlip@CLegacySwapChain@@$4PPPPPPPM@A@EAAJIIIPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@.c)
 *     ?PresentDFlip@CLegacySwapChain@@$4PPPPPPPM@BKI@EAAJIIIPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x1800F2490 (-PresentDFlip@CLegacySwapChain@@$4PPPPPPPM@BKI@EAAJIIIPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE.c)
 *     ?PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x18024DEC8 (-PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPL.c)
 * Callees:
 *     ?ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800334EC (-ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z @ 0x18007E13C (-Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z.c)
 *     ?PostPresent@CLegacySwapChain@@IEAAX_N@Z @ 0x1800C23B4 (-PostPresent@CLegacySwapChain@@IEAAX_N@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x180155A68 (McTemplateU0x_EventWriteTransfer.c)
 *     ?PresentMPO@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x18023E700 (-PresentMPO@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_P.c)
 *     ?DirectFlipRectRequiresPanelFitter@CLegacySwapChain@@IEBA_NAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180247DF4 (-DirectFlipRectRequiresPanelFitter@CLegacySwapChain@@IEBA_NAEBV-$TMilRect@IUMilRectU@@UMil3DRect.c)
 */

__int64 __fastcall CLegacySwapChain::PresentDFlip(
        __int64 a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        __int64 a5,
        enum DXGI_COLOR_SPACE_TYPE a6,
        enum DXGI_HDR_METADATA_TYPE a7,
        __int64 a8,
        _DWORD *a9,
        _DWORD *a10)
{
  char v11; // r14
  char v12; // bl
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  int v17; // eax

  v11 = 0;
  v12 = 0;
  v13 = ConvertSDRBoostToSDRWhiteLevel(*(float *)(a1 - 192), a6);
  if ( *(_DWORD *)(a1 - 164) == 2 || v13 )
    v11 = 1;
  if ( CLegacySwapChain::DirectFlipRectRequiresPanelFitter(a1 - 352, a9)
    || CLegacySwapChain::DirectFlipRectRequiresPanelFitter(a1 - 352, a10) )
  {
    v12 = 1;
  }
  if ( v11 || v12 )
  {
    v17 = CD3DDevice::PresentMPO(*(CD3DDevice **)(a1 - 288), *(struct IDXGISwapChainDWM1 **)(a1 - 280), a2, a3);
    v16 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v17, 0x310u, 0LL);
      return v16;
    }
  }
  else
  {
    v14 = CD3DDevice::Present(*(CD3DDevice **)(a1 - 288), *(struct IDXGISwapChainDWM1 **)(a1 - 280), a2, a3);
    v16 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x31Au, 0LL);
      return v16;
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0x_EventWriteTransfer(v15, &EVTDESC_ETWGUID_DIRECTFLIP_PRESENTEVENT, *(unsigned int *)(a1 - 172));
  CLegacySwapChain::PostPresent((CLegacySwapChain *)(a1 - 352), 0);
  return v16;
}
