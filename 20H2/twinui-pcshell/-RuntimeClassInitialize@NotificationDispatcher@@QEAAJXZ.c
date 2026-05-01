/*
 * XREFs of ?RuntimeClassInitialize@NotificationDispatcher@@QEAAJXZ @ 0x180191EF4
 * Callers:
 *     ??$MakeAndInitialize@VNotificationDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVNotificationDispatcher@@@Z @ 0x18018C594 (--$MakeAndInitialize@VNotificationDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVNotificati.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall NotificationDispatcher::RuntimeClassInitialize(NotificationDispatcher *this)
{
  HRESULT ApartmentType; // eax
  __int64 v4; // rax
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  APTTYPE pAptType; // [rsp+48h] [rbp+10h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+50h] [rbp+18h] BYREF

  ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
  if ( ApartmentType >= 0 )
  {
    if ( pAptType == APTTYPE_STA || pAptType == APTTYPE_MAINSTA )
      ApartmentType = 0;
    else
      ApartmentType = -2147467259;
  }
  if ( ApartmentType >= 0 )
  {
    v4 = SHCreateWorkerWindowW(NotificationDispatcher::WndProc, -3LL, 0LL, 0LL, 0LL, this);
    *((_QWORD *)this + 5) = v4;
    if ( v4 )
      return 0LL;
    else
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x47,
               (__int64)"pcshell\\twinui\\appviewmanager\\lib\\notificationdispatcher.cpp",
               v5);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x44,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\notificationdispatcher.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
}
