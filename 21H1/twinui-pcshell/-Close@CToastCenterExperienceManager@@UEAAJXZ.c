/*
 * XREFs of ?Close@CToastCenterExperienceManager@@UEAAJXZ @ 0x18019E5B0
 * Callers:
 *     wil::details::ScopeExitFn__lambda_39f801ab22cf2ee958e837ec87d3c136___::_ScopeExitFn__lambda_39f801ab22cf2ee958e837ec87d3c136___ @ 0x18019DCB8 (wil--details--ScopeExitFn__lambda_39f801ab22cf2ee958e837ec87d3c136___--_ScopeExitFn__lambda_39f8.c)
 *     ?RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801A2618 (-RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x18011D420 (-Unregister@SmartCookie@@QEAAJXZ.c)
 */

__int64 __fastcall CToastCenterExperienceManager::Close(CToastCenterExperienceManager *this)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rcx
  int v5; // eax
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 50);
  if ( v2 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 40LL))(v2, *((unsigned int *)this + 102));
    if ( v3 >= 0 )
      *((_DWORD *)this + 102) = 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x159,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
  }
  v4 = *((_QWORD *)this + 73);
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 32LL))(v4, *((unsigned int *)this + 140));
    if ( v5 >= 0 )
      *((_DWORD *)this + 140) = 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x161,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 73) + 32LL))(
           *((_QWORD *)this + 73),
           *((unsigned int *)this + 141));
    if ( v6 >= 0 )
      *((_DWORD *)this + 140) = 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x166,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
  }
  v7 = *((_QWORD *)this + 74);
  if ( v7 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 32LL))(v7, *((unsigned int *)this + 142));
    if ( v8 >= 0 )
      *((_DWORD *)this + 142) = 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x16E,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
  }
  if ( *((_DWORD *)this + 138) )
  {
    v9 = SmartCookie::Unregister((CToastCenterExperienceManager *)((char *)this + 432));
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x176,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
  }
  v10 = *((_QWORD *)this + 44);
  if ( v10 )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion(v10);
    *((_QWORD *)this + 44) = 0LL;
  }
  v11 = *((_QWORD *)this + 42);
  if ( v11 )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion(v11);
    *((_QWORD *)this + 42) = 0LL;
  }
  v12 = *((_QWORD *)this + 43);
  if ( v12 )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion(v12);
    *((_QWORD *)this + 43) = 0LL;
  }
  v13 = *((_QWORD *)this + 78);
  if ( v13 && *((_QWORD *)this + 79) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 72LL))(v13);
    *((_QWORD *)this + 79) = 0LL;
  }
  return 0LL;
}
