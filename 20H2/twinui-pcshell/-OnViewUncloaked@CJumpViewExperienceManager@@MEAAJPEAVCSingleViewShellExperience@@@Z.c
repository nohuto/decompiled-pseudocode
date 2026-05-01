/*
 * XREFs of ?OnViewUncloaked@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801D8E50
 * Callers:
 *     <none>
 * Callees:
 *     ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x18005D578 (-End@CExperienceManagerAnimationHelper@@QEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CJumpViewExperienceManager::OnViewUncloaked(
        CJumpViewExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 109) == 3 )
  {
    v2 = CExperienceManagerAnimationHelper::End((CJumpViewExperienceManager *)((char *)this + 368));
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x216,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v2);
  }
  return 0LL;
}
