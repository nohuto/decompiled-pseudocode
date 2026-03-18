/*
 * XREFs of NtUserLockCursor @ 0x1C0038FF0
 * Callers:
 *     <none>
 * Callees:
 *     GuessMonitorOverrideForCoordinateConversions @ 0x1C002A700 (GuessMonitorOverrideForCoordinateConversions.c)
 *     ApiSetCheckCursorClipAccess @ 0x1C0039078 (ApiSetCheckCursorClipAccess.c)
 *     LogicalToPhysicalDPIRect @ 0x1C006BCF0 (LogicalToPhysicalDPIRect.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C006DC9C (W32GetCurrentThreadDpiAwarenessContext.c)
 *     EnterCrit @ 0x1C0084270 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     ?ClearClip@CCursorClip@@QEAAXXZ @ 0x1C00A6520 (-ClearClip@CCursorClip@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     ?LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C01A5A24 (-LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z.c)
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
      ((void (__fastcall *)(struct tagRECT *, struct tagRECT *, _QWORD, __int64 *))LogicalToPhysicalDPIRect)(
        &v10,
        &v10,
        CurrentThreadDpiAwarenessContext,
        &v8);
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
