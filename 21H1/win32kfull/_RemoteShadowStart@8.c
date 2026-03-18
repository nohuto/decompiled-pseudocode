/*
 * XREFs of _RemoteShadowStart@8 @ 0x187CE0
 * Callers:
 *     _NtUserCallHwndParamLock@12 @ 0x134DE (_NtUserCallHwndParamLock@12.c)
 *     _NtUserCallHwndParamLockSafe@12 @ 0x189A0 (_NtUserCallHwndParamLockSafe@12.c)
 *     _NtUserCallNoParam@4 @ 0x6E940 (_NtUserCallNoParam@4.c)
 *     _NtUserCallHwndLock@8 @ 0x7D35A (_NtUserCallHwndLock@8.c)
 *     _NtUserCallTwoParam@12 @ 0x7FA30 (_NtUserCallTwoParam@12.c)
 *     _NtUserCallHwnd@8 @ 0x80A3A (_NtUserCallHwnd@8.c)
 *     _NtUserCallHwndLockSafe@8 @ 0x92856 (_NtUserCallHwndLockSafe@8.c)
 *     _NtUserCallHwndSafe@8 @ 0x99D78 (_NtUserCallHwndSafe@8.c)
 *     _NtUserCallHwndParam@12 @ 0xA7482 (_NtUserCallHwndParam@12.c)
 *     _EngTransparentBlt@32 @ 0xCAC46 (_EngTransparentBlt@32.c)
 *     _NtUserCallHwndOpt@8 @ 0xE81A0 (_NtUserCallHwndOpt@8.c)
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     ?SetPointerInternal@@YGX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0xB1576 (-SetPointerInternal@@YGX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 *     _RemoteRedrawScreen@4 @ 0xD2434 (_RemoteRedrawScreen@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _GetRemoteHDEV@8 @ 0x187A5E (_GetRemoteHDEV@8.c)
 *     _bDrvShadowConnect@12 @ 0x2266CF (_bDrvShadowConnect@12.c)
 */

int __stdcall RemoteShadowStart(volatile void *Address, SIZE_T Length)
{
  int RemoteContext; // ebx
  void *v4; // eax
  void *v5; // edi
  int v6; // esi

  RemoteContext = GreGetRemoteContext();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(9, 22, &WPP_ce4686b973ab32e3a2c7742364a6f9c9_Traceguids);
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
  v6 = bDrvShadowConnect(Length);
  Win32FreePool(v5);
  if ( !v6 )
    return -1073086440;
  RemoteRedrawScreen();
  SetPointerInternal(1, 6);
  *(_DWORD *)(_gpsi + 1836) |= 2u;
  return 0;
}
