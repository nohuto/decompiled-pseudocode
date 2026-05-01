/*
 * XREFs of ?OnWorkAreaChanged@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x180207470
 * Callers:
 *     <none>
 * Callees:
 *     ?IsViewVisible@SearchAppDesktopExperienceView@@AEAA_NXZ @ 0x180010984 (-IsViewVisible@SearchAppDesktopExperienceView@@AEAA_NXZ.c)
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x1800130D0 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?PositionAlongsideStart@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x180060E14 (-PositionAlongsideStart@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::OnWorkAreaChanged(SearchAppDesktopExperienceView *this)
{
  SearchAppDesktopExperienceView *v1; // rdi
  int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (SearchAppDesktopExperienceView *)((char *)this - 16);
  if ( SearchAppDesktopExperienceView::IsViewVisible((SearchAppDesktopExperienceView *)((char *)this - 16))
    && *((_BYTE *)this + 189) )
  {
    v3 = SearchAppDesktopExperienceView::PositionAlongsideStart(v1);
    if ( v3 < 0 )
    {
      v4 = 509LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v3);
      return (unsigned int)v3;
    }
    v3 = SearchAppDesktopExperienceView::PositionCortanaWindow(v1, 1, 0);
    if ( v3 < 0 )
    {
      v4 = 510LL;
      goto LABEL_5;
    }
  }
  return 0LL;
}
