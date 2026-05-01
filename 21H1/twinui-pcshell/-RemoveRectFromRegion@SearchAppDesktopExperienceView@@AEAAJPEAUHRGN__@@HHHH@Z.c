/*
 * XREFs of ?RemoveRectFromRegion@SearchAppDesktopExperienceView@@AEAAJPEAUHRGN__@@HHHH@Z @ 0x180083E04
 * Callers:
 *     ?ApplyCortanaWindowRegion@SearchAppDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z @ 0x18001C4F4 (-ApplyCortanaWindowRegion@SearchAppDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::RemoveRectFromRegion(
        SearchAppDesktopExperienceView *this,
        HRGN a2,
        int a3,
        int a4,
        int x2,
        int y2)
{
  HRGN RectRgn; // rax
  HRGN v8; // rbx
  unsigned int v9; // edi
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  RectRgn = CreateRectRgn(a3, a4, x2, y2);
  v8 = RectRgn;
  if ( RectRgn )
  {
    if ( CombineRgn(a2, a2, RectRgn, 4) )
    {
      v9 = 0;
      goto LABEL_4;
    }
    v11 = 2004LL;
  }
  else
  {
    v11 = 2003LL;
  }
  v9 = -2147467259;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
    (const char *)0x80004005LL);
LABEL_4:
  if ( v8 )
    DeleteObject(v8);
  return v9;
}
