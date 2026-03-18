/*
 * XREFs of NtUserLockCursor @ 0x1C00A73F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearClip@CCursorClip@@QEAAXXZ @ 0x1C002F100 (-ClearClip@CCursorClip@@QEAAXXZ.c)
 *     LogicalToPhysicalDPIRect @ 0x1C0031C60 (LogicalToPhysicalDPIRect.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003265C (W32GetCurrentThreadDpiAwarenessContext.c)
 *     EnterCrit @ 0x1C0045880 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     GuessMonitorOverrideForCoordinateConversions @ 0x1C0099950 (GuessMonitorOverrideForCoordinateConversions.c)
 *     ApiSetCheckCursorClipAccess @ 0x1C00A7478 (ApiSetCheckCursorClipAccess.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     ?LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C019D924 (-LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 */

__int64 __fastcall NtUserLockCursor(struct tagRECT *a1)
{
  __int64 v2; // rdx
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int CurrentThreadDpiAwarenessContext; // ebx
  CCursorClip *v10; // rcx
  __int64 v11; // [rsp+20h] [rbp-58h] BYREF
  struct tagRECT v12; // [rsp+40h] [rbp-38h] BYREF
  struct tagRECT v13; // [rsp+50h] [rbp-28h] BYREF

  EnterCrit(0, 1);
  v13 = 0LL;
  v3 = 0;
  if ( (unsigned int)ApiSetCheckCursorClipAccess(2LL) )
  {
    if ( a1 )
    {
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        a1 = (struct tagRECT *)MmUserProbeAddress;
      v13 = *a1;
      LODWORD(v11) = (v13.right + v13.left) / 2;
      HIDWORD(v11) = (v13.top + v13.bottom) / 2;
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
      v11 = GuessMonitorOverrideForCoordinateConversions(v11, CurrentThreadDpiAwarenessContext, 0);
      LogicalToPhysicalDPIRect(&v13, &v13, CurrentThreadDpiAwarenessContext, &v11);
      v12 = v13;
      CCursorClip::LockCursor(v10, &v12);
    }
    else
    {
      CCursorClip::ClearClip(gpCursorClip);
    }
    v3 = 1;
  }
  else
  {
    UserSetLastError(5LL, v2);
  }
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v3;
}
