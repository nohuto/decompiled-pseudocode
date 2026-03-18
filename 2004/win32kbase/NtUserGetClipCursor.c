/*
 * XREFs of NtUserGetClipCursor @ 0x1C01334B0
 * Callers:
 *     <none>
 * Callees:
 *     PhysicalToLogicalDPIRect @ 0x1C0011960 (PhysicalToLogicalDPIRect.c)
 *     GuessMonitorOverrideForCoordinateConversions @ 0x1C0033C00 (GuessMonitorOverrideForCoordinateConversions.c)
 *     ApiSetCheckCursorClipAccess @ 0x1C0046188 (ApiSetCheckCursorClipAccess.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0083EF8 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     EnterSharedCrit @ 0x1C0091220 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     ?GetClip@CCursorClip@@QEBA?AUtagRECT@@XZ @ 0x1C00C7E10 (-GetClip@CCursorClip@@QEBA-AUtagRECT@@XZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetClipCursor(_OWORD *a1)
{
  __int64 v2; // rdx
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  _OWORD *v8; // rax
  unsigned int CurrentThreadDpiAwarenessContext; // ebx
  __int64 v11; // [rsp+30h] [rbp-48h]
  __int64 v12; // [rsp+40h] [rbp-38h] BYREF
  struct tagRECT v13; // [rsp+50h] [rbp-28h] BYREF

  EnterSharedCrit(0LL, 1);
  v3 = 0;
  if ( (unsigned int)ApiSetCheckCursorClipAccess(1u, 0) )
  {
    v8 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v8 = (_OWORD *)MmUserProbeAddress;
    *v8 = *v8;
    CCursorClip::GetClip((struct tagRECT *)gpCursorClip, &v13);
    LODWORD(v11) = (v13.left + v13.right) / 2;
    HIDWORD(v11) = (v13.top + v13.bottom) / 2;
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    v12 = GuessMonitorOverrideForCoordinateConversions(v11, CurrentThreadDpiAwarenessContext, 1);
    PhysicalToLogicalDPIRect(a1, &v13, CurrentThreadDpiAwarenessContext, &v12);
    v3 = 1;
  }
  else
  {
    UserSetLastError(5LL, v2);
  }
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v3;
}
