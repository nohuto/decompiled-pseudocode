/*
 * XREFs of ?OnViewHidden@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180089CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::OnViewHidden(
        RTL_SRWLOCK *this,
        struct CSingleViewShellExperience *a2)
{
  return TwinUI::Cortana::ShellExperienceView::_FireViewChanged(this - 5, 7, 0);
}
