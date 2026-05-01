/*
 * XREFs of ?OnApplicationActivatedForLaunch@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@J@Z @ 0x1801F8950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::OnApplicationActivatedForLaunch(
        RTL_SRWLOCK *this,
        struct CSingleViewShellExperience *a2,
        int a3)
{
  return TwinUI::Cortana::ShellExperienceView::_FireViewChanged(this - 5, 0, a3);
}
