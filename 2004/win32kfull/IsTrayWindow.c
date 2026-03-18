/*
 * XREFs of IsTrayWindow @ 0x1C009D060
 * Callers:
 *     SetVisible @ 0x1C0020760 (SetVisible.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C002C0BC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C00328D0 (-xxxUpdateTray@@YAXPEAUtagWND@@@Z.c)
 *     xxxRedrawTitle @ 0x1C0033990 (xxxRedrawTitle.c)
 *     xxxMinMaximizeEx @ 0x1C005A998 (xxxMinMaximizeEx.c)
 *     ParkIcon @ 0x1C005B578 (ParkIcon.c)
 *     xxxSetSysMenu @ 0x1C005C610 (xxxSetSysMenu.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0068320 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxNotifyMonitorChanged @ 0x1C006B018 (xxxNotifyMonitorChanged.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C006FA2C (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxDestroyWindow @ 0x1C008A700 (xxxDestroyWindow.c)
 *     xxxSetWindowStyle @ 0x1C009C710 (xxxSetWindowStyle.c)
 *     _anonymous_namespace_::EligibleWindow @ 0x1C00AEC34 (_anonymous_namespace_--EligibleWindow.c)
 *     xxxFlashWindow @ 0x1C0113948 (xxxFlashWindow.c)
 *     NtUserGetWindowMinimizeRect @ 0x1C011A7A0 (NtUserGetWindowMinimizeRect.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C011B4E4 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     xxxArrangeIconicWindows @ 0x1C01505E0 (xxxArrangeIconicWindows.c)
 *     xxxRedrawFrameAndHook @ 0x1C0153940 (xxxRedrawFrameAndHook.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0236D04 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 * Callees:
 *     Is31TrayWindow @ 0x1C023E8F0 (Is31TrayWindow.c)
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
    || ((*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x800) == 0
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
    return Is31TrayWindow(a1, v6);
  v9 = v6[30];
  if ( (v9 & 0xA) != 0 && ((v9 & 0xC0) != 0 || (v6[31] & 0x20) != 0) )
    return Is31TrayWindow(a1, v6);
  else
    return 0LL;
}
