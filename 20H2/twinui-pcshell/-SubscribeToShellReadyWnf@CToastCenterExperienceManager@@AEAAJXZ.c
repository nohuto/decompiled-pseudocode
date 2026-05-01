/*
 * XREFs of ?SubscribeToShellReadyWnf@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801C94F4
 * Callers:
 *     ?RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801C5C98 (-RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CToastCenterExperienceManager::SubscribeToShellReadyWnf(CToastCenterExperienceManager *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v1 = RtlSubscribeWnfStateChangeNotification(
         (char *)this + 400,
         WNF_SHEL_SESSION_LOGON_COMPLETE,
         0LL,
         CToastCenterExperienceManager::ShellReadyCallback);
  v2 = v1 | 0x10000000;
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x361,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)v2);
  return v2;
}
