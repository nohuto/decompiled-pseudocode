/*
 * XREFs of ?xxxUserNotifyConsoleApplication@@YGJPAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1AC7E
 * Callers:
 *     _xxxConsoleControl@12 @ 0x1A9EA (_xxxConsoleControl@12.c)
 * Callees:
 *     _LockProcessByClientId@8 @ 0x1AD58 (_LockProcessByClientId@8.c)
 *     _WPP_RECORDER_SF_sqq@32 @ 0x1ADA0 (_WPP_RECORDER_SF_sqq@32.c)
 *     _CheckAllowForeground@4 @ 0x1AE3E (_CheckAllowForeground@4.c)
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __thiscall xxxUserNotifyConsoleApplication(int this)
{
  int result; // eax
  int inited; // ebx
  int CurrentProcessWin32Process; // esi
  const char *v5; // edi
  char ProcessWin32Process; // al
  PVOID Object; // [esp+8h] [ebp-4h] BYREF

  Object = 0;
  if ( !_gptiRit )
    return -1073741790;
  result = LockProcessByClientId(*(HANDLE *)this, (PEPROCESS *)&Object);
  if ( result >= 0 )
  {
    inited = xxxSetProcessInitState(Object, 0);
    if ( inited >= 0 && (*(_BYTE *)(this + 4) & 1) != 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
      if ( CheckAllowForeground(Object) )
      {
        if ( (*(_BYTE *)(CurrentProcessWin32Process + 8) & 0x40) == 0 )
          SetAppStarting(CurrentProcessWin32Process);
        _gdwPUDFlags |= 0x8000000u;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(2, 11, &WPP_fae14e43e2df34d42d304f3db5b27b93_Traceguids);
        *(_DWORD *)(CurrentProcessWin32Process + 8) |= 0x100u;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v5 = "set";
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 8) & 0x100) == 0 )
          v5 = "NOT";
        ProcessWin32Process = PsGetProcessWin32Process(Object);
        WPP_RECORDER_SF_sqq(
          2,
          12,
          &WPP_fae14e43e2df34d42d304f3db5b27b93_Traceguids,
          v5,
          CurrentProcessWin32Process,
          ProcessWin32Process);
      }
    }
    ObfDereferenceObject(Object);
    return inited;
  }
  return result;
}
