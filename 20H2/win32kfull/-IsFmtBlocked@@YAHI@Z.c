/*
 * XREFs of ?IsFmtBlocked@@YAHI@Z @ 0x1C021E958
 * Callers:
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x1C00161A0 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     ?CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z @ 0x1C00168EC (-CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z.c)
 *     NtUserIsClipboardFormatAvailable @ 0x1C0016A10 (NtUserIsClipboardFormatAvailable.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C001A5DC (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     NtUserGetUpdatedClipboardFormats @ 0x1C01FBFB0 (NtUserGetUpdatedClipboardFormats.c)
 *     _GetPriorityClipboardFormat @ 0x1C021F3D8 (_GetPriorityClipboardFormat.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsFmtBlocked(int a1)
{
  __int64 v1; // rdx

  v1 = 0LL;
  if ( !HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) )
    return 1LL;
  while ( a1 != *(_DWORD *)(gpClipFormatExceptionList + 4 * v1) )
  {
    v1 = (unsigned int)(v1 + 1);
    if ( (unsigned int)v1 >= HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) )
      return 1LL;
  }
  return 0LL;
}
