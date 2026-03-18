/*
 * XREFs of ?IsFmtBlocked@@YAHI@Z @ 0x1C021F7E8
 * Callers:
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C0037B6C (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x1C0059B50 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     ?CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z @ 0x1C005A29C (-CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z.c)
 *     NtUserIsClipboardFormatAvailable @ 0x1C005A3C0 (NtUserIsClipboardFormatAvailable.c)
 *     NtUserGetUpdatedClipboardFormats @ 0x1C01FCE20 (NtUserGetUpdatedClipboardFormats.c)
 *     _GetPriorityClipboardFormat @ 0x1C0220268 (_GetPriorityClipboardFormat.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsFmtBlocked(int a1)
{
  __int64 v1; // rdx

  v1 = 0LL;
  if ( !LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) )
    return 1LL;
  while ( a1 != *(_DWORD *)(gpClipFormatExceptionList + 4 * v1) )
  {
    v1 = (unsigned int)(v1 + 1);
    if ( (unsigned int)v1 >= LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) )
      return 1LL;
  }
  return 0LL;
}
