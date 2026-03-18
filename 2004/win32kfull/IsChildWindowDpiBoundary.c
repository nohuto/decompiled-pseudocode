/*
 * XREFs of IsChildWindowDpiBoundary @ 0x1C006F7CC
 * Callers:
 *     InitializeDPIINFO @ 0x1C001FD54 (InitializeDPIINFO.c)
 *     IsChildWindowDpiBoundaryDesktopComposed @ 0x1C0020C48 (IsChildWindowDpiBoundaryDesktopComposed.c)
 *     GetMonitorTransform @ 0x1C0023344 (GetMonitorTransform.c)
 *     xxxSetLayeredWindow @ 0x1C0028B2C (xxxSetLayeredWindow.c)
 *     UpdateWindowPositionsForDpiBoundaryChange @ 0x1C00515B4 (UpdateWindowPositionsForDpiBoundaryChange.c)
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00516F4 (-GetTopLevelOrDpiBoundaryWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0068320 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     UpdateWindowMonitor @ 0x1C006F040 (UpdateWindowMonitor.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C006FA2C (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxUpdateWindowPositionsForDpiBoundaryChange @ 0x1C01E6D2C (xxxUpdateWindowPositionsForDpiBoundaryChange.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C01F7474 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 * Callees:
 *     GetMonitorRectForDpiContext @ 0x1C0023470 (GetMonitorRectForDpiContext.c)
 *     ?IsChildWindowCoordinateSpaceBoundary@@YAHPEAUtagWND@@@Z @ 0x1C006F870 (-IsChildWindowCoordinateSpaceBoundary@@YAHPEAUtagWND@@@Z.c)
 *     ?GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z @ 0x1C01097BC (-GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z.c)
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
