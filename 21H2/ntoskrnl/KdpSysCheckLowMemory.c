/*
 * XREFs of KdpSysCheckLowMemory @ 0x1409B8E48
 * Callers:
 *     KdSystemDebugControl @ 0x1408B9B60 (KdSystemDebugControl.c)
 * Callees:
 *     KdpSearchPhysicalPageRange @ 0x1409B8450 (KdpSearchPhysicalPageRange.c)
 */

__int64 __fastcall KdpSysCheckLowMemory(int a1)
{
  if ( KdpSearchInProgress )
    KdpSearchPhysicalPageRange(a1);
  return 0LL;
}
