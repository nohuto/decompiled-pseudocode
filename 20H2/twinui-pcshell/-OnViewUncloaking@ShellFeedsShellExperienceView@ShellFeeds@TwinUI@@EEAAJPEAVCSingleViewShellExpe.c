/*
 * XREFs of ?OnViewUncloaking@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800A9AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TwinUI::ShellFeeds::ShellFeedsShellExperienceView::OnViewUncloaking(
        TwinUI::ShellFeeds::ShellFeedsShellExperienceView *this,
        struct CSingleViewShellExperience *a2)
{
  return TwinUI::ShellFeeds::ShellFeedsShellExperienceView::_FireViewChanged((char *)this - 40, 10LL);
}
