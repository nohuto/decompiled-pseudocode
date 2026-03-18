/*
 * XREFs of _CtxDisplayIOCtl@12 @ 0x1879E1
 * Callers:
 *     _NtUserCtxDisplayIOCtl@12 @ 0x1609A0 (_NtUserCtxDisplayIOCtl@12.c)
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     _RemoteRedrawRectangle@4 @ 0x1814F1 (_RemoteRedrawRectangle@4.c)
 *     _GetRemoteHDEV@8 @ 0x187A5E (_GetRemoteHDEV@8.c)
 *     _bDrvDisplayIOCtl@12 @ 0x2264B0 (_bDrvDisplayIOCtl@12.c)
 */

int __fastcall CtxDisplayIOCtl(char a1, int a2, int a3)
{
  int v4; // ecx
  int RemoteContext; // edi

  RemoteContext = GreGetRemoteContext();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(9, 27, &WPP_ce4686b973ab32e3a2c7742364a6f9c9_Traceguids);
  if ( !_gfRemotingConsole )
  {
    LOWORD(v4) = _gProtocolType;
    GetRemoteHDEV(v4, *(_DWORD *)(RemoteContext + 24));
  }
  if ( !bDrvDisplayIOCtl(a3) )
    return -1073086440;
  if ( (a1 & 1) != 0 )
    RemoteRedrawRectangle(0);
  return 0;
}
