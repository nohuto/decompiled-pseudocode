/*
 * XREFs of ?Activate@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@@Z @ 0x1800881F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x1800449C4 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x180088254 (-SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?BringToForeground@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ @ 0x180088510 (-BringToForeground@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ.c)
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::Activate(_DWORD *a1, HSTRING a2, int a3)
{
  int v5; // edx
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  CSingleViewShellExperience::SetArgs((CSingleViewShellExperience *)(a1 + 12), a2);
  if ( a1[22] == 2 && a3 != 2 )
  {
    v9 = TwinUI::Cortana::ShellExperienceView::BringToForeground((TwinUI::Cortana::ShellExperienceView *)a1);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3F,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanashellexperienceview.cpp",
        (const char *)(unsigned int)v9);
  }
  if ( a3 )
    v5 = a3 == 2;
  else
    v5 = 4;
  v6 = CSingleViewShellExperience::Show(
         (__int64)(a1 + 12),
         (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)(v5 | 2u));
  v7 = v6;
  if ( v6 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4F,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanashellexperienceview.cpp",
      (const char *)(unsigned int)v6);
  return v7;
}
