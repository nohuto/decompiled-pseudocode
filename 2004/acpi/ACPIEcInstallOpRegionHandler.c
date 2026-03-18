/*
 * XREFs of ACPIEcInstallOpRegionHandler @ 0x1C00AE834
 * Callers:
 *     ACPIEcStartDeviceWorker @ 0x1C0053AB0 (ACPIEcStartDeviceWorker.c)
 * Callees:
 *     RegisterOperationRegionHandler @ 0x1C00A1990 (RegisterOperationRegionHandler.c)
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
