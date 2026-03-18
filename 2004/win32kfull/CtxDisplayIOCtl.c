/*
 * XREFs of CtxDisplayIOCtl @ 0x1C0226C44
 * Callers:
 *     NtUserCtxDisplayIOCtl @ 0x1C01F83F0 (NtUserCtxDisplayIOCtl.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00B1838 (WPP_RECORDER_SF_.c)
 *     RemoteRedrawRectangle @ 0x1C021EFCC (RemoteRedrawRectangle.c)
 *     GetRemoteHDEV @ 0x1C0226D08 (GetRemoteHDEV.c)
 *     bDrvDisplayIOCtl @ 0x1C02C04E8 (bDrvDisplayIOCtl.c)
 */

__int64 __fastcall CtxDisplayIOCtl(char a1, __int64 a2, unsigned int a3)
{
  int v6; // edx
  int v7; // ecx
  __int64 RemoteContext; // rdi
  __int64 RemoteHDEV; // rax

  RemoteContext = GreGetRemoteContext();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_(v7, v6, 9, 27, (__int64)&WPP_0f27963f307c3266edb1c5990ca93414_Traceguids);
  }
  if ( gfRemotingConsole )
    RemoteHDEV = gConsoleShadowhDev;
  else
    RemoteHDEV = GetRemoteHDEV(gProtocolType, *(_QWORD *)(RemoteContext + 40));
  if ( !(unsigned int)bDrvDisplayIOCtl(RemoteHDEV, a2, a3) )
    return 3221880856LL;
  if ( (a1 & 1) != 0 )
    RemoteRedrawRectangle(0LL);
  return 0LL;
}
