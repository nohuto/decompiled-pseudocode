/*
 * XREFs of ?Activate@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@UEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@@Z @ 0x1800A7C30
 * Callers:
 *     <none>
 * Callees:
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x180013C10 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1800887E4 (-SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?BringToForeground@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@UEAAJXZ @ 0x1800A7CE0 (-BringToForeground@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@UEAAJXZ.c)
 */

__int64 __fastcall TwinUI::ShellFeeds::ShellFeedsShellExperienceView::Activate(__int64 a1, HSTRING a2, int a3)
{
  int v5; // eax
  int v6; // edx
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  CSingleViewShellExperience::SetArgs((HSTRING *)(a1 + 48), a2);
  if ( *(_DWORD *)(a1 + 88) == 2 && a3 != 2 )
  {
    v5 = TwinUI::ShellFeeds::ShellFeedsShellExperienceView::BringToForeground((TwinUI::ShellFeeds::ShellFeedsShellExperienceView *)a1);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4A,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsshellexperienceview.cpp",
        (const char *)(unsigned int)v5);
  }
  if ( a3 )
    v6 = a3 == 2;
  else
    v6 = 4;
  v7 = CSingleViewShellExperience::Show(
         a1 + 48,
         (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)(v6 | 2u));
  v8 = v7;
  if ( v7 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsshellexperienceview.cpp",
      (const char *)(unsigned int)v7);
  return v8;
}
