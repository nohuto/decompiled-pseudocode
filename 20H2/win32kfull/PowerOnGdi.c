/*
 * XREFs of PowerOnGdi @ 0x1C0158290
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C011F7E0 (xxxRemoteDisconnect.c)
 * Callees:
 *     TransitionCursorSuppressionState @ 0x1C002A050 (TransitionCursorSuppressionState.c)
 *     _GetDesktopWindow @ 0x1C0046F20 (_GetDesktopWindow.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C00BCC58 (xxxMakeWindowForegroundWithState.c)
 *     ProcessDelayedSdc @ 0x1C0158390 (ProcessDelayedSdc.c)
 *     xxxUserResetDisplayDevice @ 0x1C01583D0 (xxxUserResetDisplayDevice.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall PowerOnGdi(__int64 a1, int a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( !(unsigned int)DrvQueryMDEVPowerState(*(_QWORD *)(gpDispInfo + 16LL)) )
  {
    DrvDxgkLogCodePointPacket(11LL, gbFullScreen == 1, gulDelayedSwitchAction);
    EtwTracePowerOnGdiBegin(a3);
    gbGDIOn = 1;
    SafeEnableMDEV(2LL);
    if ( gbFullScreen == 1 && gspwndFullScreen )
    {
      v9[0] = &gspwndFullScreen;
      v9[1] = GetDesktopWindow((__int64)gspwndFullScreen);
      HMAssignmentLock(v9);
      gbFullScreen = 2;
      xxxMakeWindowForegroundWithState(0LL, 1u);
    }
    DrvSetMDEVPowerState(*(_QWORD *)(gpDispInfo + 16LL), 1LL);
    xxxUserResetDisplayDevice(v7, v6);
    if ( a2 )
      ProcessDelayedSdc(a1);
  }
  TransitionCursorSuppressionState(2u, 0);
  return EtwTracePowerOnGdiEnd(a3);
}
