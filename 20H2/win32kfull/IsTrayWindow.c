/*
 * XREFs of IsTrayWindow @ 0x1C0058D40
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C0017D5C (xxxMinMaximizeEx.c)
 *     ParkIcon @ 0x1C001893C (ParkIcon.c)
 *     xxxFlashWindow @ 0x1C0019218 (xxxFlashWindow.c)
 *     xxxSetSysMenu @ 0x1C0034410 (xxxSetSysMenu.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C00388C0 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C004596C (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxNotifyMonitorChanged @ 0x1C004A38C (xxxNotifyMonitorChanged.c)
 *     xxxSetWindowStyle @ 0x1C00583F0 (xxxSetWindowStyle.c)
 *     SetVisible @ 0x1C00925D0 (SetVisible.c)
 *     _anonymous_namespace_::EligibleWindow @ 0x1C0094D18 (_anonymous_namespace_--EligibleWindow.c)
 *     ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C00BCA54 (-xxxUpdateTray@@YAXPEAUtagWND@@@Z.c)
 *     xxxRedrawTitle @ 0x1C00BF060 (xxxRedrawTitle.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00CA04C (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxDestroyWindow @ 0x1C00CEED0 (xxxDestroyWindow.c)
 *     NtUserGetWindowMinimizeRect @ 0x1C011B570 (NtUserGetWindowMinimizeRect.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C011BED4 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     xxxArrangeIconicWindows @ 0x1C0152DE0 (xxxArrangeIconicWindows.c)
 *     xxxRedrawFrameAndHook @ 0x1C0156270 (xxxRedrawFrameAndHook.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0235E74 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 * Callees:
 *     Is31TrayWindow @ 0x1C023D650 (Is31TrayWindow.c)
 */

__int64 __fastcall IsTrayWindow(_QWORD *a1)
{
  __int64 v2; // r9
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  _BYTE *v6; // rdx
  __int64 v8; // rax
  char v9; // al

  if ( !a1 )
    return 0LL;
  v2 = a1[3];
  if ( !v2
    || (*(_DWORD *)(gpsi + 2120LL) & 8) == 0
    || ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) == 0
    && !*(_QWORD *)(*(_QWORD *)(v2 + 8) + 192LL) )
  {
    return 0LL;
  }
  v3 = a1[13];
  if ( !v3 )
    return 0LL;
  v4 = *(_QWORD *)(v2 + 8);
  v5 = 0LL;
  if ( v4 )
    v5 = *(_QWORD *)(v4 + 24);
  if ( v3 != v5 )
    return 0LL;
  v6 = (_BYTE *)a1[5];
  if ( (v6[26] & 4) != 0 )
    return 1LL;
  if ( (char)v6[24] < 0 || (v6[27] & 8) != 0 )
    return 0LL;
  if ( (v6[21] & 2) != 0 )
  {
    v8 = a1[15];
    if ( !v8 )
      return 1LL;
    if ( (*(_BYTE *)(*(_QWORD *)(v8 + 40) + 21LL) & 2) != 0 )
      return 0LL;
  }
  if ( (v6[20] & 0x40) != 0 )
    return Is31TrayWindow(a1);
  v9 = v6[30];
  if ( (v9 & 0xA) != 0 && ((v9 & 0xC0) != 0 || (v6[31] & 0x20) != 0) )
    return Is31TrayWindow(a1);
  else
    return 0LL;
}
