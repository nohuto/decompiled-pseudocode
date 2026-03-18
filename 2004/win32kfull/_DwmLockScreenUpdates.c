/*
 * XREFs of _DwmLockScreenUpdates @ 0x1C0129B40
 * Callers:
 *     <none>
 * Callees:
 *     IsCurrentDesktopComposed @ 0x1C003C800 (IsCurrentDesktopComposed.c)
 *     xxxRedrawWindow @ 0x1C0071544 (xxxRedrawWindow.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall DwmLockScreenUpdates(int a1)
{
  __int64 v2; // r8
  struct tagWND *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( PsGetCurrentProcessId() == (HANDLE)gpidLogon )
  {
    g_bLockUpdatesForDwm = a1;
    if ( grpdeskRitInput && g_bLockUpdatesForDwm && !a1 && !(unsigned int)IsCurrentDesktopComposed() )
    {
      v8[2] = 0LL;
      v4 = *(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
      v8[0] = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = v8;
      v8[1] = v4;
      if ( v4 )
        HMLockObject(v4);
      xxxRedrawWindow(v4, 0LL, 0LL, 133);
      ThreadUnlock1(v6, v5, v7);
    }
  }
  else
  {
    UserSetLastError(5LL, gpidLogon, v2);
  }
  return 0LL;
}
