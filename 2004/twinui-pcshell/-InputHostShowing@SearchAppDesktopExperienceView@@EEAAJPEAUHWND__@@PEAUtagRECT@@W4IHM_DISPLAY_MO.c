/*
 * XREFs of ?InputHostShowing@SearchAppDesktopExperienceView@@EEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z @ 0x1802072C0
 * Callers:
 *     <none>
 * Callees:
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x18001AAD0 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?IsViewVisible@SearchAppDesktopExperienceView@@AEAA_NXZ @ 0x18001C8F0 (-IsViewVisible@SearchAppDesktopExperienceView@@AEAA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::InputHostShowing(__int64 a1)
{
  SearchAppDesktopExperienceView *v1; // rbx
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (SearchAppDesktopExperienceView *)(a1 - 48);
  if ( !SearchAppDesktopExperienceView::IsViewVisible((SearchAppDesktopExperienceView *)(a1 - 48)) )
    return 0LL;
  v2 = SearchAppDesktopExperienceView::PositionCortanaWindow(v1, 1, 0);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2C8,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
