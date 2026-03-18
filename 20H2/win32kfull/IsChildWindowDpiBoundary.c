/*
 * XREFs of IsChildWindowDpiBoundary @ 0x1C0046590
 * Callers:
 *     GetMonitorTransform @ 0x1C003DC9C (GetMonitorTransform.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C004596C (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     UpdateWindowMonitor @ 0x1C0046CD0 (UpdateWindowMonitor.c)
 *     InitializeDPIINFO @ 0x1C0090EAC (InitializeDPIINFO.c)
 *     IsChildWindowDpiBoundaryDesktopComposed @ 0x1C0091978 (IsChildWindowDpiBoundaryDesktopComposed.c)
 *     xxxSetLayeredWindow @ 0x1C00C6608 (xxxSetLayeredWindow.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00CA04C (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     UpdateWindowPositionsForDpiBoundaryChange @ 0x1C00F9B44 (UpdateWindowPositionsForDpiBoundaryChange.c)
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00F9C84 (-GetTopLevelOrDpiBoundaryWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     xxxUpdateWindowPositionsForDpiBoundaryChange @ 0x1C01E606C (xxxUpdateWindowPositionsForDpiBoundaryChange.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C01F6604 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 * Callees:
 *     GetMonitorRectForDpiContext @ 0x1C003DDC8 (GetMonitorRectForDpiContext.c)
 *     ?IsChildWindowCoordinateSpaceBoundary@@YAHPEAUtagWND@@@Z @ 0x1C0046634 (-IsChildWindowCoordinateSpaceBoundary@@YAHPEAUtagWND@@@Z.c)
 *     ?GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z @ 0x1C010A5DC (-GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z.c)
 */

__int64 __fastcall IsChildWindowDpiBoundary(struct tagWND *a1)
{
  unsigned int v2; // edi
  unsigned __int16 WindowCoordinateSpaceDpi; // bx
  __int64 v5; // rax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  if ( (unsigned int)IsChildWindowCoordinateSpaceBoundary(a1) )
  {
    WindowCoordinateSpaceDpi = GetWindowCoordinateSpaceDpi(a1);
    if ( WindowCoordinateSpaceDpi != GetWindowCoordinateSpaceDpi(*((struct tagWND **)a1 + 13)) )
      return 1;
    v5 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
    if ( v5 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(v5 + 40) + 28LL) != *(_QWORD *)GetMonitorRectForDpiContext(
                                                                    &v6,
                                                                    v5,
                                                                    *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL)) )
        return 1;
    }
  }
  return v2;
}
