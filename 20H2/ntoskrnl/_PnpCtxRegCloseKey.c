/*
 * XREFs of _PnpCtxRegCloseKey @ 0x1406E679C
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C6970 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x1405C4CD0 (DrvDbGetConfigurationSubKeyCallback.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406E61E8 (DrvDbGetDriverPackageMappedProperty.c)
 *     PiPnpRtlInit @ 0x140798E30 (PiPnpRtlInit.c)
 *     DrvDbCreateDatabaseNode @ 0x140799D48 (DrvDbCreateDatabaseNode.c)
 *     PiCMCreateDevice @ 0x1408B1E70 (PiCMCreateDevice.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x14097FC84 (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     PipMigratePnpState @ 0x140A4FA7C (PipMigratePnpState.c)
 *     PipProcessPendingOsExtensionResources @ 0x140A51D80 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x140A51E0C (PipProcessPendingServices.c)
 *     PipResetDevices @ 0x140A52548 (PipResetDevices.c)
 *     PipInitComputerIds @ 0x140A5ABC4 (PipInitComputerIds.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140A5BF0C (PipCheckSystemFirmwareUpdated.c)
 *     IopInitializeBootDrivers @ 0x140A5D01C (IopInitializeBootDrivers.c)
 *     PipMigrateCleanServiceCallback @ 0x140A93520 (PipMigrateCleanServiceCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x140A93CE0 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140A93EF0 (PipCommitPendingService.c)
 * Callees:
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 */

NTSTATUS __fastcall PnpCtxRegCloseKey(__int64 a1, void *a2)
{
  return ZwClose(a2);
}
