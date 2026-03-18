/*
 * XREFs of ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C00C0948
 * Callers:
 *     zzzEnableDwmPointerSupport @ 0x1C002AEDC (zzzEnableDwmPointerSupport.c)
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x1C002E0F8 (-zzzSetCursorPos@@YA_NHH@Z.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C00BCC58 (xxxMakeWindowForegroundWithState.c)
 *     zzzResetSharedDesktops @ 0x1C00F9280 (zzzResetSharedDesktops.c)
 *     EditionInternalSetCursorPos @ 0x1C012D750 (EditionInternalSetCursorPos.c)
 *     xxxUserResetDisplayDevice @ 0x1C01583D0 (xxxUserResetDisplayDevice.c)
 *     zzzActiveCursorTracking @ 0x1C01E2428 (zzzActiveCursorTracking.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01E61E4 (xxxCallJournalPlaybackHook.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020EAF8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxInitializeMoveSizeData @ 0x1C02119DC (xxxInitializeMoveSizeData.c)
 * Callees:
 *     IsCurrentDesktopComposed @ 0x1C0013E30 (IsCurrentDesktopComposed.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C10 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C00C0A48 (-UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     GreMovePointer @ 0x1C00C4410 (GreMovePointer.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzInternalSetCursorPos(unsigned int a1, unsigned int a2, int a3, char a4)
{
  int v4; // ebx
  __int64 v5; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  _QWORD v8[3]; // [rsp+30h] [rbp-18h] BYREF

  v8[0] = __PAIR64__(a2, a1);
  v4 = a4 & 1;
  if ( a3 == 1 && (unsigned int)IsCurrentDesktopComposed() )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v5);
    LogicalToPhysicalDPIPoint(v8, v8, CurrentThreadDpiAwarenessContext, 0LL);
  }
  gptCursorAsync = (struct tagPOINT *const)v8[0];
  CCursorClip::BoundPoint(gpCursorClip, v8[0], 0LL, 1LL, gptCursorAsync);
  *(_QWORD *)(gpsi + 4960LL) = gptCursorAsync;
  GreMovePointer(*(HDEV *)(gpDispInfo + 40LL));
  CCursorSizes::UpdateGlobalCursorSize(gpCursorSizes, gptCursorAsync, 0);
  return GenerateMouseMove((unsigned int)(2 * v4 + 1));
}
