/*
 * XREFs of ?GetMultiplaneOverlayCaps@CConversionSwapChain@@UEBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x18024F844
 * Callers:
 *     ?GetMultiplaneOverlayCaps@CConversionSwapChain@@$4PPPPPPPM@A@EBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x1800F7D70 (-GetMultiplaneOverlayCaps@CConversionSwapChain@@$4PPPPPPPM@A@EBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAP.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetMultiplaneOverlayCaps@CLegacySwapChain@@UEBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x1800DD630 (-GetMultiplaneOverlayCaps@CLegacySwapChain@@UEBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z.c)
 */

__int64 __fastcall CConversionSwapChain::GetMultiplaneOverlayCaps(
        CConversionSwapChain *this,
        struct DXGI_MULTIPLANE_OVERLAY_CAPS *a2)
{
  int MultiplaneOverlayCaps; // eax
  __int64 v4; // rcx
  unsigned int v5; // edi
  int v6; // r8d

  MultiplaneOverlayCaps = CLegacySwapChain::GetMultiplaneOverlayCaps((CConversionSwapChain *)((char *)this - 424), a2);
  v5 = MultiplaneOverlayCaps;
  if ( MultiplaneOverlayCaps < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, MultiplaneOverlayCaps, 0xA9u, 0LL);
  }
  else
  {
    v6 = *((_DWORD *)a2 + 3);
    *(_DWORD *)a2 = 2;
    *(_OWORD *)((char *)a2 + 4) = CConversionSwapChain::sc_fakeOverlayCaps;
    *((_DWORD *)a2 + 5) = 998244352;
    if ( (v6 & 0x40000) != 0 )
      *((_DWORD *)a2 + 3) |= 0x40000u;
    *(_OWORD *)((char *)a2 + 24) = 0LL;
    *((_DWORD *)a2 + 10) = 0;
  }
  return v5;
}
