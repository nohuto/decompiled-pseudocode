/*
 * XREFs of NtUserClipCursor @ 0x1C00C5C80
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
 *     ?SetClip@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C01A5B60 (-SetClip@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 */

__int64 __fastcall NtUserClipCursor(__int64 a1)
{
  struct tagRECT *v1; // rdi
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // ebx
  __int64 v7[6]; // [rsp+20h] [rbp-68h] BYREF
  struct tagRECT v8; // [rsp+50h] [rbp-38h] BYREF
  struct tagRECT v9; // [rsp+60h] [rbp-28h] BYREF

  v1 = (struct tagRECT *)a1;
  v7[3] = a1;
  EnterCrit(0LL, 1);
  v9 = 0LL;
  v2 = 0;
  if ( (unsigned int)ApiSetCheckCursorClipAccess(0, v1 == 0LL) )
  {
    if ( v1 )
    {
      if ( (unsigned __int64)v1 >= MmUserProbeAddress )
        v1 = (struct tagRECT *)MmUserProbeAddress;
      v9 = *v1;
      LODWORD(v7[0]) = (v9.right + v9.left) / 2;
      HIDWORD(v7[0]) = (v9.top + v9.bottom) / 2;
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
      v7[0] = GuessMonitorOverrideForCoordinateConversions(v7[0], CurrentThreadDpiAwarenessContext, 0);
      LogicalToPhysicalDPIRect(&v9, &v9, CurrentThreadDpiAwarenessContext, v7);
      v8 = v9;
      CCursorClip::SetClip(gpCursorClip, &v8);
    }
    else
    {
      CCursorClip::ClearClip(gpCursorClip);
    }
    v2 = 1;
  }
  else
  {
    UserSetLastError(5LL, v3);
  }
  UserSessionSwitchLeaveCrit(v4);
  return v2;
}
