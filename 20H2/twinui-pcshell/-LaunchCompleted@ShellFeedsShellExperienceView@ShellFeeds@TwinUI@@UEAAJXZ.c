/*
 * XREFs of ?LaunchCompleted@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@UEAAJXZ @ 0x180089E40
 * Callers:
 *     <none>
 * Callees:
 *     ?LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ @ 0x18004430C (-LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ.c)
 */

__int64 __fastcall TwinUI::ShellFeeds::ShellFeedsShellExperienceView::LaunchCompleted(HSTRING *this)
{
  CSingleViewShellExperience::LaunchCompleted(this + 4);
  return 0LL;
}
