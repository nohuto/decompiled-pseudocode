/*
 * XREFs of ?CheckDirectFlipSupport@CLegacySwapChain@@UEBA_NPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x18024A130
 * Callers:
 *     ?CheckDirectFlipSupport@CLegacySwapChain@@$4PPPPPPPM@A@EBA_NPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x1800EEA80 (-CheckDirectFlipSupport@CLegacySwapChain@@$4PPPPPPPM@A@EBA_NPEAUIDXGIResource@@W4DXGI_COLOR_SPAC.c)
 *     ?CheckDirectFlipSupport@CLegacySwapChain@@$4PPPPPPPM@BI@EBA_NPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x1800EEF40 (-CheckDirectFlipSupport@CLegacySwapChain@@$4PPPPPPPM@BI@EBA_NPEAUIDXGIResource@@W4DXGI_COLOR_SPA.c)
 *     ?CheckDirectFlipSupport@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA_NPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x1800EF220 (-CheckDirectFlipSupport@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA_NPEAUIDXGIResource@@W4DXGI_COLOR_SP.c)
 *     ?CalcPresentMode@CConversionSwapChain@@IEAAJPEAI@Z @ 0x18024F098 (-CalcPresentMode@CConversionSwapChain@@IEAAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18008B1D0 (-ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E261C (memset_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2101c_27737997@@@details@wil@@QEAA_NXZ @ 0x1800E5E04 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2101c_27737997@@@detail.c)
 *     ?AddCheckMPOCache@CD3DDevice@@QEAAXPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@I_N@Z @ 0x1800EAD58 (-AddCheckMPOCache@CD3DDevice@@QEAAXPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@I_N@Z.c)
 *     ?CheckMPOCache@CD3DDevice@@QEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x1800EADF0 (-CheckMPOCache@CD3DDevice@@QEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?DirectFlipRectRequiresPanelFitter@CLegacySwapChain@@IEBA_NAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18024A87C (-DirectFlipRectRequiresPanelFitter@CLegacySwapChain@@IEBA_NAEBV-$TMilRect@IUMilRectU@@UMil3DRect.c)
 */

char __fastcall CLegacySwapChain::CheckDirectFlipSupport(
        __int64 a1,
        __int64 a2,
        enum DXGI_COLOR_SPACE_TYPE a3,
        int *a4,
        __int128 *a5)
{
  bool v5; // bl
  float v6; // xmm0_4
  char v10; // r15
  char v11; // r14
  int v12; // eax
  bool v13; // zf
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  char v17; // al
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  bool v22; // [rsp+30h] [rbp-B1h] BYREF
  int v23; // [rsp+34h] [rbp-ADh] BYREF
  __int64 v24; // [rsp+38h] [rbp-A9h] BYREF
  __int128 *v25; // [rsp+40h] [rbp-A1h]
  _BYTE v26[8]; // [rsp+50h] [rbp-91h] BYREF
  __int64 v27; // [rsp+58h] [rbp-89h]
  int v28; // [rsp+60h] [rbp-81h]
  int v29; // [rsp+6Ch] [rbp-75h]
  int v30; // [rsp+70h] [rbp-71h]
  int v31; // [rsp+74h] [rbp-6Dh]
  int v32; // [rsp+78h] [rbp-69h]
  int v33; // [rsp+7Ch] [rbp-65h]
  int v34; // [rsp+80h] [rbp-61h]
  __int128 v35; // [rsp+84h] [rbp-5Dh]
  __int128 v36; // [rsp+94h] [rbp-4Dh]
  __int64 v37; // [rsp+A4h] [rbp-3Dh]
  int v38; // [rsp+ACh] [rbp-35h]
  __int64 v39; // [rsp+B0h] [rbp-31h]
  int v40; // [rsp+B8h] [rbp-29h]
  enum DXGI_COLOR_SPACE_TYPE v41; // [rsp+BCh] [rbp-25h]
  int v42; // [rsp+C0h] [rbp-21h]
  int v43; // [rsp+D0h] [rbp-11h]
  int v44; // [rsp+D8h] [rbp-9h]

  v5 = 0;
  v6 = *(float *)(a1 - 192);
  v24 = a2;
  v25 = a5;
  v22 = 0;
  v10 = 0;
  v11 = 0;
  v12 = ConvertSDRBoostToSDRWhiteLevel(v6, a3);
  v13 = *(_DWORD *)(a1 - 164) == 2;
  v23 = v12;
  if ( v13 || v12 )
    v10 = 1;
  if ( (unsigned __int8)CLegacySwapChain::DirectFlipRectRequiresPanelFitter(a1 - 352, a4)
    || (unsigned __int8)CLegacySwapChain::DirectFlipRectRequiresPanelFitter(a1 - 352, v25) )
  {
    v11 = 1;
  }
  if ( v10 || v11 )
  {
    if ( *(int *)(a1 - 164) >= 1 )
    {
      memset_0(v26, 0, 0x90uLL);
      v28 = *(_DWORD *)(a1 - 172);
      v31 = *a4;
      v32 = a4[1];
      v33 = a4[2];
      v34 = a4[3];
      v35 = *v25;
      v44 = v23;
      v16 = v30;
      if ( v11 )
        v16 = 4;
      v27 = v24;
      v30 = v16;
      v29 = 0;
      v36 = v35;
      v37 = 1LL;
      v38 = 0;
      v39 = 0LL;
      v40 = 0;
      v41 = a3;
      v42 = 0;
      v43 = 2;
      if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2101c_27737997>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_2101c_27737997>::GetImpl'::`2'::impl)
        || (v17 = CD3DDevice::CheckMPOCache(
                    *(CD3DDevice **)(a1 - 288),
                    (const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *)v26,
                    1u,
                    &v22),
            v5 = v22,
            !v17) )
      {
        v18 = *(_QWORD *)(a1 - 280);
        v23 = 0;
        LODWORD(v24) = 0;
        v19 = (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *, int *, __int64 *))(*(_QWORD *)v18 + 176LL))(
                v18,
                1LL,
                v26,
                &v23,
                &v24);
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x1F4u, 0LL);
        }
        else
        {
          if ( v23 )
            v5 = 1;
          else
            wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2101c_27737997>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_2101c_27737997>::GetImpl'::`2'::impl);
          if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2101c_27737997>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_2101c_27737997>::GetImpl'::`2'::impl) )
            CD3DDevice::AddCheckMPOCache(
              *(CD3DDevice **)(a1 - 288),
              (const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *)v26);
        }
      }
    }
  }
  else if ( (unsigned int)a3 <= DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
  {
    v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, int *))(**(_QWORD **)(a1 - 280) + 144LL))(
            *(_QWORD *)(a1 - 280),
            0LL,
            v24,
            &v23);
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x213u, 0LL);
    }
    else if ( v23 )
    {
      return 1;
    }
  }
  return v5;
}
