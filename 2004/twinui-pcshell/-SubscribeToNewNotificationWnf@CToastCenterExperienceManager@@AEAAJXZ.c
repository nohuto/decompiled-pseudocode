/*
 * XREFs of ?SubscribeToNewNotificationWnf@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801C990C
 * Callers:
 *     ?OnShellReady@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801C45F0 (-OnShellReady@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CToastCenterExperienceManager::SubscribeToNewNotificationWnf(CToastCenterExperienceManager *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v1 = RtlSubscribeWnfStateChangeNotification(
         (char *)this + 384,
         WNF_SHEL_TOAST_PUBLISHED,
         0LL,
         CToastCenterExperienceManager::NotificationStateChangedCallback);
  v2 = v1 | 0x10000000;
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x37D,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)v2);
  return v2;
}
