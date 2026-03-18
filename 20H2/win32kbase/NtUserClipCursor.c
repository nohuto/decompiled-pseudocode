/*
 * XREFs of NtUserClipCursor @ 0x1C00C5610
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
 *     ?SetClip@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C019DA60 (-SetClip@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 */

__int64 __fastcall NtUserClipCursor(__int64 a1)
{
  struct tagRECT *v1; // rdi
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int CurrentThreadDpiAwarenessContext; // ebx
  __int64 v10[6]; // [rsp+20h] [rbp-68h] BYREF
  struct tagRECT v11; // [rsp+50h] [rbp-38h] BYREF
  struct tagRECT v12; // [rsp+60h] [rbp-28h] BYREF

  v1 = (struct tagRECT *)a1;
  v10[3] = a1;
  EnterCrit(0, 1);
  v12 = 0LL;
  v2 = 0;
  if ( (unsigned int)ApiSetCheckCursorClipAccess(0, v1 == 0LL) )
  {
    if ( v1 )
    {
      if ( (unsigned __int64)v1 >= MmUserProbeAddress )
        v1 = (struct tagRECT *)MmUserProbeAddress;
      v12 = *v1;
      LODWORD(v10[0]) = (v12.right + v12.left) / 2;
      HIDWORD(v10[0]) = (v12.top + v12.bottom) / 2;
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
      v10[0] = GuessMonitorOverrideForCoordinateConversions(v10[0], CurrentThreadDpiAwarenessContext, 0);
      LogicalToPhysicalDPIRect(&v12, &v12, CurrentThreadDpiAwarenessContext, v10);
      v11 = v12;
      CCursorClip::SetClip(gpCursorClip, &v11);
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
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v2;
}
