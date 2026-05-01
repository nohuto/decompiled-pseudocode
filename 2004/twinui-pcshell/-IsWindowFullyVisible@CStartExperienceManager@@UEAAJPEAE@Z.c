/*
 * XREFs of ?IsWindowFullyVisible@CStartExperienceManager@@UEAAJPEAE@Z @ 0x180085930
 * Callers:
 *     <none>
 * Callees:
 *     ?IsViewCloaked@CSingleViewShellExperience@@QEAA_NXZ @ 0x180085974 (-IsViewCloaked@CSingleViewShellExperience@@QEAA_NXZ.c)
 */

__int64 __fastcall CStartExperienceManager::IsWindowFullyVisible(CStartExperienceManager *this, bool *a2)
{
  bool v2; // bl

  v2 = 0;
  if ( *((_DWORD *)this + 78) == 2 )
    v2 = !CSingleViewShellExperience::IsViewCloaked((CStartExperienceManager *)((char *)this + 272));
  *a2 = v2;
  return 0LL;
}
