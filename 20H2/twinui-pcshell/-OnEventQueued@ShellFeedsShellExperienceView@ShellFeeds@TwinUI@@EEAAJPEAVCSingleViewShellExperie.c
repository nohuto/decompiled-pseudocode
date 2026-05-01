/*
 * XREFs of ?OnEventQueued@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800A9950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TwinUI::ShellFeeds::ShellFeedsShellExperienceView::OnEventQueued(
        TwinUI::ShellFeeds::ShellFeedsShellExperienceView *this,
        struct CSingleViewShellExperience *a2,
        HSTRING a3,
        struct Windows::Foundation::Collections::IPropertySet *a4)
{
  return TwinUI::ShellFeeds::ShellFeedsShellExperienceView::_FireViewEvent(
           (TwinUI::ShellFeeds::ShellFeedsShellExperienceView *)((char *)this - 40),
           a3,
           a4);
}
