/*
 * XREFs of KdpSysCheckLowMemory @ 0x1409B9E48
 * Callers:
 *     KdSystemDebugControl @ 0x1408B9CC0 (KdSystemDebugControl.c)
 * Callees:
 *     KdpSearchPhysicalPageRange @ 0x1409B9450 (KdpSearchPhysicalPageRange.c)
 */

__int64 __fastcall KdpSysCheckLowMemory(int a1)
{
  if ( KdpSearchInProgress )
    KdpSearchPhysicalPageRange(a1);
  return 0LL;
}
