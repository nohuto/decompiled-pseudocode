/*
 * XREFs of _PnpCtxRegCloseKey @ 0x1406B01D0
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C3720 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x1405C0930 (DrvDbGetConfigurationSubKeyCallback.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406AE73C (DrvDbGetDriverPackageMappedProperty.c)
 *     PiPnpRtlInit @ 0x14078A820 (PiPnpRtlInit.c)
 *     DrvDbCreateDatabaseNode @ 0x14078B738 (DrvDbCreateDatabaseNode.c)
 *     PiCMCreateDevice @ 0x1408AB020 (PiCMCreateDevice.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x140978B14 (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     PipMigratePnpState @ 0x140A49980 (PipMigratePnpState.c)
 *     PipProcessPendingOsExtensionResources @ 0x140A4BAD0 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x140A4BB5C (PipProcessPendingServices.c)
 *     PipResetDevices @ 0x140A4C1C8 (PipResetDevices.c)
 *     PipInitComputerIds @ 0x140A547C4 (PipInitComputerIds.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140A55B0C (PipCheckSystemFirmwareUpdated.c)
 *     IopInitializeBootDrivers @ 0x140A56C1C (IopInitializeBootDrivers.c)
 *     PipMigrateCleanServiceCallback @ 0x140A8E230 (PipMigrateCleanServiceCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x140A8E9F0 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140A8EC00 (PipCommitPendingService.c)
 * Callees:
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 */

NTSTATUS __fastcall PnpCtxRegCloseKey(__int64 a1, void *a2)
{
  return ZwClose(a2);
}
