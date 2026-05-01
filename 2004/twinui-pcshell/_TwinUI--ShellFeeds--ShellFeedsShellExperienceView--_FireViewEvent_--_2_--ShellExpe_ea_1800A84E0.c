/*
 * XREFs of _TwinUI::ShellFeeds::ShellFeedsShellExperienceView::_FireViewEvent_::_2_::ShellExperienceViewEventArg::get_Name @ 0x1800A84E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TwinUI::ShellFeeds::ShellFeedsShellExperienceView::_FireViewEvent_::_2_::ShellExperienceViewEventArg::get_Name(
        __int64 a1,
        HSTRING *a2)
{
  HRESULT v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = WindowsDuplicateString(*(HSTRING *)(a1 + 32), a2);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x158,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsshellexperienceview.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
