/*
 * XREFs of ?UpdateRefreshRate@CLegacySwapChain@@UEAAJXZ @ 0x18028BDD0
 * Callers:
 *     ?UpdateRefreshRate@CLegacySwapChain@@$4PPPPPPPM@A@EAAJXZ @ 0x180109270 (-UpdateRefreshRate@CLegacySwapChain@@$4PPPPPPPM@A@EAAJXZ.c)
 *     ?UpdateRefreshRate@CLegacySwapChain@@$4PPPPPPPM@BI@EAAJXZ @ 0x18010A290 (-UpdateRefreshRate@CLegacySwapChain@@$4PPPPPPPM@BI@EAAJXZ.c)
 *     ?UpdateRefreshRate@CLegacySwapChain@@$4PPPPPPPM@BKI@EAAJXZ @ 0x18010A8B0 (-UpdateRefreshRate@CLegacySwapChain@@$4PPPPPPPM@BKI@EAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBC0 (--1-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CalcVBlankDuration@CLegacySwapChain@@IEAA_NAEBUDXGI_RATIONAL@@_K1I@Z @ 0x18001F16C (-CalcVBlankDuration@CLegacySwapChain@@IEAA_NAEBUDXGI_RATIONAL@@_K1I@Z.c)
 *     ?ValidateMinMaxVBlankDuration@@YAXAEBUDXGI_OUTPUT_DWM_DESC@@PEA_K1PEAI@Z @ 0x18001F364 (-ValidateMinMaxVBlankDuration@@YAXAEBUDXGI_OUTPUT_DWM_DESC@@PEA_K1PEAI@Z.c)
 *     ?GetCompositorClockBoost@CComposition@@QEBA_NXZ @ 0x18001F470 (-GetCompositorClockBoost@CComposition@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E98E4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ??$?9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@0@$$T@Z @ 0x180104F88 (--$-9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@UIDXGISwapChainD.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetDXGIOutput@CDisplayManager@@QEAAJU_LUID@@IPEAPEAUIDXGIOutputDWM@@@Z @ 0x18027F930 (-GetDXGIOutput@CDisplayManager@@QEAAJU_LUID@@IPEAPEAUIDXGIOutputDWM@@@Z.c)
 */

__int64 __fastcall CLegacySwapChain::UpdateRefreshRate(struct DXGI_RATIONAL *this)
{
  unsigned int v2; // ebx
  CDisplayManager *v3; // rcx
  int DXGIOutput; // eax
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  char CompositorClockBoost; // al
  char *v9; // rcx
  __int64 v10; // rdx
  struct IDXGIOutputDWM *v12; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v13; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v16[40]; // [rsp+50h] [rbp-B0h] BYREF
  DXGI_RATIONAL v17; // [rsp+78h] [rbp-88h] BYREF

  v2 = 0;
  if ( wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>(&this[-41]) )
  {
    v12 = 0LL;
    wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((__int64 *)&v12);
    DXGIOutput = CDisplayManager::GetDXGIOutput(v3, (struct _LUID)this[-32], this[-24].Numerator, &v12);
    v2 = DXGIOutput;
    if ( DXGIOutput < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0LL, DXGIOutput, 0x167u);
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(struct IDXGIOutputDWM *, _BYTE *))(*(_QWORD *)v12 + 32LL))(v12, v16);
      v2 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, v6, 0x16Au);
      }
      else
      {
        ValidateMinMaxVBlankDuration((const struct DXGI_OUTPUT_DWM_DESC *)v16, (LONGLONG *)&v15, (LONGLONG *)&v14, &v13);
        if ( CLegacySwapChain::CalcVBlankDuration(
               this - 50,
               &v17,
               (struct DXGI_RATIONAL)v15,
               (struct DXGI_RATIONAL)v14,
               v13) )
        {
          CompositorClockBoost = CComposition::GetCompositorClockBoost(g_pComposition);
          v9 = (char *)&this[-47] + *(int *)(*(_QWORD *)&this[-47] + 16LL);
          v10 = *(_QWORD *)v9;
          LOBYTE(v10) = CompositorClockBoost;
          (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v9 + 88LL))(v9, v10);
        }
      }
    }
    wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>((__int64 *)&v12);
  }
  return v2;
}
