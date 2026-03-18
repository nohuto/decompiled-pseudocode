/*
 * XREFs of NtUserLockCursor @ 0x1C0046100
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearClip@CCursorClip@@QEAAXXZ @ 0x1C0010E90 (-ClearClip@CCursorClip@@QEAAXXZ.c)
 *     LogicalToPhysicalDPIRect @ 0x1C0011820 (LogicalToPhysicalDPIRect.c)
 *     GuessMonitorOverrideForCoordinateConversions @ 0x1C0033C00 (GuessMonitorOverrideForCoordinateConversions.c)
 *     ApiSetCheckCursorClipAccess @ 0x1C0046188 (ApiSetCheckCursorClipAccess.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0083EF8 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     EnterCrit @ 0x1C008B340 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     ?LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C019FCC4 (-LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 */

__int64 __fastcall NtUserLockCursor(struct tagRECT *a1)
{
  int v2; // ebx
  __int64 v3; // rcx
  __int64 v5; // rdx
  unsigned int CurrentThreadDpiAwarenessContext; // ebx
  CCursorClip *v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-58h] BYREF
  struct tagRECT v9; // [rsp+40h] [rbp-38h] BYREF
  struct tagRECT v10; // [rsp+50h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v10 = 0LL;
  v2 = 0;
  if ( (unsigned int)ApiSetCheckCursorClipAccess(2LL) )
  {
    if ( a1 )
    {
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        a1 = (struct tagRECT *)MmUserProbeAddress;
      v10 = *a1;
      LODWORD(v8) = (v10.right + v10.left) / 2;
      v5 = (unsigned int)((v10.top + v10.bottom) >> 31);
      LODWORD(v5) = (v10.top + v10.bottom) % 2;
      HIDWORD(v8) = (v10.top + v10.bottom) / 2;
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(HIDWORD(*(_QWORD *)&v10.left), v5);
      v8 = GuessMonitorOverrideForCoordinateConversions(v8, CurrentThreadDpiAwarenessContext, 0);
      LogicalToPhysicalDPIRect(&v10, &v10, CurrentThreadDpiAwarenessContext, &v8);
      v9 = v10;
      CCursorClip::LockCursor(v7, &v9);
    }
    else
    {
      CCursorClip::ClearClip(gpCursorClip);
    }
    v2 = 1;
  }
  else
  {
    UserSetLastError(5LL);
  }
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
