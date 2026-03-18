/*
 * XREFs of ACPIEcInstallOpRegionHandler @ 0x1C00AD7DC
 * Callers:
 *     ACPIEcStartDeviceWorker @ 0x1C0053300 (ACPIEcStartDeviceWorker.c)
 * Callees:
 *     RegisterOperationRegionHandler @ 0x1C009F5F8 (RegisterOperationRegionHandler.c)
 */

__int64 __fastcall ACPIEcInstallOpRegionHandler(__int64 a1)
{
  return RegisterOperationRegionHandler(
           *(__int64 **)(a1 + 56),
           2,
           3u,
           (__int64)ACPIEcOpRegionHandler,
           a1,
           (unsigned int **)(a1 + 80));
}
