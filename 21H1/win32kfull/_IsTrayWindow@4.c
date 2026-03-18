/*
 * XREFs of _IsTrayWindow@4 @ 0x40204
 * Callers:
 *     _xxxRedrawTitle@8 @ 0x17084 (_xxxRedrawTitle@8.c)
 *     ?xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x19168 (-xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroun.c)
 *     ?xxxUpdateTray@@YGXPAUtagWND@@@Z @ 0x19ED6 (-xxxUpdateTray@@YGXPAUtagWND@@@Z.c)
 *     _SetVisible@8 @ 0x1C9DC (_SetVisible@8.c)
 *     _xxxNotifyMonitorChanged@16 @ 0x26F18 (_xxxNotifyMonitorChanged@16.c)
 *     ?zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z @ 0x2B94A (-zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z.c)
 *     ?xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z @ 0x3C78A (-xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z.c)
 *     _xxxSetWindowStyle@12 @ 0x3FA70 (_xxxSetWindowStyle@12.c)
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 *     _NtUserGetWindowMinimizeRect@8 @ 0xA7B36 (_NtUserGetWindowMinimizeRect@8.c)
 *     _xxxMinMaximizeEx@24 @ 0xB3AD2 (_xxxMinMaximizeEx@24.c)
 *     _ParkIcon@8 @ 0xB4C44 (_ParkIcon@8.c)
 *     _xxxSetSysMenu@4 @ 0xB9E58 (_xxxSetSysMenu@4.c)
 *     _xxxFlashWindow@12 @ 0xCA4EE (_xxxFlashWindow@12.c)
 *     _anonymous_namespace_::EligibleWindow @ 0xF4E24 (_anonymous_namespace_--EligibleWindow.c)
 *     ?xxxMNPositionHierarchy@@YGIABV?$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagITEM@@HHPAH2PAPAUtagMONITOR@@@Z @ 0x196F8F (-xxxMNPositionHierarchy@@YGIABV-$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagITEM@@HHPAH2PAPAUtagMON.c)
 *     _xxxRedrawFrameAndHook@4 @ 0x1A13C6 (_xxxRedrawFrameAndHook@4.c)
 *     ?xxxHandleOwnerSwitch@@YGXPAUtagWND@@00@Z @ 0x1A5A84 (-xxxHandleOwnerSwitch@@YGXPAUtagWND@@00@Z.c)
 *     _xxxArrangeIconicWindows@4 @ 0x1AEB2A (_xxxArrangeIconicWindows@4.c)
 * Callees:
 *     <none>
 */

int __thiscall IsTrayWindow(_DWORD *this)
{
  int v2; // esi
  int v3; // ecx
  int v4; // eax
  int v5; // esi
  _BYTE *v6; // ecx
  int v8; // eax
  char v9; // al

  if ( !this )
    return 0;
  v2 = this[3];
  if ( !v2 )
    return 0;
  if ( (*(_BYTE *)(_gpsi + 1720) & 8) == 0 )
    return 0;
  v3 = 0;
  if ( ((*(_DWORD *)(_gptiCurrent + 372) | *(_DWORD *)(**(_DWORD **)(_gptiCurrent + 252) + 8)) & 0x800) == 0
    && !*(_DWORD *)(*(_DWORD *)(v2 + 4) + 96) )
  {
    return 0;
  }
  v4 = this[14];
  if ( !v4 )
    return 0;
  v5 = *(_DWORD *)(v2 + 4);
  if ( v5 )
    v3 = *(_DWORD *)(v5 + 12);
  if ( v4 != v3 )
    return 0;
  v6 = (_BYTE *)this[5];
  if ( (v6[18] & 4) != 0 )
    return 1;
  if ( (char)v6[16] < 0 || (v6[19] & 8) != 0 )
    return 0;
  if ( (v6[13] & 2) != 0 )
  {
    v8 = this[16];
    if ( !v8 )
      return 1;
    if ( (*(_BYTE *)(*(_DWORD *)(v8 + 20) + 13) & 2) != 0 )
      return 0;
  }
  if ( (v6[12] & 0x40) != 0 )
    return Is31TrayWindow(this);
  v9 = v6[22];
  if ( (v9 & 0xA) != 0 && ((v9 & 0xC0) != 0 || (v6[23] & 0x20) != 0) )
    return Is31TrayWindow(this);
  else
    return 0;
}
