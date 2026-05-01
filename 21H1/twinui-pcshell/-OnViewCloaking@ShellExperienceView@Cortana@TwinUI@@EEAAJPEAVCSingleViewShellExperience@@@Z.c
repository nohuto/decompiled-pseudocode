/*
 * XREFs of ?OnViewCloaking@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180089A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::OnViewCloaking(
        RTL_SRWLOCK *this,
        struct CSingleViewShellExperience *a2)
{
  return TwinUI::Cortana::ShellExperienceView::_FireViewChanged(this - 5, 4, 0);
}
