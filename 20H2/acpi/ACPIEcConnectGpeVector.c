/*
 * XREFs of ACPIEcConnectGpeVector @ 0x1C00AE4F8
 * Callers:
 *     ACPIEcInitOpRegionHandler @ 0x1C00267F8 (ACPIEcInitOpRegionHandler.c)
 *     ACPIEcConnectInterrupt @ 0x1C00AE5F8 (ACPIEcConnectInterrupt.c)
 * Callees:
 *     ACPIVectorConnect @ 0x1C0060990 (ACPIVectorConnect.c)
 */

__int64 __fastcall ACPIEcConnectGpeVector(__int64 a1)
{
  return ACPIVectorConnect(0LL, *(_DWORD *)(a1 + 48), 1, 0, (__int64)ACPIEcGpeServiceRoutine, a1, (char **)(a1 + 72));
}
