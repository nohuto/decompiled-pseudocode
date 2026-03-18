/*
 * XREFs of HUBDSM_PurgingDeviceTreeIoOnReEnumerationInUnConfigured @ 0x1C00215B0
 * Callers:
 *     <none>
 * Callees:
 *     HUBUCX_PurgeDeviceTreeIoUsingUCXIoctl @ 0x1C00268B0 (HUBUCX_PurgeDeviceTreeIoUsingUCXIoctl.c)
 */

__int64 __fastcall HUBDSM_PurgingDeviceTreeIoOnReEnumerationInUnConfigured(__int64 a1)
{
  HUBUCX_PurgeDeviceTreeIoUsingUCXIoctl(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
