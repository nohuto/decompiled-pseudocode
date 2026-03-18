/*
 * XREFs of ?zzzInternalSetCursorPos@@YGXHHKW4_SetCursorPosReason@@@Z @ 0x7B8F8
 * Callers:
 *     _xxxMakeWindowForegroundWithState@8 @ 0x1A5E4 (_xxxMakeWindowForegroundWithState@8.c)
 *     ?zzzSetCursorPos@@YG_NHH@Z @ 0x7C9A8 (-zzzSetCursorPos@@YG_NHH@Z.c)
 *     _zzzResetSharedDesktops@12 @ 0x9B7CA (_zzzResetSharedDesktops@12.c)
 *     _zzzEnableDwmPointerSupport@8 @ 0xB0B78 (_zzzEnableDwmPointerSupport@8.c)
 *     _xxxUserResetDisplayDevice@0 @ 0xD38BE (_xxxUserResetDisplayDevice@0.c)
 *     _EditionInternalSetCursorPos@12 @ 0xF0112 (_EditionInternalSetCursorPos@12.c)
 *     _zzzActiveCursorTracking@4 @ 0x14ED7B (_zzzActiveCursorTracking@4.c)
 *     _xxxCallJournalPlaybackHook@4 @ 0x1527A2 (_xxxCallJournalPlaybackHook@4.c)
 *     ?xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z @ 0x174748 (-xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z.c)
 *     _xxxInitializeMoveSizeData@20 @ 0x176FCC (_xxxInitializeMoveSizeData@20.c)
 * Callees:
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     ?UpdateGlobalCursorSize@CCursorSizes@@QAEXPBUtagPOINT@@_N@Z @ 0x7B9CE (-UpdateGlobalCursorSize@CCursorSizes@@QAEXPBUtagPOINT@@_N@Z.c)
 *     _GreMovePointer@16 @ 0x7BA8A (_GreMovePointer@16.c)
 *     _IsCurrentDesktopComposed@0 @ 0x7C988 (_IsCurrentDesktopComposed@0.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __fastcall zzzInternalSetCursorPos(struct tagPOINT *a1, LONG a2, int a3, char a4)
{
  struct tagPOINT *v4; // esi
  int CurrentThreadDpiAwarenessContext; // eax
  struct tagPOINT *v7; // [esp+8h] [ebp-8h] BYREF
  LONG v8; // [esp+Ch] [ebp-4h]

  v4 = a1;
  v7 = a1;
  v8 = a2;
  if ( a3 == 1 && IsCurrentDesktopComposed() )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    LogicalToPhysicalDPIPoint(&v7, &v7, CurrentThreadDpiAwarenessContext, 0);
    v4 = v7;
  }
  _gptCursorAsync = v4;
  _gptCursorAsync->y = v8;
  CCursorClip::BoundPoint(_gpCursorClip, _gptCursorAsync, _gptCursorAsync->y, 0, 1, _gptCursorAsync);
  *(_DWORD *)(_gpsi + 4428) = _gptCursorAsync;
  *(struct tagPOINT **)(_gpsi + 4432) = (struct tagPOINT *)_gptCursorAsync->y;
  GreMovePointer(*(_DWORD *)(_gpDispInfo + 20), *(_DWORD *)(_gpsi + 4428), *(_DWORD *)(_gpsi + 4432), 1);
  CCursorSizes::UpdateGlobalCursorSize(gpCursorSizes, _gptCursorAsync, 0);
  return GenerateMouseMove(2 * (a4 & 1) + 1);
}
