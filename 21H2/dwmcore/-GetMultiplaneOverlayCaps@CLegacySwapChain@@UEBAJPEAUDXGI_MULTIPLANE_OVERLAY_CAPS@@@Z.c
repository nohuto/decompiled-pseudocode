/*
 * XREFs of ?GetMultiplaneOverlayCaps@CLegacySwapChain@@UEBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x1800F378C
 * Callers:
 *     ?GetMultiplaneOverlayCaps@CLegacySwapChain@@$4PPPPPPPM@A@EBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x180108EB0 (-GetMultiplaneOverlayCaps@CLegacySwapChain@@$4PPPPPPPM@A@EBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@.c)
 *     ?GetMultiplaneOverlayCaps@CConversionSwapChain@@UEBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x180292ABC (-GetMultiplaneOverlayCaps@CConversionSwapChain@@UEBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@0@@Z @ 0x1800F3678 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCCheckMPOCache@@U-$default_delete@VCCheckMPOCache@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacySwapChain::GetMultiplaneOverlayCaps(
        CLegacySwapChain *this,
        struct DXGI_MULTIPLANE_OVERLAY_CAPS *a2)
{
  __int64 v3; // rcx
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebp
  __int64 v8; // rbx

  *((_DWORD *)this - 41) = 0;
  v3 = *((_QWORD *)this - 41);
  if ( v3 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 168LL))(v3);
    v7 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, &dword_1802E18D0, 2LL, v5, 0x355u);
    }
    else
    {
      v8 = *((_QWORD *)this - 42);
      std::_Destroy_range<std::allocator<std::unique_ptr<CCheckMPOCache>>>(
        *(__int64 ***)(v8 + 1448),
        *(_QWORD *)(v8 + 1456));
      *(_QWORD *)(v8 + 1456) = *(_QWORD *)(v8 + 1448);
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
    MilInstrumentationCheckHR_MaybeFailFast(0LL, &dword_1802E18D0, 2LL, -2003304307, 0x368u);
  }
  return v7;
}
