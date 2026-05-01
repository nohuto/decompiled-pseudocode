/*
 * XREFs of ?OnViewDestroying@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801CC7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateFocusOnDismiss@CPeopleBarFlyoutExperienceManager@@AEAAJXZ @ 0x1801CDA08 (-UpdateFocusOnDismiss@CPeopleBarFlyoutExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CPeopleBarFlyoutExperienceManager::OnViewDestroying(
        CPeopleBarFlyoutExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int updated; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  updated = CPeopleBarFlyoutExperienceManager::UpdateFocusOnDismiss((CPeopleBarFlyoutExperienceManager *)((char *)this - 64));
  if ( updated < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x182,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
      (const char *)(unsigned int)updated);
  return 0LL;
}
