/*
 * XREFs of ?Show@SearchAppDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18004DDC0
 * Callers:
 *     ?ActivateView@SearchAppDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@PEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@6@@Z @ 0x1801E3990 (-ActivateView@SearchAppDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Int.c)
 * Callees:
 *     ?NotifyAppWithTransitionType@SearchAppDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Z @ 0x1800171E8 (-NotifyAppWithTransitionType@SearchAppDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType.c)
 *     ?IsViewVisible@SearchAppDesktopExperienceView@@AEAA_NXZ @ 0x18001C47C (-IsViewVisible@SearchAppDesktopExperienceView@@AEAA_NXZ.c)
 *     ?IsShowForTransitions@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEA_N@Z @ 0x18004DD14 (-IsShowForTransitions@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEA_N@Z.c)
 *     ?GetActivateArgs@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x18004E07C (-GetActivateArgs@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     ?ShowInternal@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@W4CortanaAppTransitionType@4567@@Z @ 0x18004ECCC (-ShowInternal@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOpti.c)
 *     ?RegisterGlobalBackButton@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1800501DC (-RegisterGlobalBackButton@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SearchAppDesktopExperienceView::Show(
        SearchAppDesktopExperienceView *a1,
        HSTRING a2,
        unsigned int a3)
{
  int IsShowForTransitions; // eax
  unsigned int v7; // edi
  SearchAppDesktopExperienceView *v8; // rdi
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v12; // rdx
  int ActivateArgs; // eax
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HSTRING string; // [rsp+30h] [rbp+8h] BYREF

  LOBYTE(string) = 0;
  IsShowForTransitions = SearchAppDesktopExperienceView::IsShowForTransitions(a1, a2, (bool *)&string);
  v7 = IsShowForTransitions;
  if ( IsShowForTransitions < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x253,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)IsShowForTransitions,
      v14);
    return v7;
  }
  *((_BYTE *)a1 + 181) = 0;
  v8 = (SearchAppDesktopExperienceView *)((char *)a1 - 24);
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
    v10 = ActivateArgs;
    if ( ActivateArgs >= 0 )
    {
      ActivateArgs = SearchAppDesktopExperienceView::ShowInternal(v8, string, 0LL, a3);
      v10 = ActivateArgs;
      if ( ActivateArgs >= 0 )
      {
        WindowsDeleteString(string);
        goto LABEL_4;
      }
      v12 = 621LL;
    }
    else
    {
      v12 = 616LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)ActivateArgs,
      v14);
    WindowsDeleteString(string);
    return v10;
  }
  *((_BYTE *)a1 + 184) = 0;
  v9 = SearchAppDesktopExperienceView::NotifyAppWithTransitionType(
         (SearchAppDesktopExperienceView *)((char *)a1 - 24),
         (__int64)L"NotifyAppTransitionRequestHandled",
         a3,
         0LL);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x261,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v9,
      v14);
    return v10;
  }
LABEL_4:
  if ( SearchAppDesktopExperienceView::IsViewVisible(v8) )
    SearchAppDesktopExperienceView::RegisterGlobalBackButton(v8);
  return 0LL;
}
