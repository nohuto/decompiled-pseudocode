/*
 * XREFs of NtUserGetClipCursor @ 0x1C0139150
 * Callers:
 *     <none>
 * Callees:
 *     GuessMonitorOverrideForCoordinateConversions @ 0x1C002A700 (GuessMonitorOverrideForCoordinateConversions.c)
 *     ApiSetCheckCursorClipAccess @ 0x1C0039078 (ApiSetCheckCursorClipAccess.c)
 *     PhysicalToLogicalDPIRect @ 0x1C006BE30 (PhysicalToLogicalDPIRect.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C006DC9C (W32GetCurrentThreadDpiAwarenessContext.c)
 *     EnterSharedCrit @ 0x1C008A1D0 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     ?GetClip@CCursorClip@@QEBA?AUtagRECT@@XZ @ 0x1C00C76F0 (-GetClip@CCursorClip@@QEBA-AUtagRECT@@XZ.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetClipCursor(_OWORD *a1)
{
  __int64 v2; // rdx
  int v3; // ebx
  __int64 v4; // rcx
  _OWORD *v5; // rax
  unsigned int CurrentThreadDpiAwarenessContext; // ebx
  __int64 v8; // [rsp+30h] [rbp-48h]
  __int64 v9; // [rsp+40h] [rbp-38h] BYREF
  struct tagRECT v10; // [rsp+50h] [rbp-28h] BYREF

  EnterSharedCrit(0LL, 1);
  v3 = 0;
  if ( (unsigned int)ApiSetCheckCursorClipAccess(1u, 0) )
  {
    v5 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v5 = (_OWORD *)MmUserProbeAddress;
    *v5 = *v5;
    CCursorClip::GetClip((struct tagRECT *)gpCursorClip, &v10);
    LODWORD(v8) = (v10.left + v10.right) / 2;
    HIDWORD(v8) = (v10.top + v10.bottom) / 2;
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    v9 = GuessMonitorOverrideForCoordinateConversions(v8, CurrentThreadDpiAwarenessContext, 1);
    PhysicalToLogicalDPIRect(a1, &v10, CurrentThreadDpiAwarenessContext, &v9);
    v3 = 1;
  }
  else
  {
    UserSetLastError(5LL, v2);
  }
  UserSessionSwitchLeaveCrit(v4);
  return v3;
}
