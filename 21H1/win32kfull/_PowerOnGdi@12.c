/*
 * XREFs of _PowerOnGdi@12 @ 0xD37F0
 * Callers:
 *     _xxxRemoteDisconnect@0 @ 0xD123C (_xxxRemoteDisconnect@0.c)
 * Callees:
 *     _xxxMakeWindowForegroundWithState@8 @ 0x1A5E4 (_xxxMakeWindowForegroundWithState@8.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     _TransitionCursorSuppressionState@8 @ 0xB0178 (_TransitionCursorSuppressionState@8.c)
 *     _ProcessDelayedSdc@4 @ 0xD3896 (_ProcessDelayedSdc@4.c)
 *     _xxxUserResetDisplayDevice@0 @ 0xD38BE (_xxxUserResetDisplayDevice@0.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall PowerOnGdi(int a1, int a2, int a3)
{
  int v3; // ecx
  int v5; // edx
  int v6; // ecx

  if ( !DrvQueryMDEVPowerState(*(_DWORD *)(_gpDispInfo + 8)) )
  {
    DrvDxgkLogCodePointPacket(11, _gbFullScreen == 1, _gulDelayedSwitchAction, 0);
    EtwTracePowerOnGdiBegin(a3);
    _gbGDIOn = 1;
    SafeEnableMDEV(2);
    if ( _gbFullScreen == 1 && gspwndFullScreen )
    {
      _GetDesktopWindow((_DWORD *)gspwndFullScreen);
      HMAssignmentLock(v6, v5);
      _gbFullScreen = 2;
      xxxMakeWindowForegroundWithState(0, 1);
    }
    DrvSetMDEVPowerState(*(_DWORD *)(_gpDispInfo + 8), 1);
    xxxUserResetDisplayDevice();
    if ( a2 )
      ProcessDelayedSdc(a1);
  }
  TransitionCursorSuppressionState(v3, 2, 0);
  return EtwTracePowerOnGdiEnd(a3);
}
