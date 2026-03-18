/*
 * XREFs of _RemoteShadowCleanup@8 @ 0x187B8D
 * Callers:
 *     _NtUserCallTwoParam@12 @ 0x7FA30 (_NtUserCallTwoParam@12.c)
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     ?SetPointerInternal@@YGX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0xB1576 (-SetPointerInternal@@YGX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 *     _RemoteRedrawScreen@4 @ 0xD2434 (_RemoteRedrawScreen@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _GetRemoteHDEV@8 @ 0x187A5E (_GetRemoteHDEV@8.c)
 *     _bDrvShadowDisconnect@12 @ 0x2267EF (_bDrvShadowDisconnect@12.c)
 */

int __stdcall RemoteShadowCleanup(volatile void *Address, SIZE_T Length)
{
  int RemoteContext; // ebx
  void *v4; // eax
  void *v5; // esi

  RemoteContext = GreGetRemoteContext();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(9, 24, &WPP_ce4686b973ab32e3a2c7742364a6f9c9_Traceguids);
  if ( PsGetCurrentProcess() != _gpepCSRSS )
    return -1073741790;
  ProbeForRead(Address, Length, 1u);
  v4 = (void *)Win32AllocPoolWithQuota(Length, 1769435989);
  v5 = v4;
  if ( !v4 )
    ExRaiseStatus(-1073741801);
  memcpy(v4, (const void *)Address, Length);
  if ( !_gfRemotingConsole )
    GetRemoteHDEV(_gProtocolType, *(_DWORD *)(RemoteContext + 24));
  bDrvShadowDisconnect(Length);
  Win32FreePool(v5);
  if ( gnShadowers && (--gnShadowers, gnShadowers) || _gbConnected )
    RemoteRedrawScreen();
  SetPointerInternal(1, 6);
  if ( !gnShadowers )
    *(_DWORD *)(_gpsi + 1836) &= ~2u;
  return 0;
}
