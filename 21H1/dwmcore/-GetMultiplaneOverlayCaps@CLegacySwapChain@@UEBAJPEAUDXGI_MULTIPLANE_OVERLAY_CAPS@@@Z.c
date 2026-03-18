/*
 * XREFs of ?GetMultiplaneOverlayCaps@CLegacySwapChain@@UEBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x1800D0EA0
 * Callers:
 *     ?GetMultiplaneOverlayCaps@CLegacySwapChain@@$4PPPPPPPM@A@EBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x1800EEB70 (-GetMultiplaneOverlayCaps@CLegacySwapChain@@$4PPPPPPPM@A@EBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@.c)
 *     ?GetMultiplaneOverlayCaps@CConversionSwapChain@@UEBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x1802505B4 (-GetMultiplaneOverlayCaps@CConversionSwapChain@@UEBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2101c_27737997@@@details@wil@@QEAA_NXZ @ 0x1800E5E04 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2101c_27737997@@@detail.c)
 *     ?ResetCheckMPOCache@CD3DDevice@@QEAAXXZ @ 0x1800EA590 (-ResetCheckMPOCache@CD3DDevice@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
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
      MilInstrumentationCheckHR_MaybeFailFast(v6, &dword_1802ADB18, 2u, v5, 0x22Du, 0LL);
    }
    else
    {
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2101c_27737997>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_2101c_27737997>::GetImpl'::`2'::impl) )
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
    MilInstrumentationCheckHR_MaybeFailFast(0LL, &dword_1802ADB18, 2u, -2003304307, 0x243u, 0LL);
  }
  return v7;
}
