/*
 * XREFs of ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C003B470
 * Callers:
 *     xxxMakeWindowForegroundWithState @ 0x1C0032AD4 (xxxMakeWindowForegroundWithState.c)
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x1C003B2AC (-zzzSetCursorPos@@YA_NHH@Z.c)
 *     zzzEnableDwmPointerSupport @ 0x1C004CCD0 (zzzEnableDwmPointerSupport.c)
 *     zzzResetSharedDesktops @ 0x1C00521B0 (zzzResetSharedDesktops.c)
 *     EditionInternalSetCursorPos @ 0x1C012B810 (EditionInternalSetCursorPos.c)
 *     xxxUserResetDisplayDevice @ 0x1C0155A70 (xxxUserResetDisplayDevice.c)
 *     zzzActiveCursorTracking @ 0x1C01E30E8 (zzzActiveCursorTracking.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01E6EA4 (xxxCallJournalPlaybackHook.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020F978 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxInitializeMoveSizeData @ 0x1C021285C (xxxInitializeMoveSizeData.c)
 * Callees:
 *     GreMovePointer @ 0x1C002B390 (GreMovePointer.c)
 *     ?UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C003B570 (-UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     IsCurrentDesktopComposed @ 0x1C003C800 (IsCurrentDesktopComposed.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0099F30 (W32GetCurrentThreadDpiAwarenessContext.c)
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
  GreMovePointer(*(HDEV *)(gpDispInfo + 40LL), *(_DWORD *)(gpsi + 4960LL), *(_DWORD *)(gpsi + 4964LL), 1);
  CCursorSizes::UpdateGlobalCursorSize(gpCursorSizes, gptCursorAsync, 0);
  return GenerateMouseMove((unsigned int)(2 * v4 + 1));
}
