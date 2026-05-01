/*
 * XREFs of ?Launch@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUHSTRING__@@@Z @ 0x1800A98C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x180088254 (-SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::Launch(HSTRING *this, HSTRING a2)
{
  CSingleViewShellExperience *v2; // rbx

  v2 = (CSingleViewShellExperience *)(this + 4);
  CSingleViewShellExperience::SetArgs(this + 4, a2);
  return CSingleViewShellExperience::Launch(v2);
}
