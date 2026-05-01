/*
 * XREFs of ?OnViewUncloaked@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180067460
 * Callers:
 *     <none>
 * Callees:
 *     ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x180067488 (-End@CExperienceManagerAnimationHelper@@QEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CStartExperienceManager::OnViewUncloaked(
        CStartExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v2; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CExperienceManagerAnimationHelper::End((CStartExperienceManager *)((char *)this + 472));
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x29F,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v2,
      v4);
  return 0LL;
}
