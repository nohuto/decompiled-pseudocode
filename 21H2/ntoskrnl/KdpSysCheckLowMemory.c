/*
 * XREFs of KdpSysCheckLowMemory @ 0x140A73C60
 * Callers:
 *     KdSystemDebugControl @ 0x14095F510 (KdSystemDebugControl.c)
 * Callees:
 *     KdpSearchPhysicalPageRange @ 0x140A73A64 (KdpSearchPhysicalPageRange.c)
 */

__int64 __fastcall KdpSysCheckLowMemory(int a1)
{
  if ( KdpSearchInProgress )
    KdpSearchPhysicalPageRange(a1);
  return 0LL;
}
