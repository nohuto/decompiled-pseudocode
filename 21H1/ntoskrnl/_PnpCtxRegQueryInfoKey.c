/*
 * XREFs of _PnpCtxRegQueryInfoKey @ 0x1406B268C
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C3720 (PipUpdateDeviceProducts.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1406B2300 (DrvDbGetDeviceIdDriverInfMatches.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1407125B4 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x140717FB0 (_CmRemoveDeviceFromContainerWorker.c)
 *     PiCMEnumerateSubKeys @ 0x1408ABF4C (PiCMEnumerateSubKeys.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1408B1CF8 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1408B2D98 (PiDrvDbResolveFilePathKeyValues.c)
 *     _CmGetDevicesInBaseContainerList @ 0x1409719B8 (_CmGetDevicesInBaseContainerList.c)
 *     _CmRemovePanelDeviceWorker @ 0x14097434C (_CmRemovePanelDeviceWorker.c)
 *     _CmAppendDeclarativeFilterLevel @ 0x140974CB0 (_CmAppendDeclarativeFilterLevel.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x14097574C (_CmGetDeviceCompoundFiltersWorker.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x140976060 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     DrvDbDeleteObjectSubKey @ 0x14097851C (DrvDbDeleteObjectSubKey.c)
 *     DrvDbGetDeviceIdMappedPropertyKeys @ 0x140978A40 (DrvDbGetDeviceIdMappedPropertyKeys.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140979870 (DrvDbGetObjectSubKeyCallback.c)
 *     PipResetDevices @ 0x140A4C1C8 (PipResetDevices.c)
 *     PipMigrateCleanServiceCallback @ 0x140A8E230 (PipMigrateCleanServiceCallback.c)
 * Callees:
 *     _RegRtlQueryInfoKey @ 0x1406E213C (_RegRtlQueryInfoKey.c)
 */

__int64 __fastcall PnpCtxRegQueryInfoKey(__int64 a1, int a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  return RegRtlQueryInfoKey(a2, a3, a4, a5, a6, a7);
}
