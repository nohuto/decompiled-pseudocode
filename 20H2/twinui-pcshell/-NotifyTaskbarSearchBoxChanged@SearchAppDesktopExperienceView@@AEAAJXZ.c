/*
 * XREFs of ?NotifyTaskbarSearchBoxChanged@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x180206E00
 * Callers:
 *     ?OnPearlRectChanged@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x1802073A0 (-OnPearlRectChanged@SearchAppDesktopExperienceView@@UEAAJXZ.c)
 * Callees:
 *     ?UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x180012664 (-UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?IsTraySearchBoxVisible@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x180012BD0 (-IsTraySearchBoxVisible@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800139FC (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002753C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800275B0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?NotifyView@SearchAppDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180043C94 (-NotifyView@SearchAppDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Win.c)
 *     ?GetStuckPlace@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x18005CE98 (-GetStuckPlace@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@.c)
 *     ?GetSearchBoxHeight@SearchAppDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z @ 0x18005CF20 (-GetSearchBoxHeight@SearchAppDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$SetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJHPEAPEAUIInspectable@@@ZH@Z @ 0x180069B84 (--$SetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x180069E68 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall SearchAppDesktopExperienceView::NotifyTaskbarSearchBoxChanged(SearchAppDesktopExperienceView *this)
{
  float v2; // xmm0_4
  float v3; // xmm1_4
  HMONITOR v4; // rax
  HMONITOR v5; // r8
  ExperienceManagerUtils *v6; // rsi
  unsigned int SearchBoxHeight; // eax
  HMONITOR v8; // r8
  unsigned int v9; // r14d
  int StuckPlace; // ebx
  __int64 v11; // rdx
  HMONITOR v13; // rax
  int v14; // eax
  unsigned int v15; // r8d
  HSTRING_HEADER *v16; // rax
  __int64 v17; // r8
  int v18; // eax
  unsigned int v19; // r8d
  __int64 v20; // rdx
  unsigned int v21; // ebx
  HSTRING_HEADER *v22; // rax
  __int64 v23; // r8
  unsigned int v24; // r8d
  HSTRING_HEADER *v25; // rax
  __int64 v26; // r8
  unsigned int v27; // r8d
  HSTRING_HEADER *v28; // rax
  __int64 v29; // r8
  bool v30; // [rsp+20h] [rbp-60h] BYREF
  bool v31; // [rsp+21h] [rbp-5Fh] BYREF
  POINT pt; // [rsp+28h] [rbp-58h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v33; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v34; // [rsp+38h] [rbp-48h] BYREF
  RECT rc; // [rsp+40h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  __int64 v37; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v2 = *((float *)this + 47);
  rc.left = (int)v2;
  v3 = *((float *)this + 48);
  rc.top = (int)v3;
  rc.right = (int)(float)(v2 + *((float *)this + 49));
  rc.bottom = (int)(float)(v3 + *((float *)this + 50));
  v4 = MonitorFromRect(&rc, 0);
  v6 = (ExperienceManagerUtils *)v4;
  if ( v4 )
  {
    SearchBoxHeight = SearchAppDesktopExperienceView::GetSearchBoxHeight(this, (__int64)v4, v5);
    v9 = ExperienceManagerUtils::UnscaleByPerMonitorDPI((ExperienceManagerUtils *)SearchBoxHeight, v6, v8);
    StuckPlace = SearchAppDesktopExperienceView::GetStuckPlace(this, (HMONITOR)v6, (enum EDGEUI_TRAYSTUCKPLACE *)&v34);
    if ( StuckPlace < 0 )
    {
      v11 = 2422LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)StuckPlace);
      return (unsigned int)StuckPlace;
    }
    StuckPlace = SearchAppDesktopExperienceView::IsTraySearchBoxVisible(this, (HMONITOR)v6, &v30);
    if ( StuckPlace < 0 )
    {
      v11 = 2426LL;
      goto LABEL_4;
    }
    pt = 0LL;
    v13 = MonitorFromPoint(0LL, 1u);
    StuckPlace = SearchAppDesktopExperienceView::IsTraySearchBoxVisible(this, v13, &v31);
    if ( StuckPlace < 0 )
    {
      v11 = 2432LL;
      goto LABEL_4;
    }
    v33 = 0LL;
    v37 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.Collections.ValueSet",
      0x28u,
      0x27u);
    v14 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
            v37,
            &v33);
    StuckPlace = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x983,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v14);
LABEL_23:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33);
      return (unsigned int)StuckPlace;
    }
    pt = (POINT)v33;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&pt);
    v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)off_1804CF288,
            v15);
    v18 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<int>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&pt,
            (HSTRING)v16[1].Reserved.Reserved1,
            v17,
            v9);
    StuckPlace = v18;
    if ( v18 < 0 )
    {
      v20 = 2438LL;
LABEL_22:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v18);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pt);
      goto LABEL_23;
    }
    v21 = v34;
    v22 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)off_1804CF290,
            v19);
    v18 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<int>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&pt,
            (HSTRING)v22[1].Reserved.Reserved1,
            v23,
            v21);
    StuckPlace = v18;
    if ( v18 < 0 )
    {
      v20 = 2440LL;
      goto LABEL_22;
    }
    v25 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)off_1804CF268,
            v24);
    v18 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&pt,
            (HSTRING)v25[1].Reserved.Reserved1,
            v26,
            v30);
    StuckPlace = v18;
    if ( v18 < 0 )
    {
      v20 = 2442LL;
      goto LABEL_22;
    }
    v28 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)off_1804CF270,
            v27);
    v18 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&pt,
            (HSTRING)v28[1].Reserved.Reserved1,
            v29,
            v31);
    StuckPlace = v18;
    if ( v18 < 0 )
    {
      v20 = 2444LL;
      goto LABEL_22;
    }
    v18 = SearchAppDesktopExperienceView::NotifyView(this, L"NotifyTaskbarSearchBoxChange", v33);
    StuckPlace = v18;
    if ( v18 < 0 )
    {
      v20 = 2446LL;
      goto LABEL_22;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pt);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33);
  }
  return 0LL;
}
