/*
 * XREFs of ?TryAcquireForegroundRightsForRemoteLaunch@RemoteLauncherForegroundHandler@@UEAAJXZ @ 0x180213450
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18013B538 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x18046A70C (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RemoteLauncherForegroundHandler::TryAcquireForegroundRightsForRemoteLaunch(
        RemoteLauncherForegroundHandler *this)
{
  DWORD ProcessId; // edi
  int CallingProcessHandle; // ebx
  char *v4; // rcx
  __int64 v5; // rdx
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HANDLE Process; // [rsp+48h] [rbp+10h] BYREF

  ProcessId = 0;
  Process = 0LL;
  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(this, 0LL, &Process);
  if ( CallingProcessHandle >= 0 )
    ProcessId = GetProcessId(Process);
  v4 = (char *)Process;
  Process = 0LL;
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v4);
  if ( CallingProcessHandle < 0 )
  {
    v5 = 31LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\remotelauncherforegroundhandler\\lib\\remotelauncherforegroundhandler.cpp",
      (const char *)(unsigned int)CallingProcessHandle);
    return (unsigned int)CallingProcessHandle;
  }
  CallingProcessHandle = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 24LL))(*((_QWORD *)this + 6));
  if ( CallingProcessHandle < 0 )
  {
    v5 = 32LL;
    goto LABEL_7;
  }
  if ( AllowSetForegroundWindow(ProcessId) )
    return 0LL;
  else
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x21,
             (__int64)"pcshell\\twinui\\remotelauncherforegroundhandler\\lib\\remotelauncherforegroundhandler.cpp",
             v7);
}
