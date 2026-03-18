/*
 * XREFs of W32GetCurrentThreadDpiAwarenessContext @ 0x1C006DC9C
 * Callers:
 *     TransformPointBetweenCoordinateSpaces @ 0x1C0008460 (TransformPointBetweenCoordinateSpaces.c)
 *     LogicalToPhysicalDPIPoint @ 0x1C0008560 (LogicalToPhysicalDPIPoint.c)
 *     NtUserLockCursor @ 0x1C0038FF0 (NtUserLockCursor.c)
 *     NtUserGetProcessDpiAwarenessContext @ 0x1C0042D50 (NtUserGetProcessDpiAwarenessContext.c)
 *     UserIsCurrentThreadGdiScaled @ 0x1C0049C40 (UserIsCurrentThreadGdiScaled.c)
 *     ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C006BBD4 (-GetCurrentThreadCompositedDpi@@YAGXZ.c)
 *     GetMonitorRect @ 0x1C006BC48 (GetMonitorRect.c)
 *     LogicalToPhysicalDPIRect @ 0x1C006BCF0 (LogicalToPhysicalDPIRect.c)
 *     PhysicalToLogicalDPIRect @ 0x1C006BE30 (PhysicalToLogicalDPIRect.c)
 *     PhysicalToLogicalDPIPoint @ 0x1C006C050 (PhysicalToLogicalDPIPoint.c)
 *     NtUserGetDpiForMonitor @ 0x1C006DA80 (NtUserGetDpiForMonitor.c)
 *     ?GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z @ 0x1C00A5BC4 (-GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z.c)
 *     xxxEnumDisplayMonitors @ 0x1C00A6620 (xxxEnumDisplayMonitors.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x1C00A69E0 (TransformRectBetweenCoordinateSpaces.c)
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C00A9FC8 (-UpdateUserScreen@@YAJXZ.c)
 *     NtUserClipCursor @ 0x1C00C5C80 (NtUserClipCursor.c)
 *     ?GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z @ 0x1C00CF0B4 (-GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     NtUserGetClipCursor @ 0x1C0139150 (NtUserGetClipCursor.c)
 *     GreGetDpiDepDefaultGuiFont @ 0x1C014C0C0 (GreGetDpiDepDefaultGuiFont.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C014C288 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C014C2C4 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C006DE0C (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C0085450 (W32GetThreadWin32Thread.c)
 */

__int64 W32GetCurrentThreadDpiAwarenessContext()
{
  unsigned int v0; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 CurrentProcessWin32Process; // rax

  v0 = 18;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v3 = ThreadWin32Thread;
  if ( ThreadWin32Thread )
  {
    if ( *(_QWORD *)(ThreadWin32Thread + 360) )
      CaptureAndValidateUserModeDpiAwarenessContext(ThreadWin32Thread);
    if ( *(_DWORD *)(v3 + 340) )
    {
      v0 = *(_DWORD *)(v3 + 340);
    }
    else
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
      if ( CurrentProcessWin32Process )
        v0 = *(_DWORD *)(CurrentProcessWin32Process + 280);
    }
    if ( (*(_DWORD *)(v3 + 328) & 4) != 0 && (v0 & 0xF) == 2 && (v0 & 0xF0) == 0x20 )
      v0 |= 0x20000000u;
  }
  return v0;
}
