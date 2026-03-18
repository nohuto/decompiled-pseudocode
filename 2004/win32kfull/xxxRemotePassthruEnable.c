/*
 * XREFs of xxxRemotePassthruEnable @ 0x1C0227C00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00B1838 (WPP_RECORDER_SF_.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C011E450 (xxxRemoteStopScreenUpdates.c)
 *     GreDrvDisconnect @ 0x1C0155660 (GreDrvDisconnect.c)
 *     bDrvDisconnect @ 0x1C02C030C (bDrvDisconnect.c)
 */

__int64 xxxRemotePassthruEnable()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 RemoteContext; // rbx
  __int64 v3; // r8
  int v5; // ecx
  __int16 v6; // dx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  IoStatusBlock = 0LL;
  RemoteContext = GreGetRemoteContext();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v0) = 4;
    WPP_RECORDER_SF_(v1, v0, 9, 25, (__int64)&WPP_0f27963f307c3266edb1c5990ca93414_Traceguids);
  }
  if ( PsGetCurrentProcess(v1, v0, v3) != gpepCSRSS )
    return 3221225506LL;
  dword_1C0341A34 = gapulCvt_VK != gapulCvt_VK_84;
  ZwDeviceIoControlFile(ghRemoteKeyboardChannel, 0LL, 0LL, 0LL, &IoStatusBlock, 0x38080Fu, &dword_1C0341A34, 4u, 0LL, 0);
  v6 = guKbdTblSize;
  if ( guKbdTblSize )
    ZwDeviceIoControlFile(
      ghRemoteKeyboardChannel,
      0LL,
      0LL,
      0LL,
      &IoStatusBlock,
      0x380807u,
      ghKbdTblBase,
      guKbdTblSize,
      gpKbdTbl,
      0);
  xxxRemoteStopScreenUpdates(v5, v6);
  if ( gfRemotingConsole )
    bDrvDisconnect();
  else
    GreDrvDisconnect(RemoteContext);
  return 0LL;
}
