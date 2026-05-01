/*
 * XREFs of ?OnIdleStateChanged@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@_N@Z @ 0x1801D46E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReactivateHelper@CStartExperienceManager@@AEAAJPEBG_N@Z @ 0x180017690 (-ReactivateHelper@CStartExperienceManager@@AEAAJPEBG_N@Z.c)
 */

__int64 __fastcall CStartExperienceManager::OnIdleStateChanged(
        CStartExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  if ( *((_DWORD *)a2 + 10) != 1 )
    CStartExperienceManager::ReactivateHelper((CStartExperienceManager *)((char *)this - 88), L"OnUserSessionIdle");
  return 0LL;
}
