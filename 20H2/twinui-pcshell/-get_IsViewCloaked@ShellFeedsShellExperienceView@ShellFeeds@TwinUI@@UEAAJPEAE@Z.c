/*
 * XREFs of ?get_IsViewCloaked@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@UEAAJPEAE@Z @ 0x1800AA000
 * Callers:
 *     <none>
 * Callees:
 *     ?IsViewCloaked@CSingleViewShellExperience@@QEAA_NXZ @ 0x180085AC4 (-IsViewCloaked@CSingleViewShellExperience@@QEAA_NXZ.c)
 */

__int64 __fastcall TwinUI::ShellFeeds::ShellFeedsShellExperienceView::get_IsViewCloaked(
        TwinUI::ShellFeeds::ShellFeedsShellExperienceView *this,
        char *a2)
{
  *a2 = CSingleViewShellExperience::IsViewCloaked((TwinUI::ShellFeeds::ShellFeedsShellExperienceView *)((char *)this + 32));
  return 0LL;
}
