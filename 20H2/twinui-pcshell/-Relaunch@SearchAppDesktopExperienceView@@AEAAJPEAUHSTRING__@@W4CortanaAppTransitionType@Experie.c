/*
 * XREFs of ?Relaunch@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18005F008
 * Callers:
 *     ?ShowInternal@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@W4CortanaAppTransitionType@4567@@Z @ 0x18005EF44 (-ShowInternal@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOpti.c)
 *     ?MinimizeToBoxMode@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x180206B00 (-MinimizeToBoxMode@SearchAppDesktopExperienceView@@UEAAJXZ.c)
 * Callees:
 *     ?NotifyAppWithTransitionType@SearchAppDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Z @ 0x180043B60 (-NotifyAppWithTransitionType@SearchAppDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::Relaunch(SearchAppDesktopExperienceView *a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = SearchAppDesktopExperienceView::NotifyAppWithTransitionType(a1, L"NotifyRelaunch", a3, a2);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x638,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
    (const char *)(unsigned int)v3,
    v6);
  return v4;
}
