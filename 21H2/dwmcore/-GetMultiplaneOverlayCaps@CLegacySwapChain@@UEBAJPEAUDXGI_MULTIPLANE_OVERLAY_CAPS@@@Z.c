/*
 * XREFs of ?GetMultiplaneOverlayCaps@CLegacySwapChain@@UEBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x1800DD630
 * Callers:
 *     ?GetMultiplaneOverlayCaps@CLegacySwapChain@@$4PPPPPPPM@A@EBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x1800F7560 (-GetMultiplaneOverlayCaps@CLegacySwapChain@@$4PPPPPPPM@A@EBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@.c)
 *     ?GetMultiplaneOverlayCaps@CConversionSwapChain@@UEBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x18024F844 (-GetMultiplaneOverlayCaps@CConversionSwapChain@@UEBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ResetCheckMPOCache@CD3DDevice@@QEAAXXZ @ 0x1800F1760 (-ResetCheckMPOCache@CD3DDevice@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacySwapChain::GetMultiplaneOverlayCaps(
        CLegacySwapChain *this,
        struct DXGI_MULTIPLANE_OVERLAY_CAPS *a2)
{
  __int64 v3; // rcx
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // esi

  *((_DWORD *)this - 41) = 0;
  v3 = *((_QWORD *)this - 35);
  if ( v3 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 168LL))(v3);
    v7 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, &dword_1802ACF50, 2u, v5, 0x224u, 0LL);
    }
    else
    {
      CD3DDevice::ResetCheckMPOCache(*((CD3DDevice **)this - 36));
      if ( (*((_DWORD *)a2 + 3) & 0x40000) != 0 )
      {
        *((_DWORD *)this - 41) = 2;
      }
      else if ( *(_DWORD *)a2 > 1u && (*((_DWORD *)a2 + 1) || *((_DWORD *)a2 + 2)) )
      {
        *((_DWORD *)this - 41) = 1;
      }
    }
  }
  else
  {
    v7 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, &dword_1802ACF50, 2u, -2003304307, 0x237u, 0LL);
  }
  return v7;
}
