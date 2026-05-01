/*
 * XREFs of ?OnUIATreesUnlinked@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x180088D20
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyView@SearchAppDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18001731C (-NotifyView@SearchAppDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Win.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::OnUIATreesUnlinked(SearchAppDesktopExperienceView *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = SearchAppDesktopExperienceView::NotifyView(
         (SearchAppDesktopExperienceView *)((char *)this - 16),
         L"NotifyUIATreesUnlinked",
         0LL);
  v2 = v1;
  if ( v1 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x885,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v1);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E4,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)v2);
  }
  return v2;
}
