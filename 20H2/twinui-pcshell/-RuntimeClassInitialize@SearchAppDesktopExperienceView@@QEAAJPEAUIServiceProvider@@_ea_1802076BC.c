/*
 * XREFs of ?RuntimeClassInitialize@SearchAppDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x1802076BC
 * Callers:
 *     ?RuntimeClassInitialize@SearchAppDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x1802075FC (-RuntimeClassInitialize@SearchAppDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVISearchAp.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180014660 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetWindowsSearchBoxWidthWithMonParamConsidered@@YAH_N00@Z @ 0x180096F54 (-GetWindowsSearchBoxWidthWithMonParamConsidered@@YAH_N00@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FixShortenedSBInNonPrimaryMon@@@details@wil@@QEAA_NXZ @ 0x180097614 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FixShortenedSBInNonPrim.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UpdateSearchBoxWidthFromServer@@@details@wil@@QEAA_NXZ @ 0x180097718 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UpdateSear_ea_180097718.c)
 *     ??4?$ComPtr@VIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@PEAVIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@Z @ 0x1800A582C (--4-$ComPtr@VIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@WRL@Microsoft@@QEAAAEA.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@QEAAXPEAVICortanaWNFService@Cortana@TwinUI@@@Z @ 0x180208788 (-reset@-$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U-$default_delete@VICortanaWNFService@Co.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SearchAppDesktopExperienceView::RuntimeClassInitialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v7; // rdx
  float WindowsSearchBoxWidthWithMonParamConsidered; // xmm0_4
  __int64 (__fastcall *v9)(__int64, GUID *, GUID *, __int64 *); // rbx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v16; // [rsp+78h] [rbp+20h]

  v16 = a4;
  Microsoft::WRL::ComPtr<TwinUI::ShellFeeds::IShellFeedsExperienceManagerNotification>::operator=(
    (__int64 *)(a1 + 80),
    a3);
  v7 = *a4;
  *a4 = 0LL;
  wistd::unique_ptr<TwinUI::Cortana::ICortanaWNFService,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>::reset(
    a1 + 88,
    v7);
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_UpdateSearchBoxWidthFromServer>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_UpdateSearchBoxWidthFromServer>::GetImpl'::`2'::impl)
    || wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_FixShortenedSBInNonPrimaryMon>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_FixShortenedSBInNonPrimaryMon>::GetImpl'::`2'::impl) )
  {
    WindowsSearchBoxWidthWithMonParamConsidered = FLOAT_320_0;
  }
  else
  {
    WindowsSearchBoxWidthWithMonParamConsidered = (float)(int)GetWindowsSearchBoxWidthWithMonParamConsidered(1, 0, 0);
  }
  *(float *)(a1 + 180) = WindowsSearchBoxWidthWithMonParamConsidered;
  *(_DWORD *)(a1 + 184) = 1143209984;
  v15 = 0LL;
  v9 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)a2 + 24LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  v10 = v9(a2, &IID_IImmersiveWindowMessageService, &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca, &v15);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v15 + 24LL))(
            v15,
            26LL,
            a1 + 32,
            a1 + 216);
    v11 = v10;
    if ( v10 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v15 + 24LL))(
              v15,
              1025LL,
              a1 + 32,
              a1 + 220);
      v11 = v10;
      if ( v10 >= 0 )
      {
        Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 104), a2);
        v10 = (***(__int64 (__fastcall ****)(_QWORD, __int64, _QWORD))(a1 + 88))(*(_QWORD *)(a1 + 88), a1 + 56, 0LL);
        v11 = v10;
        if ( v10 >= 0 )
        {
          v11 = 0;
          goto LABEL_15;
        }
        v12 = 370LL;
      }
      else
      {
        v12 = 364LL;
      }
    }
    else
    {
      v12 = 363LL;
    }
  }
  else
  {
    v12 = 362LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
    (const char *)(unsigned int)v10);
LABEL_15:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  wistd::unique_ptr<TwinUI::Cortana::ICortanaWNFService,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>::reset(
    a4,
    0LL);
  return v11;
}
