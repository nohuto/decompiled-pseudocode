/*
 * XREFs of ?Hide@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@UEAAJXZ @ 0x1800A7D20
 * Callers:
 *     <none>
 * Callees:
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x180012F40 (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TwinUI::ShellFeeds::ShellFeedsShellExperienceView::Hide(
        TwinUI::ShellFeeds::ShellFeedsShellExperienceView *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = CSingleViewShellExperience::Hide(
         (__int64)this + 48,
         (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)1);
  v2 = v1;
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5F,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsshellexperienceview.cpp",
      (const char *)(unsigned int)v1);
  return v2;
}
