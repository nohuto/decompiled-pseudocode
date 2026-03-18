/*
 * XREFs of RemoteShadowCleanup @ 0x1C0226EE0
 * Callers:
 *     <none>
 * Callees:
 *     SetPointer @ 0x1C004D9F0 (SetPointer.c)
 *     WPP_RECORDER_SF_ @ 0x1C00B1838 (WPP_RECORDER_SF_.c)
 *     RemoteRedrawScreen @ 0x1C01551C4 (RemoteRedrawScreen.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     GetRemoteHDEV @ 0x1C0226D08 (GetRemoteHDEV.c)
 *     bDrvShadowDisconnect @ 0x1C02C0A90 (bDrvShadowDisconnect.c)
 */

__int64 __fastcall RemoteShadowCleanup(void *Src, size_t Size)
{
  SIZE_T v2; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 RemoteContext; // r15
  void *v9; // rax
  void *v10; // rbx
  __int64 RemoteHDEV; // rax
  int v12; // ecx
  int v13; // eax

  v2 = (unsigned int)Size;
  RemoteContext = GreGetRemoteContext();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_(v5, v4, 9, 24, (__int64)&WPP_0f27963f307c3266edb1c5990ca93414_Traceguids);
  }
  if ( PsGetCurrentProcess(v5, v4, v6) != gpepCSRSS )
    return 3221225506LL;
  ProbeForRead(Src, v2, 1u);
  v9 = (void *)Win32AllocPoolWithQuota(v2, 1769435989LL);
  v10 = v9;
  if ( !v9 )
    ExRaiseStatus(-1073741801);
  memmove(v9, Src, v2);
  if ( gfRemotingConsole )
    RemoteHDEV = gConsoleShadowhDev;
  else
    RemoteHDEV = GetRemoteHDEV(gProtocolType, *(_QWORD *)(RemoteContext + 40));
  bDrvShadowDisconnect(RemoteHDEV, v10, (unsigned int)v2);
  Win32FreePool(v10);
  v13 = gnShadowers;
  if ( gnShadowers && (--gnShadowers, v13 != 1) || gbConnected )
    RemoteRedrawScreen(v12);
  SetPointer(1LL);
  if ( !gnShadowers )
    *(_DWORD *)(gpsi + 2236LL) &= ~2u;
  return 0LL;
}
