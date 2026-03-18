/*
 * XREFs of _IsChildWindowDpiBoundary@4 @ 0x38846
 * Callers:
 *     _IsChildWindowDpiBoundaryDesktopComposed@4 @ 0x1CDC8 (_IsChildWindowDpiBoundaryDesktopComposed@4.c)
 *     _xxxSetLayeredWindow@12 @ 0x1F2B8 (_xxxSetLayeredWindow@12.c)
 *     _InitializeDPIINFO@16 @ 0x24784 (_InitializeDPIINFO@16.c)
 *     _UpdateWindowMonitor@8 @ 0x2A95A (_UpdateWindowMonitor@8.c)
 *     ?zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z @ 0x2B94A (-zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z.c)
 *     _GetMonitorTransform@12 @ 0x99CB2 (_GetMonitorTransform@12.c)
 *     _UpdateWindowPositionsForDpiBoundaryChange@4 @ 0x9B526 (_UpdateWindowPositionsForDpiBoundaryChange@4.c)
 *     ?GetTopLevelOrDpiBoundaryWindow@@YGPAUtagWND@@PAU1@@Z @ 0x9B656 (-GetTopLevelOrDpiBoundaryWindow@@YGPAUtagWND@@PAU1@@Z.c)
 *     _xxxUpdateWindowPositionsForDpiBoundaryChange@4 @ 0x152694 (_xxxUpdateWindowPositionsForDpiBoundaryChange@4.c)
 *     ?TransformSWPCoords@@YGXPAUtagWND@@PAH111I@Z @ 0x15F6FC (-TransformSWPCoords@@YGXPAUtagWND@@PAH111I@Z.c)
 * Callees:
 *     _GetMonitorRectForDpiContext@8 @ 0x3356A (_GetMonitorRectForDpiContext@8.c)
 *     ?IsChildWindowCoordinateSpaceBoundary@@YGHPAUtagWND@@@Z @ 0x388D6 (-IsChildWindowCoordinateSpaceBoundary@@YGHPAUtagWND@@@Z.c)
 *     ?GetWindowCoordinateSpaceDpi@@YGGPAUtagWND@@@Z @ 0xA3A82 (-GetWindowCoordinateSpaceDpi@@YGGPAUtagWND@@@Z.c)
 *     ??9?$RedirectedFieldleft@J@RedirectedRecttagMONITORrcMonitorReal@tagMONITOR@@QBEEABJ@Z @ 0x14FA99 (--9-$RedirectedFieldleft@J@RedirectedRecttagMONITORrcMonitorReal@tagMONITOR@@QBEEABJ@Z.c)
 *     ??9?$RedirectedFieldtop@J@RedirectedRecttagMONITORrcMonitorReal@tagMONITOR@@QBEEABJ@Z @ 0x14FAB0 (--9-$RedirectedFieldtop@J@RedirectedRecttagMONITORrcMonitorReal@tagMONITOR@@QBEEABJ@Z.c)
 */

int __thiscall IsChildWindowDpiBoundary(_DWORD *this)
{
  int v2; // ebx
  unsigned __int16 WindowCoordinateSpaceDpi; // si
  int v4; // ecx
  INT *MonitorRectForDpiContext; // eax
  struct tagWND *v7; // [esp+0h] [ebp-38h]
  struct tagWND *v8; // [esp+0h] [ebp-38h]
  struct tagWND *v9; // [esp+0h] [ebp-38h]
  INT v10[5]; // [esp+10h] [ebp-28h] BYREF
  INT v11; // [esp+24h] [ebp-14h] BYREF
  _DWORD v12[4]; // [esp+28h] [ebp-10h] BYREF

  v2 = 0;
  if ( IsChildWindowCoordinateSpaceBoundary(v7) )
  {
    WindowCoordinateSpaceDpi = GetWindowCoordinateSpaceDpi(v8);
    if ( WindowCoordinateSpaceDpi != GetWindowCoordinateSpaceDpi(v9) )
      return 1;
    v4 = ValidateHmonitorNoRip(*(_DWORD *)(this[5] + 164));
    v12[3] = v4;
    if ( v4 )
    {
      MonitorRectForDpiContext = GetMonitorRectForDpiContext(v4, *(_DWORD *)(this[5] + 184), v10);
      v11 = *MonitorRectForDpiContext;
      v12[0] = MonitorRectForDpiContext[1];
      v12[1] = MonitorRectForDpiContext[2];
      v12[2] = MonitorRectForDpiContext[3];
      if ( (unsigned __int8)tagMONITOR::RedirectedRecttagMONITORrcMonitorReal::RedirectedFieldleft<long>::operator!=(&v11)
        || (unsigned __int8)tagMONITOR::RedirectedRecttagMONITORrcMonitorReal::RedirectedFieldtop<long>::operator!=(v12) )
      {
        return 1;
      }
    }
  }
  return v2;
}
