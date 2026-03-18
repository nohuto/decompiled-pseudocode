/*
 * XREFs of _xxxRemotePassthruEnable@0 @ 0x188512
 * Callers:
 *     _NtUserCallHwndParamLockSafe@12 @ 0x189A0 (_NtUserCallHwndParamLockSafe@12.c)
 *     _NtUserCallNoParam@4 @ 0x6E940 (_NtUserCallNoParam@4.c)
 *     _NtUserCallHwndLockSafe@8 @ 0x92856 (_NtUserCallHwndLockSafe@8.c)
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     _xxxRemoteStopScreenUpdates@0 @ 0xD1646 (_xxxRemoteStopScreenUpdates@0.c)
 *     _GreDrvDisconnect@4 @ 0xD28A4 (_GreDrvDisconnect@4.c)
 *     _bDrvDisconnect@12 @ 0x2263A6 (_bDrvDisconnect@12.c)
 */

int __stdcall xxxRemotePassthruEnable()
{
  _DWORD *RemoteContext; // esi
  int v2; // ecx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [esp+8h] [ebp-8h] BYREF

  IoStatusBlock.Status = 0;
  IoStatusBlock.Information = 0;
  RemoteContext = (_DWORD *)GreGetRemoteContext();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(9, 25, &WPP_ce4686b973ab32e3a2c7742364a6f9c9_Traceguids);
  if ( PsGetCurrentProcess() != _gpepCSRSS )
    return -1073741790;
  dword_2785E0 = _gapulCvt_VK != _gapulCvt_VK_84;
  ZwDeviceIoControlFile(_ghRemoteKeyboardChannel, 0, 0, 0, &IoStatusBlock, 0x38080Fu, &dword_2785E0, 4u, 0, 0);
  if ( _guKbdTblSize )
    ZwDeviceIoControlFile(
      _ghRemoteKeyboardChannel,
      0,
      0,
      0,
      &IoStatusBlock,
      0x380807u,
      _ghKbdTblBase,
      _guKbdTblSize,
      _gpKbdTbl,
      0);
  xxxRemoteStopScreenUpdates();
  if ( _gfRemotingConsole )
    bDrvDisconnect(v2);
  else
    GreDrvDisconnect(RemoteContext);
  return 0;
}
