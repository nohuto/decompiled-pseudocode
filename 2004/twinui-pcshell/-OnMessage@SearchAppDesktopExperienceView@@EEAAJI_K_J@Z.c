/*
 * XREFs of ?OnMessage@SearchAppDesktopExperienceView@@EEAAJI_K_J@Z @ 0x1802079B0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyView@SearchAppDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800178EC (-NotifyView@SearchAppDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Win.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019594 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002FD9C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002FE10 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?GetColorPrevalenceEnabled@SearchAppDesktopExperienceView@@AEAA_NXZ @ 0x18004F270 (-GetColorPrevalenceEnabled@SearchAppDesktopExperienceView@@AEAA_NXZ.c)
 *     ?GetAppsUseLightTheme@SearchAppDesktopExperienceView@@AEAA_NXZ @ 0x18004F320 (-GetAppsUseLightTheme@SearchAppDesktopExperienceView@@AEAA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x18006ECC8 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?IsColorSchemeChangeMessage@CImmersiveColor@@SA_NI_J@Z @ 0x180207318 (-IsColorSchemeChangeMessage@CImmersiveColor@@SA_NI_J@Z.c)
 *     ?NotifyShellModeChanged@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x180207540 (-NotifyShellModeChanged@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     CortanaHelpers::SetIsAssignedAccess @ 0x1802082B4 (CortanaHelpers--SetIsAssignedAccess.c)
 *     IsUserAssignedAccessSingleApp @ 0x180478878 (IsUserAssignedAccessSingleApp.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SearchAppDesktopExperienceView::OnMessage(
        SearchAppDesktopExperienceView *this,
        int a2,
        SearchAppDesktopExperienceView *a3,
        const WCHAR *a4)
{
  SearchAppDesktopExperienceView *v5; // rdx
  unsigned int v6; // ebx
  __int64 v8; // rcx
  int v9; // eax
  SearchAppDesktopExperienceView *v10; // rcx
  char v11; // bl
  unsigned int v12; // r8d
  HSTRING_HEADER *v13; // rax
  __int64 v14; // r8
  int v15; // eax
  SearchAppDesktopExperienceView *v16; // rcx
  char v17; // bl
  unsigned int v18; // r8d
  HSTRING_HEADER *v19; // rax
  __int64 v20; // r8
  int v21; // eax
  int v22; // eax
  struct Windows::Foundation::Collections::IPropertySet *v23; // [rsp+20h] [rbp-40h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v24; // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-30h] BYREF
  __int64 v26; // [rsp+48h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  if ( a2 != 1025 )
  {
    if ( a2 != 26 || !CImmersiveColor::IsColorSchemeChangeMessage(26, a4) )
      return 0LL;
    v24 = 0LL;
    v26 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.Collections.ValueSet",
      0x28u,
      0x27u);
    v9 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
           v26,
           &v24);
    v6 = v9;
    if ( v9 >= 0 )
    {
      v23 = v24;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v23);
      v11 = SearchAppDesktopExperienceView::GetColorPrevalenceEnabled(v10) != 0;
      v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
              &hstringHeader,
              (const WCHAR **)&off_1804D0160,
              v12);
      v15 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
              (Windows::Internal::ShellHelpers::PropertySetHelper *)&v23,
              (HSTRING)v13[1].Reserved.Reserved1,
              v14,
              v11);
      v6 = v15;
      if ( v15 >= 0 )
      {
        v17 = SearchAppDesktopExperienceView::GetAppsUseLightTheme(v16) != 0;
        v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                &hstringHeader,
                (const WCHAR **)off_1804D0148,
                v18);
        v21 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v23,
                (HSTRING)v19[1].Reserved.Reserved1,
                v20,
                v17);
        v6 = v21;
        if ( v21 >= 0 )
        {
          v22 = SearchAppDesktopExperienceView::NotifyView(
                  (SearchAppDesktopExperienceView *)((char *)this - 32),
                  L"NotifyThemeChange",
                  v24);
          v6 = v22;
          if ( v22 >= 0 )
          {
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
            return 0LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2B8,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
            (const char *)(unsigned int)v22);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2B6,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
            (const char *)(unsigned int)v21);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2B5,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
          (const char *)(unsigned int)v15);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2B2,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v9);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
    return v6;
  }
  v5 = (SearchAppDesktopExperienceView *)((char *)this - 32);
  if ( a3 == (SearchAppDesktopExperienceView *)((char *)this - 32) )
  {
    if ( (_WORD)a4 )
    {
      if ( (unsigned __int16)a4 != 1 )
      {
        v6 = -2147418113;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x419,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
          (const char *)0x8000FFFFLL);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2A9,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
          (const char *)0x8000FFFFLL);
        return v6;
      }
      LOBYTE(v8) = (unsigned int)IsUserAssignedAccessSingleApp(-4LL) != 0;
      CortanaHelpers::SetIsAssignedAccess(v8);
    }
    else
    {
      *((_BYTE *)v5 + 211) = WORD1(a4) != 0;
      SearchAppDesktopExperienceView::NotifyShellModeChanged(v5);
    }
  }
  return 0LL;
}
