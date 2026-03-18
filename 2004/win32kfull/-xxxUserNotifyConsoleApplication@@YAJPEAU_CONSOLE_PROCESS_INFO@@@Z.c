/*
 * XREFs of ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C0028258
 * Callers:
 *     xxxConsoleControl @ 0x1C0027F08 (xxxConsoleControl.c)
 * Callees:
 *     LockProcessByClientId @ 0x1C00283C8 (LockProcessByClientId.c)
 *     WPP_RECORDER_SF_sqq @ 0x1C0028444 (WPP_RECORDER_SF_sqq.c)
 *     CheckAllowForeground @ 0x1C0028550 (CheckAllowForeground.c)
 *     WPP_RECORDER_SF_ @ 0x1C00B1838 (WPP_RECORDER_SF_.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxUserNotifyConsoleApplication(struct _CONSOLE_PROCESS_INFO *a1)
{
  __int64 result; // rax
  int inited; // esi
  __int64 v4; // rcx
  __int64 CurrentProcessWin32Process; // rdi
  int v6; // edx
  const char *v7; // rbx
  char ProcessWin32Process; // al
  int v9; // edx
  int v10; // ecx
  int v11; // ecx
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
      v4 = *((unsigned int *)a1 + 1);
      if ( (v4 & 1) != 0 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
        if ( (unsigned int)CheckAllowForeground(Object) )
        {
          v11 = *(_DWORD *)(CurrentProcessWin32Process + 12);
          if ( (v11 & 0x40) == 0 )
            SetAppStarting(CurrentProcessWin32Process);
          gdwPUDFlags |= 0x8000000u;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v6) = 4;
            WPP_RECORDER_SF_(v11, v6, 2, 11, (__int64)&WPP_fae14e43e2df34d42d304f3db5b27b93_Traceguids);
          }
          *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x100u;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v7 = "set";
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x100) == 0 )
            v7 = "NOT";
          ProcessWin32Process = PsGetProcessWin32Process(Object);
          WPP_RECORDER_SF_sqq(
            v10,
            v9,
            2,
            12,
            (__int64)&WPP_fae14e43e2df34d42d304f3db5b27b93_Traceguids,
            (__int64)v7,
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
