/*
 * XREFs of ?get_Visible@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAE@Z @ 0x180086CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::get_Visible(
        TwinUI::Cortana::ShellExperienceView *this,
        bool *a2)
{
  *a2 = *((_DWORD *)this + 22) == 2;
  return 0LL;
}
