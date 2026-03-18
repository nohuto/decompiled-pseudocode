/*
 * XREFs of W32GetCurrentThreadDpiAwarenessContext @ 0x1C003265C
 * Callers:
 *     ?GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z @ 0x1C000BC6C (-GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z.c)
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C001E6D0 (-UpdateUserScreen@@YAJXZ.c)
 *     xxxEnumDisplayMonitors @ 0x1C002F2E0 (xxxEnumDisplayMonitors.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x1C002F7A0 (TransformRectBetweenCoordinateSpaces.c)
 *     LogicalToPhysicalDPIPoint @ 0x1C0030850 (LogicalToPhysicalDPIPoint.c)
 *     TransformPointBetweenCoordinateSpaces @ 0x1C0031940 (TransformPointBetweenCoordinateSpaces.c)
 *     ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C0031B50 (-GetCurrentThreadCompositedDpi@@YAGXZ.c)
 *     GetMonitorRect @ 0x1C0031BC4 (GetMonitorRect.c)
 *     LogicalToPhysicalDPIRect @ 0x1C0031C60 (LogicalToPhysicalDPIRect.c)
 *     PhysicalToLogicalDPIRect @ 0x1C0031DA0 (PhysicalToLogicalDPIRect.c)
 *     PhysicalToLogicalDPIPoint @ 0x1C0031FC0 (PhysicalToLogicalDPIPoint.c)
 *     NtUserGetDpiForMonitor @ 0x1C0032440 (NtUserGetDpiForMonitor.c)
 *     NtUserLockCursor @ 0x1C00A73F0 (NtUserLockCursor.c)
 *     NtUserGetProcessDpiAwarenessContext @ 0x1C00B0E40 (NtUserGetProcessDpiAwarenessContext.c)
 *     UserIsCurrentThreadGdiScaled @ 0x1C00B74A0 (UserIsCurrentThreadGdiScaled.c)
 *     NtUserClipCursor @ 0x1C00C5610 (NtUserClipCursor.c)
 *     ?GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z @ 0x1C00CF804 (-GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     NtUserGetClipCursor @ 0x1C0131160 (NtUserGetClipCursor.c)
 *     GreGetDpiDepDefaultGuiFont @ 0x1C01438E0 (GreGetDpiDepDefaultGuiFont.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C0143A94 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C0143AD0 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C00327CC (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C0043BB0 (W32GetThreadWin32Thread.c)
 */

__int64 W32GetCurrentThreadDpiAwarenessContext()
{
  unsigned int v0; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdi
  __int64 CurrentProcessWin32Process; // rax

  v0 = 18;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v6 = ThreadWin32Thread;
  if ( ThreadWin32Thread )
  {
    if ( *(_QWORD *)(ThreadWin32Thread + 360) )
      CaptureAndValidateUserModeDpiAwarenessContext(ThreadWin32Thread);
    if ( *(_DWORD *)(v6 + 340) )
    {
      v0 = *(_DWORD *)(v6 + 340);
    }
    else
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3, v2, v4, v5);
      if ( CurrentProcessWin32Process )
        v0 = *(_DWORD *)(CurrentProcessWin32Process + 280);
    }
    if ( (*(_DWORD *)(v6 + 328) & 4) != 0 && (v0 & 0xF) == 2 && (v0 & 0xF0) == 0x20 )
      v0 |= 0x20000000u;
  }
  return v0;
}
