/*
 * XREFs of ?OnViewCreated@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801D0670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CShoulderTapExperienceManager::OnViewCreated(
        CShoulderTapExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  return CSingleViewShellExperience::Hide((__int64)a2, 0LL);
}
