/*
 * XREFs of ?SubscribeToCriticalNotificationWnf@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801A5D84
 * Callers:
 *     ?OnShellReady@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801A0AE0 (-OnShellReady@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CToastCenterExperienceManager::SubscribeToCriticalNotificationWnf(
        CToastCenterExperienceManager *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v1 = RtlSubscribeWnfStateChangeNotification(
         (char *)this + 392,
         WNF_SHEL_NOTIFICATIONS_CRITICAL,
         0LL,
         CToastCenterExperienceManager::CriticalNotificationStateChangedCallback);
  v2 = v1 | 0x10000000;
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x38B,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)v2);
  return v2;
}
