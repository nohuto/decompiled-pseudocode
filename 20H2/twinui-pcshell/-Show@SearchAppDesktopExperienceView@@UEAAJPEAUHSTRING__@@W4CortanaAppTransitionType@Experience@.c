/*
 * XREFs of ?Show@SearchAppDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@W4ShellExperienceViewFocusOptions@4567@@Z @ 0x1800A4C70
 * Callers:
 *     ?ActivateView@SearchAppDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@PEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@6@@Z @ 0x180206330 (-ActivateView@SearchAppDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Int.c)
 * Callees:
 *     ?IsViewVisible@SearchAppDesktopExperienceView@@AEAA_NXZ @ 0x180010984 (-IsViewVisible@SearchAppDesktopExperienceView@@AEAA_NXZ.c)
 *     ?NotifyAppWithTransitionType@SearchAppDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Z @ 0x180043B60 (-NotifyAppWithTransitionType@SearchAppDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType.c)
 *     ?RegisterGlobalBackButton@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x18005BC88 (-RegisterGlobalBackButton@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?IsShowForTransitions@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEA_N@Z @ 0x18005BF64 (-IsShowForTransitions@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEA_N@Z.c)
 *     ?GetActivateArgs@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x18005C004 (-GetActivateArgs@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     ?ShowInternal@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@W4CortanaAppTransitionType@4567@@Z @ 0x18005EF44 (-ShowInternal@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOpti.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsDynamicSearchBox@@@details@wil@@QEAA_NXZ @ 0x180099684 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsDynamicSearchBox@@@details@w.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SearchAppDesktopExperienceView::Show(
        SearchAppDesktopExperienceView *a1,
        HSTRING a2,
        unsigned int a3,
        unsigned int a4)
{
  int IsShowForTransitions; // eax
  unsigned int v9; // edi
  SearchAppDesktopExperienceView *v11; // rdi
  int v12; // eax
  unsigned int v13; // ebx
  int ActivateArgs; // eax
  __int64 v15; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HSTRING string; // [rsp+40h] [rbp+8h] BYREF

  LOBYTE(string) = 0;
  IsShowForTransitions = SearchAppDesktopExperienceView::IsShowForTransitions(a1, a2, (bool *)&string);
  v9 = IsShowForTransitions;
  if ( IsShowForTransitions < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x284,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)IsShowForTransitions);
    return v9;
  }
  *((_BYTE *)a1 + 187) = a4 == 2;
  *((_BYTE *)a1 + 181) = 0;
  v11 = (SearchAppDesktopExperienceView *)((char *)a1 - 24);
  if ( !(_BYTE)string )
  {
    *((_BYTE *)a1 + 184) = 1;
    string = 0LL;
    WindowsDeleteString(0LL);
    string = 0LL;
    ActivateArgs = SearchAppDesktopExperienceView::GetActivateArgs(
                     (SearchAppDesktopExperienceView *)((char *)a1 - 24),
                     a2,
                     &string);
    v13 = ActivateArgs;
    if ( ActivateArgs < 0 )
    {
      v15 = 667LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)ActivateArgs);
      WindowsDeleteString(string);
      return v13;
    }
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsDynamicSearchBox>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_FeedsDynamicSearchBox>::GetImpl'::`2'::impl) )
    {
      if ( SearchAppDesktopExperienceView::IsViewVisible(v11) )
        a3 = 0;
      ActivateArgs = SearchAppDesktopExperienceView::ShowInternal((__int64)v11, (__int64)string, a4, a3);
      v13 = ActivateArgs;
      if ( ActivateArgs < 0 )
      {
        v15 = 679LL;
        goto LABEL_16;
      }
    }
    else
    {
      ActivateArgs = SearchAppDesktopExperienceView::ShowInternal((__int64)v11, (__int64)string, 0, a3);
      v13 = ActivateArgs;
      if ( ActivateArgs < 0 )
      {
        v15 = 686LL;
        goto LABEL_16;
      }
    }
    WindowsDeleteString(string);
    goto LABEL_18;
  }
  *((_BYTE *)a1 + 184) = 0;
  v12 = SearchAppDesktopExperienceView::NotifyAppWithTransitionType(
          (SearchAppDesktopExperienceView *)((char *)a1 - 24),
          L"NotifyAppTransitionRequestHandled",
          a3,
          0LL);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x294,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v12);
    return v13;
  }
LABEL_18:
  if ( SearchAppDesktopExperienceView::IsViewVisible(v11) )
    SearchAppDesktopExperienceView::RegisterGlobalBackButton(v11);
  return 0LL;
}
