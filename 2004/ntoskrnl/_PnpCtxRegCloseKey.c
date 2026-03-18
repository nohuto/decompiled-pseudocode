/*
 * XREFs of _PnpCtxRegCloseKey @ 0x1406C506C
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C45E0 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x1405C1050 (DrvDbGetConfigurationSubKeyCallback.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406C4AB8 (DrvDbGetDriverPackageMappedProperty.c)
 *     PiPnpRtlInit @ 0x14078C6F0 (PiPnpRtlInit.c)
 *     DrvDbCreateDatabaseNode @ 0x14078D608 (DrvDbCreateDatabaseNode.c)
 *     PiCMCreateDevice @ 0x1408AC340 (PiCMCreateDevice.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x140979EB4 (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     PipInitComputerIds @ 0x140A4BC28 (PipInitComputerIds.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140A4CF70 (PipCheckSystemFirmwareUpdated.c)
 *     IopInitializeBootDrivers @ 0x140A4E080 (IopInitializeBootDrivers.c)
 *     PipProcessPendingOsExtensionResources @ 0x140A51700 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x140A5178C (PipProcessPendingServices.c)
 *     PipResetDevices @ 0x140A51EC8 (PipResetDevices.c)
 *     PipMigratePnpState @ 0x140A6EFD4 (PipMigratePnpState.c)
 *     PipMigrateCleanServiceCallback @ 0x140A8D820 (PipMigrateCleanServiceCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x140A8DFE0 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140A8E1F0 (PipCommitPendingService.c)
 * Callees:
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 */

NTSTATUS __fastcall PnpCtxRegCloseKey(__int64 a1, void *a2)
{
  return ZwClose(a2);
}
