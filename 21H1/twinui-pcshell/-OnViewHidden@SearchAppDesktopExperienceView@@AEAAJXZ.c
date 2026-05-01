/*
 * XREFs of ?OnViewHidden@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1800862C4
 * Callers:
 *     ?OnViewChanged@SearchAppDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x180019420 (-OnViewChanged@SearchAppDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@In.c)
 * Callees:
 *     ?NotifyView@SearchAppDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18001731C (-NotifyView@SearchAppDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Win.c)
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x18001A660 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?UpdateSuggestionsShowing@SearchAppDesktopExperienceView@@AEAAXE@Z @ 0x18001C4C4 (-UpdateSuggestionsShowing@SearchAppDesktopExperienceView@@AEAAXE@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetZBand@SearchAppDesktopExperienceView@@AEAAJW4ZBID@@@Z @ 0x180086364 (-SetZBand@SearchAppDesktopExperienceView@@AEAAJW4ZBID@@@Z.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::OnViewHidden(SearchAppDesktopExperienceView *this)
{
  int v2; // eax
  int v3; // eax
  unsigned int v4; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_BYTE *)this + 205) = 0;
  *((_BYTE *)this + 208) = 0;
  v2 = SearchAppDesktopExperienceView::SetZBand();
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x38C,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v2);
  SearchAppDesktopExperienceView::UpdateSuggestionsShowing(this, 0);
  if ( *((_BYTE *)this + 204)
    && (*((_BYTE *)this + 204) = 0,
        v3 = SearchAppDesktopExperienceView::NotifyView(this, L"NotifyAppTransitionCanceled", 0LL),
        v4 = v3,
        v3 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x396,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
  else
  {
    SearchAppDesktopExperienceView::PositionCortanaWindow(this, 1, 0);
    return 0LL;
  }
}
