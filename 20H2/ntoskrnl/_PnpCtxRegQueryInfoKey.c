/*
 * XREFs of _PnpCtxRegQueryInfoKey @ 0x1406E6C64
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C6970 (PipUpdateDeviceProducts.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1406E433C (DrvDbGetDeviceIdDriverInfMatches.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1407226DC (DrvDbSetDeviceIdDriverInfMatches.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x140728330 (_CmRemoveDeviceFromContainerWorker.c)
 *     PiCMEnumerateSubKeys @ 0x1408B2D9C (PiCMEnumerateSubKeys.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1408B8C38 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1408B9CD8 (PiDrvDbResolveFilePathKeyValues.c)
 *     _CmGetDevicesInBaseContainerList @ 0x140978B28 (_CmGetDevicesInBaseContainerList.c)
 *     _CmRemovePanelDeviceWorker @ 0x14097B4BC (_CmRemovePanelDeviceWorker.c)
 *     _CmAppendDeclarativeFilterLevel @ 0x14097BE20 (_CmAppendDeclarativeFilterLevel.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x14097C8BC (_CmGetDeviceCompoundFiltersWorker.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x14097D1D0 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     DrvDbDeleteObjectSubKey @ 0x14097F68C (DrvDbDeleteObjectSubKey.c)
 *     DrvDbGetDeviceIdMappedPropertyKeys @ 0x14097FBB0 (DrvDbGetDeviceIdMappedPropertyKeys.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1409809E0 (DrvDbGetObjectSubKeyCallback.c)
 *     PipResetDevices @ 0x140A52548 (PipResetDevices.c)
 *     PipMigrateCleanServiceCallback @ 0x140A93520 (PipMigrateCleanServiceCallback.c)
 * Callees:
 *     _RegRtlQueryInfoKey @ 0x1406D844C (_RegRtlQueryInfoKey.c)
 */

__int64 __fastcall PnpCtxRegQueryInfoKey(
        __int64 a1,
        void *a2,
        _DWORD *a3,
        unsigned int *a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7)
{
  return RegRtlQueryInfoKey(a2, a3, a4, a5, a6, a7);
}
