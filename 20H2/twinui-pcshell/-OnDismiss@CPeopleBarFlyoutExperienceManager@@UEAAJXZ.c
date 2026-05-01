/*
 * XREFs of ?OnDismiss@CPeopleBarFlyoutExperienceManager@@UEAAJXZ @ 0x1801CBCF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HideFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJXZ @ 0x1801CB730 (-HideFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJXZ.c)
 */

__int64 __fastcall CPeopleBarFlyoutExperienceManager::OnDismiss(CPeopleBarFlyoutExperienceManager *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_DWORD *)this + 170) = 2;
  v1 = CPeopleBarFlyoutExperienceManager::HideFlyout((CPeopleBarFlyoutExperienceManager *)((char *)this - 16));
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x105,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
