/*
 * XREFs of _ChangeComposableCursor@4 @ 0x143332
 * Callers:
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     _xxxDwmStopRedirection@4 @ 0xCEE26 (_xxxDwmStopRedirection@4.c)
 *     _MagContextThreadCallout@16 @ 0x13C87A (_MagContextThreadCallout@16.c)
 *     _MagSetLensContextInformation@28 @ 0x13D036 (_MagSetLensContextInformation@28.c)
 *     _NtUserEnableSoftwareCursorForScreenCapture@4 @ 0x1614BE (_NtUserEnableSoftwareCursorForScreenCapture@4.c)
 *     _xxxCancelTrackingForThread@4 @ 0x17668C (_xxxCancelTrackingForThread@4.c)
 *     _xxxMoveSize@12 @ 0x177959 (_xxxMoveSize@12.c)
 * Callees:
 *     ?SetPointerInternal@@YGX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0xB1576 (-SetPointerInternal@@YGX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 */

char __thiscall ChangeComposableCursor(void *this)
{
  char result; // al
  int v2; // ebx

  result = gSoftwareCursorCount;
  v2 = gSoftwareCursorCount + 2 * (this != 0) - 1;
  if ( gSoftwareCursorCount )
  {
    if ( gSoftwareCursorCount == 1 && !this )
    {
      SetPointerInternal(0, 6);
      gbForceSoftwareCursor = 0;
      goto LABEL_7;
    }
  }
  else if ( this )
  {
    SetPointerInternal(0, 6);
    gbForceSoftwareCursor = 1;
LABEL_7:
    result = SetPointerInternal(1, 6);
  }
  gSoftwareCursorCount = v2;
  return result;
}
