/*
 * XREFs of ?_StartMTVThread@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x18037E604
 * Callers:
 *     ?PerformDelayedInitialization@CMultitaskingViewServiceProvider@@UEAAJXZ @ 0x18037D7B0 (-PerformDelayedInitialization@CMultitaskingViewServiceProvider@@UEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180033DB0 (InlineIsEqualGUID.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18003ADB0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJPEAPEAVCMarshalStream@CMarshaledInterface@@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x180045060 (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4M.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1800784BC (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18008DA68 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18013B3E8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlAllUpView@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180215654 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlAllUpView@@@details@wil@@QEAAX_NW4Rep.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlExplorerHost@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802156F8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlExplorerHost@@@details@wil@@QEAAX_NW4.c)
 *     ??_GINIT_THREAD_DATA@CMultitaskingViewServiceProvider@@QEAAPEAXI@Z @ 0x18037D62C (--_GINIT_THREAD_DATA@CMultitaskingViewServiceProvider@@QEAAPEAXI@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCImmersiveShellComponentWithSite@@@Details@23@UIMultitaskingViewServiceProvider@@UIMultitaskingViewTaskScheduler@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18037D654 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$Implem_ea_18037D654.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMultitaskingViewServiceProvider::_StartMTVThread(CMultitaskingViewServiceProvider *this)
{
  __int64 *v2; // rax
  __int64 *v3; // rsi
  CMultitaskingViewServiceProvider::INIT_THREAD_DATA *v4; // rbx
  unsigned int LastError; // edi
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rdi
  int v25; // eax
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // rdx
  int v35; // eax
  __int64 v36; // rdx
  int v37; // eax
  __int64 v38; // rdx
  int v39; // eax
  __int64 v40; // rdx
  int v41; // eax
  __int64 v42; // rdx
  int v43; // eax
  __int64 v44; // rdx
  HANDLE EventW; // rdi
  const char *v46; // r9
  char *v47; // rcx
  __int64 v48; // rdx
  void *v50; // [rsp+28h] [rbp-69h] BYREF
  void *v51; // [rsp+30h] [rbp-61h] BYREF
  void *v52; // [rsp+38h] [rbp-59h] BYREF
  void *v53; // [rsp+40h] [rbp-51h] BYREF
  void *v54; // [rsp+48h] [rbp-49h] BYREF
  void *v55; // [rsp+50h] [rbp-41h] BYREF
  void *v56; // [rsp+58h] [rbp-39h] BYREF
  void *v57; // [rsp+60h] [rbp-31h] BYREF
  void *v58; // [rsp+68h] [rbp-29h] BYREF
  void *v59; // [rsp+70h] [rbp-21h] BYREF
  void *v60; // [rsp+78h] [rbp-19h] BYREF
  void *v61; // [rsp+80h] [rbp-11h] BYREF
  void *v62; // [rsp+88h] [rbp-9h] BYREF
  void *v63; // [rsp+90h] [rbp-1h] BYREF
  void *v64; // [rsp+98h] [rbp+7h] BYREF
  void *ppvOut; // [rsp+A0h] [rbp+Fh] BYREF
  _QWORD v66[8]; // [rsp+A8h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]
  unsigned int v68; // [rsp+100h] [rbp+6Fh] BYREF
  CMultitaskingViewServiceProvider *v69; // [rsp+108h] [rbp+77h] BYREF
  void *v70; // [rsp+110h] [rbp+7Fh] BYREF

  v66[1] = -2LL;
  v2 = (__int64 *)operator new(0xC0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0xC0uLL);
    *v3 = 0LL;
    v3[1] = 0LL;
    v3[2] = 0LL;
    v3[3] = 0LL;
    v3[4] = 0LL;
    v3[5] = 0LL;
    v3[6] = 0LL;
    v3[7] = 0LL;
    v3[8] = 0LL;
    v3[9] = 0LL;
    v3[10] = 0LL;
    v3[11] = 0LL;
    v3[12] = 0LL;
    v3[13] = 0LL;
    v3[14] = 0LL;
    v3[15] = 0LL;
    v3[16] = 0LL;
    v3[17] = 0LL;
    v3[18] = 0LL;
    v3[19] = 0LL;
    v3[20] = 0LL;
    v3[21] = 0LL;
    v3[22] = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  v4 = (CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)v3;
  if ( !v3 )
  {
    LastError = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFF,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_128;
  }
  v69 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v69);
  v69 = 0LL;
  if ( InlineIsEqualGUID(&GUID_90adbab9_cdb8_43dd_8daa_ba1180be5215, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v69 = this;
    v6 = *(_QWORD *)this;
  }
  else
  {
    if ( (int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithSite>,IMultitaskingViewServiceProvider,IMultitaskingViewTaskScheduler>::CanCastTo(
                (__int64)this,
                &GUID_90adbab9_cdb8_43dd_8daa_ba1180be5215,
                &v69) < 0 )
      goto LABEL_11;
    v6 = *(_QWORD *)v69;
  }
  (*(void (**)(void))(v6 + 8))();
LABEL_11:
  v68 = 2;
  v70 = v69;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(v3);
  v7 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
         v3,
         (__int64)&GUID_90adbab9_cdb8_43dd_8daa_ba1180be5215,
         &v70,
         &v68);
  LastError = v7;
  if ( v7 >= 0 )
  {
    v68 = 2;
    v70 = (void *)*((_QWORD *)this + 28);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(v3 + 1);
    v7 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
           v3 + 1,
           (__int64)&GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
           &v70,
           &v68);
    LastError = v7;
    if ( v7 < 0 )
    {
      v8 = 262LL;
      goto LABEL_15;
    }
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    v9 = IUnknown_QueryService(
           *((IUnknown **)this + 2),
           &GUID_e0fe7384_5482_4659_ab2c_4ff038948779,
           &GUID_e0fe7384_5482_4659_ab2c_4ff038948779,
           &ppvOut);
    LastError = v9;
    if ( v9 < 0 )
    {
      v10 = 265LL;
LABEL_20:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v9);
LABEL_126:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      goto LABEL_127;
    }
    v68 = 2;
    v70 = ppvOut;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(v3 + 3);
    v9 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
           v3 + 3,
           (__int64)&GUID_e0fe7384_5482_4659_ab2c_4ff038948779,
           &v70,
           &v68);
    LastError = v9;
    if ( v9 < 0 )
    {
      v10 = 266LL;
      goto LABEL_20;
    }
    v64 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v64);
    v11 = IUnknown_QueryService(
            *((IUnknown **)this + 2),
            &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
            &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
            &v64);
    LastError = v11;
    if ( v11 < 0 )
    {
      v12 = 269LL;
LABEL_25:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v11);
LABEL_125:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v64);
      goto LABEL_126;
    }
    v68 = 2;
    v70 = v64;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(v3 + 2);
    v11 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v3 + 2,
            (__int64)&GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
            &v70,
            &v68);
    LastError = v11;
    if ( v11 < 0 )
    {
      v12 = 270LL;
      goto LABEL_25;
    }
    v63 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v63);
    v13 = IUnknown_QueryService(
            *((IUnknown **)this + 2),
            (const GUID *const)&SID_VirtualDesktopManager,
            &GUID_f31574d6_b682_4cdc_bd56_1827860abec6,
            &v63);
    LastError = v13;
    if ( v13 < 0 )
    {
      v14 = 273LL;
LABEL_30:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v13);
LABEL_124:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v63);
      goto LABEL_125;
    }
    v68 = 2;
    v70 = v63;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(v3 + 4);
    v13 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v3 + 4,
            (__int64)&GUID_f31574d6_b682_4cdc_bd56_1827860abec6,
            &v70,
            &v68);
    LastError = v13;
    if ( v13 < 0 )
    {
      v14 = 274LL;
      goto LABEL_30;
    }
    v62 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v62);
    v15 = IUnknown_QueryService(
            *((IUnknown **)this + 2),
            (const GUID *const)&SID_VirtualDesktopPinnedApps,
            &GUID_4ce81583_1e4c_4632_a621_07a53543148f,
            &v62);
    LastError = v15;
    if ( v15 < 0 )
    {
      v16 = 277LL;
LABEL_35:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v15);
LABEL_123:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v62);
      goto LABEL_124;
    }
    v68 = 2;
    v70 = v62;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(v3 + 5);
    v15 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v3 + 5,
            (__int64)&GUID_4ce81583_1e4c_4632_a621_07a53543148f,
            &v70,
            &v68);
    LastError = v15;
    if ( v15 < 0 )
    {
      v16 = 278LL;
      goto LABEL_35;
    }
    v61 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v61);
    v17 = IUnknown_QueryService(
            *((IUnknown **)this + 2),
            &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
            &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
            &v61);
    LastError = v17;
    if ( v17 < 0 )
    {
      v18 = 281LL;
LABEL_40:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v17);
LABEL_122:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v61);
      goto LABEL_123;
    }
    v68 = 2;
    v70 = v61;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(v3 + 6);
    v17 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v3 + 6,
            (__int64)&GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
            &v70,
            &v68);
    LastError = v17;
    if ( v17 < 0 )
    {
      v18 = 282LL;
      goto LABEL_40;
    }
    v60 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v60);
    v19 = IUnknown_QueryService(
            *((IUnknown **)this + 2),
            (const GUID *const)&SID_VirtualDesktopNotificationService,
            &GUID_0cd45e71_d927_4f15_8b0a_8fef525337bf,
            &v60);
    LastError = v19;
    if ( v19 < 0 )
    {
      v20 = 285LL;
LABEL_45:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v19);
LABEL_121:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v60);
      goto LABEL_122;
    }
    v68 = 2;
    v70 = v60;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(v3 + 7);
    v19 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v3 + 7,
            (__int64)&GUID_0cd45e71_d927_4f15_8b0a_8fef525337bf,
            &v70,
            &v68);
    LastError = v19;
    if ( v19 < 0 )
    {
      v20 = 286LL;
      goto LABEL_45;
    }
    v59 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v59);
    v21 = IUnknown_QueryService(
            *((IUnknown **)this + 2),
            &stru_18053F338,
            &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a,
            &v59);
    LastError = v21;
    if ( v21 < 0 )
    {
      v22 = 289LL;
LABEL_50:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v22,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v21);
LABEL_120:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v59);
      goto LABEL_121;
    }
    v68 = 2;
    v70 = v59;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(v3 + 8);
    v21 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v3 + 8,
            (__int64)&GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a,
            &v70,
            &v68);
    LastError = v21;
    if ( v21 < 0 )
    {
      v22 = 290LL;
      goto LABEL_50;
    }
    v58 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v58);
    (***((void (__fastcall ****)(_QWORD, GUID *, void **))this + 25))(
      *((_QWORD *)this + 25),
      &GUID_6e7da126_f47e_4b81_b43f_e466cf325f58,
      &v58);
    v68 = 2;
    v70 = v58;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(v3 + 9);
    v23 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v3 + 9,
            (__int64)&GUID_6e7da126_f47e_4b81_b43f_e466cf325f58,
            &v70,
            &v68);
    LastError = v23;
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x126,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v23);
LABEL_119:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v58);
      goto LABEL_120;
    }
    v57 = 0LL;
    v24 = *((_QWORD *)this + 22);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v57);
    v25 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v24 + 48LL))(v24, &v57);
    LastError = v25;
    if ( v25 < 0 )
    {
      v26 = 297LL;
LABEL_57:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v26,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v25);
LABEL_118:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v57);
      goto LABEL_119;
    }
    v68 = 2;
    v70 = v57;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(v3 + 10);
    v25 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v3 + 10,
            (__int64)&GUID_4639c886_cffe_492c_915a_1e3f02d22434,
            &v70,
            &v68);
    LastError = v25;
    if ( v25 < 0 )
    {
      v26 = 298LL;
      goto LABEL_57;
    }
    v56 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v56);
    v27 = IUnknown_QueryService(
            *((IUnknown **)this + 2),
            &stru_18053F328,
            &GUID_4214f6fa_eb36_4e2f_9ca2_23fdc1832df7,
            &v56);
    LastError = v27;
    if ( v27 < 0 )
    {
      v28 = 301LL;
LABEL_62:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v28,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v27);
LABEL_117:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v56);
      goto LABEL_118;
    }
    v68 = 2;
    v70 = v56;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(v3 + 11);
    v27 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v3 + 11,
            (__int64)&GUID_4214f6fa_eb36_4e2f_9ca2_23fdc1832df7,
            &v70,
            &v68);
    LastError = v27;
    if ( v27 < 0 )
    {
      v28 = 302LL;
      goto LABEL_62;
    }
    v55 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v55);
    v29 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, void **))this + 26))(
            *((_QWORD *)this + 26),
            &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
            &v55);
    LastError = v29;
    if ( v29 < 0 )
    {
      v30 = 305LL;
LABEL_67:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v30,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v29);
LABEL_116:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v55);
      goto LABEL_117;
    }
    v68 = 2;
    v70 = v55;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(v3 + 12);
    v29 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v3 + 12,
            (__int64)&GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
            &v70,
            &v68);
    LastError = v29;
    if ( v29 < 0 )
    {
      v30 = 306LL;
      goto LABEL_67;
    }
    v54 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v54);
    v31 = IUnknown_QueryService(
            *((IUnknown **)this + 2),
            (const GUID *const)&SID_ShellTargetingTracker,
            &GUID_c59a546b_412b_40f3_b151_9b3202e2835f,
            &v54);
    LastError = v31;
    if ( v31 < 0 )
    {
      v32 = 309LL;
LABEL_72:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v32,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v31);
LABEL_115:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v54);
      goto LABEL_116;
    }
    v68 = 2;
    v70 = v54;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(v3 + 13);
    v31 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v3 + 13,
            (__int64)&GUID_c59a546b_412b_40f3_b151_9b3202e2835f,
            &v70,
            &v68);
    LastError = v31;
    if ( v31 < 0 )
    {
      v32 = 310LL;
      goto LABEL_72;
    }
    v53 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v53);
    v33 = IUnknown_QueryService(
            *((IUnknown **)this + 2),
            &GUID_fff59320_db70_4865_8fed_8b502d692f12,
            &GUID_fff59320_db70_4865_8fed_8b502d692f12,
            &v53);
    LastError = v33;
    if ( v33 < 0 )
    {
      v34 = 313LL;
LABEL_77:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v34,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v33);
LABEL_114:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v53);
      goto LABEL_115;
    }
    v68 = 2;
    v70 = v53;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(v3 + 14);
    v33 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v3 + 14,
            (__int64)&GUID_fff59320_db70_4865_8fed_8b502d692f12,
            &v70,
            &v68);
    LastError = v33;
    if ( v33 < 0 )
    {
      v34 = 314LL;
      goto LABEL_77;
    }
    v52 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v52);
    v35 = IUnknown_QueryService(
            *((IUnknown **)this + 2),
            (const GUID *const)&SID_ApplicationViewIconLoaderService,
            &GUID_f622d8ac_35d3_4374_9148_66f1f7894191,
            &v52);
    LastError = v35;
    if ( v35 < 0 )
    {
      v36 = 317LL;
LABEL_82:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v36,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v35);
LABEL_113:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v52);
      goto LABEL_114;
    }
    v68 = 2;
    v70 = v52;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(v3 + 15);
    v35 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v3 + 15,
            (__int64)&GUID_f622d8ac_35d3_4374_9148_66f1f7894191,
            &v70,
            &v68);
    LastError = v35;
    if ( v35 < 0 )
    {
      v36 = 318LL;
      goto LABEL_82;
    }
    v51 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v51);
    v37 = IUnknown_QueryService(
            *((IUnknown **)this + 2),
            (const GUID *const)&SID_IImmersiveMonitorService,
            &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
            &v51);
    LastError = v37;
    if ( v37 < 0 )
    {
      v38 = 321LL;
LABEL_87:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v38,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v37);
      goto LABEL_112;
    }
    v68 = 2;
    v70 = v51;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(v3 + 18);
    v37 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v3 + 18,
            (__int64)&GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
            &v70,
            &v68);
    LastError = v37;
    if ( v37 < 0 )
    {
      v38 = 322LL;
      goto LABEL_87;
    }
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlExplorerHost>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_XamlExplorerHost>::GetImpl'::`2'::impl,
      1u,
      3u);
    v70 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v70);
    v39 = IUnknown_QueryService(
            *((IUnknown **)this + 2),
            &GUID_d9fbe049_d665_4fc8_9bcb_0db3bc2f737c,
            &GUID_d9fbe049_d665_4fc8_9bcb_0db3bc2f737c,
            &v70);
    LastError = v39;
    if ( v39 < 0 )
    {
      v40 = 327LL;
LABEL_92:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v40,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v39);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v70);
      goto LABEL_112;
    }
    v68 = 2;
    v50 = v70;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(v3 + 19);
    v39 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v3 + 19,
            (__int64)&GUID_d9fbe049_d665_4fc8_9bcb_0db3bc2f737c,
            &v50,
            &v68);
    LastError = v39;
    if ( v39 < 0 )
    {
      v40 = 328LL;
      goto LABEL_92;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v70);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlAllUpView>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_XamlAllUpView>::GetImpl'::`2'::impl,
      1u,
      3u);
    v50 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v50);
    v41 = IUnknown_QueryService(
            *((IUnknown **)this + 2),
            (const GUID *const)&SID_VirtualDesktopDataSource,
            &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
            &v50);
    LastError = v41;
    if ( v41 >= 0 )
    {
      v68 = 2;
      v66[0] = v50;
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(v3 + 16);
      v41 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
              v3 + 16,
              (__int64)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
              v66,
              &v68);
      LastError = v41;
      if ( v41 >= 0 )
      {
        v70 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v70);
        v43 = IUnknown_QueryService(
                *((IUnknown **)this + 2),
                (const GUID *const)&SID_VirtualDesktopController,
                &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                &v70);
        LastError = v43;
        if ( v43 >= 0 )
        {
          v68 = 2;
          v66[0] = v70;
          Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(v3 + 17);
          v43 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
                  v3 + 17,
                  (__int64)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                  v66,
                  &v68);
          LastError = v43;
          if ( v43 >= 0 )
          {
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v70);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v50);
            wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabShell>::ReportUsage(
              `wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetImpl'::`2'::impl,
              0,
              3u);
            EventW = CreateEventW(0LL, 1, 0, 0LL);
            v47 = (char *)*((_QWORD *)this + 29);
            *((_QWORD *)this + 29) = 0LL;
            if ( (unsigned __int64)(v47 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              CloseHandle(v47);
            *((_QWORD *)this + 29) = EventW;
            if ( EventW )
            {
              v3[23] = (__int64)EventW;
              v4 = 0LL;
              if ( SHCreateThread(
                     CMultitaskingViewServiceProvider::s_RunMTVThread,
                     v3,
                     8u,
                     (LPTHREAD_START_ROUTINE)CActionCenterExperienceManager::IsHintSupported) )
              {
                LastError = 0;
                goto LABEL_112;
              }
              CMultitaskingViewServiceProvider::INIT_THREAD_DATA::`scalar deleting destructor'((CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)v3);
              v48 = 369LL;
            }
            else
            {
              v48 = 360LL;
            }
            LastError = wil::details::in1diag3::Return_GetLastError(
                          retaddr,
                          (void *)v48,
                          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
                          v46);
LABEL_112:
            Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v51);
            goto LABEL_113;
          }
          v44 = 339LL;
        }
        else
        {
          v44 = 338LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v44,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
          (const char *)(unsigned int)v43);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v70);
LABEL_103:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v50);
        goto LABEL_112;
      }
      v42 = 335LL;
    }
    else
    {
      v42 = 334LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v42,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)v41);
    goto LABEL_103;
  }
  v8 = 260LL;
LABEL_15:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
    (const char *)(unsigned int)v7);
LABEL_127:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v69);
LABEL_128:
  if ( v4 )
    CMultitaskingViewServiceProvider::INIT_THREAD_DATA::`scalar deleting destructor'(v4);
  return LastError;
}
