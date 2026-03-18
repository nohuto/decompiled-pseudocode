/*
 * XREFs of ChangeComposableCursor @ 0x1C01D49F8
 * Callers:
 *     xxxDwmStopRedirection @ 0x1C000E180 (xxxDwmStopRedirection.c)
 *     xxxFreeWindow @ 0x1C008B600 (xxxFreeWindow.c)
 *     MagContextThreadCallout @ 0x1C01CD150 (MagContextThreadCallout.c)
 *     MagSetLensContextInformation @ 0x1C01CDBF4 (MagSetLensContextInformation.c)
 *     NtUserEnableSoftwareCursorForScreenCapture @ 0x1C01F9250 (NtUserEnableSoftwareCursorForScreenCapture.c)
 *     ?EnableDwmSwCursorMoveSize@@YAXPEAH@Z @ 0x1C020B834 (-EnableDwmSwCursorMoveSize@@YAXPEAH@Z.c)
 *     xxxCancelTrackingForThread @ 0x1C0211E40 (xxxCancelTrackingForThread.c)
 *     xxxMoveSize @ 0x1C02132C4 (xxxMoveSize.c)
 * Callees:
 *     SetPointer @ 0x1C004D9F0 (SetPointer.c)
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
      HIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory) = 0;
      goto LABEL_7;
    }
  }
  else if ( (_DWORD)a1 )
  {
    SetPointer(0LL);
    HIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory) = 1;
LABEL_7:
    result = SetPointer(1LL);
  }
  gSoftwareCursorCount = v2;
  return result;
}
