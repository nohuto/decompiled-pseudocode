/*
 * XREFs of _GetRemoteHDEV@8 @ 0x187A5E
 * Callers:
 *     _CtxDisplayIOCtl@12 @ 0x1879E1 (_CtxDisplayIOCtl@12.c)
 *     _RemotePassthruDisable@0 @ 0x187AD9 (_RemotePassthruDisable@0.c)
 *     _RemoteShadowCleanup@8 @ 0x187B8D (_RemoteShadowCleanup@8.c)
 *     _RemoteShadowStart@8 @ 0x187CE0 (_RemoteShadowStart@8.c)
 * Callees:
 *     _DrvFindRemoteDriverhdevInMDEV@12 @ 0x1D13E7 (_DrvFindRemoteDriverhdevInMDEV@12.c)
 */

int __fastcall GetRemoteHDEV(__int16 a1, int a2)
{
  if ( !a1 || a1 == -1 || *(_DWORD *)(*(_DWORD *)(_gpDispInfo + 8) + 12) == 1 )
    return *(_DWORD *)(_gpDispInfo + 20);
  else
    return DrvFindRemoteDriverhdevInMDEV(a2);
}
