/*
 * XREFs of ?OnPriorityBoostRequested@CTaskContinuityActivitiesExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801C0250
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ApplyPriorityBoostIfNeeded@CTaskContinuityActivitiesExperienceManager@@AEAAJXZ @ 0x1801BFDDC (-ApplyPriorityBoostIfNeeded@CTaskContinuityActivitiesExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CTaskContinuityActivitiesExperienceManager::OnPriorityBoostRequested(
        CTaskContinuityActivitiesExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  ++*((_DWORD *)this + 2);
  v2 = CTaskContinuityActivitiesExperienceManager::ApplyPriorityBoostIfNeeded((CTaskContinuityActivitiesExperienceManager *)((char *)this - 48));
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x96,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\taskcontinuityactivitiesexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
