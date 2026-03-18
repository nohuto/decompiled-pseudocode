/*
 * XREFs of KdpSysCheckLowMemory @ 0x1409BBE48
 * Callers:
 *     KdSystemDebugControl @ 0x1408BC680 (KdSystemDebugControl.c)
 * Callees:
 *     KdpSearchPhysicalPageRange @ 0x1409BB450 (KdpSearchPhysicalPageRange.c)
 */

__int64 __fastcall KdpSysCheckLowMemory(int a1)
{
  if ( KdpSearchInProgress )
    KdpSearchPhysicalPageRange(a1);
  return 0LL;
}
