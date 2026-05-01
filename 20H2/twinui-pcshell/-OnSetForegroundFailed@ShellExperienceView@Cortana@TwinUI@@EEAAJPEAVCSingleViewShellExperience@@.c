/*
 * XREFs of ?OnSetForegroundFailed@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801F8970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::OnSetForegroundFailed(
        RTL_SRWLOCK *this,
        struct CSingleViewShellExperience *a2)
{
  return TwinUI::Cortana::ShellExperienceView::_FireViewChanged(this - 5, 3, 0);
}
