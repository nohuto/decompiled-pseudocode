/*
 * XREFs of ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C003B498
 * Callers:
 *     xxxConsoleControl @ 0x1C003B148 (xxxConsoleControl.c)
 * Callees:
 *     LockProcessByClientId @ 0x1C003B608 (LockProcessByClientId.c)
 *     WPP_RECORDER_SF_sqq @ 0x1C003B684 (WPP_RECORDER_SF_sqq.c)
 *     CheckAllowForeground @ 0x1C003B790 (CheckAllowForeground.c)
 *     WPP_RECORDER_SF_ @ 0x1C0040298 (WPP_RECORDER_SF_.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxUserNotifyConsoleApplication(struct _CONSOLE_PROCESS_INFO *a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  int inited; // esi
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rdi
  int v8; // edx
  const char *v9; // rbx
  char ProcessWin32Process; // al
  int v11; // edx
  int v12; // ecx
  int v13; // ecx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  Object = 0LL;
  if ( !gptiRit )
    return 3221225506LL;
  result = LockProcessByClientId(*(int *)a1, &Object);
  if ( (int)result >= 0 )
  {
    inited = xxxSetProcessInitState(Object, 0LL);
    if ( inited >= 0 )
    {
      v6 = *((unsigned int *)a1 + 1);
      if ( (v6 & 1) != 0 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6, v3, v5);
        if ( (unsigned int)CheckAllowForeground(Object) )
        {
          v13 = *(_DWORD *)(CurrentProcessWin32Process + 12);
          if ( (v13 & 0x40) == 0 )
            SetAppStarting(CurrentProcessWin32Process);
          gdwPUDFlags |= 0x8000000u;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v8) = 4;
            WPP_RECORDER_SF_(v13, v8, 2, 11, (__int64)&WPP_fae14e43e2df34d42d304f3db5b27b93_Traceguids);
          }
          *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x100u;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v9 = "set";
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x100) == 0 )
            v9 = "NOT";
          ProcessWin32Process = PsGetProcessWin32Process(Object);
          WPP_RECORDER_SF_sqq(
            v12,
            v11,
            2,
            12,
            (__int64)&WPP_fae14e43e2df34d42d304f3db5b27b93_Traceguids,
            (__int64)v9,
            CurrentProcessWin32Process,
            ProcessWin32Process);
        }
      }
    }
    ObfDereferenceObject(Object);
    return (unsigned int)inited;
  }
  return result;
}
