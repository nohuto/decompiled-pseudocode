/*
 * XREFs of ChangeComposableCursor @ 0x1C01D3BE8
 * Callers:
 *     xxxDwmStopRedirection @ 0x1C0081030 (xxxDwmStopRedirection.c)
 *     xxxFreeWindow @ 0x1C00D094C (xxxFreeWindow.c)
 *     MagContextThreadCallout @ 0x1C01CC340 (MagContextThreadCallout.c)
 *     MagSetLensContextInformation @ 0x1C01CCDE4 (MagSetLensContextInformation.c)
 *     NtUserEnableSoftwareCursorForScreenCapture @ 0x1C01F83E0 (NtUserEnableSoftwareCursorForScreenCapture.c)
 *     ?EnableDwmSwCursorMoveSize@@YAXPEAH@Z @ 0x1C020A9B4 (-EnableDwmSwCursorMoveSize@@YAXPEAH@Z.c)
 *     xxxCancelTrackingForThread @ 0x1C0210FC0 (xxxCancelTrackingForThread.c)
 *     xxxMoveSize @ 0x1C0212444 (xxxMoveSize.c)
 * Callees:
 *     SetPointer @ 0x1C002B0A0 (SetPointer.c)
 */

__int64 __fastcall ChangeComposableCursor(__int64 a1)
{
  __int64 result; // rax
  int v2; // ebx

  result = (unsigned int)gSoftwareCursorCount;
  v2 = gSoftwareCursorCount + ((_DWORD)a1 != 0 ? 1 : -1);
  if ( gSoftwareCursorCount )
  {
    if ( gSoftwareCursorCount == 1 && !(_DWORD)a1 )
    {
      SetPointer(a1);
      HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) = 0;
      goto LABEL_7;
    }
  }
  else if ( (_DWORD)a1 )
  {
    SetPointer(0LL);
    HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) = 1;
LABEL_7:
    result = SetPointer(1LL);
  }
  gSoftwareCursorCount = v2;
  return result;
}
