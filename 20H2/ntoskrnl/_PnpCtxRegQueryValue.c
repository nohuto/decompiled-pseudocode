/*
 * XREFs of _PnpCtxRegQueryValue @ 0x1406E6C2C
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C6970 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x1405C4CD0 (DrvDbGetConfigurationSubKeyCallback.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406E61E8 (DrvDbGetDriverPackageMappedProperty.c)
 *     PiCMCreateDevice @ 0x1408B1E70 (PiCMCreateDevice.c)
 *     PipMigratePnpState @ 0x140A4FA7C (PipMigratePnpState.c)
 *     PpDevCfgInit @ 0x140A50A1C (PpDevCfgInit.c)
 *     PipResetDevices @ 0x140A52548 (PipResetDevices.c)
 *     PipHardwareConfigExists @ 0x140A933DC (PipHardwareConfigExists.c)
 *     PipMigrateCleanServiceCallback @ 0x140A93520 (PipMigrateCleanServiceCallback.c)
 *     PipProcessPendingObjects @ 0x140A94280 (PipProcessPendingObjects.c)
 * Callees:
 *     _RegRtlQueryValue @ 0x14066D6DC (_RegRtlQueryValue.c)
 */

__int64 __fastcall PnpCtxRegQueryValue(__int64 a1, void *a2, const WCHAR *a3, _DWORD *a4, void *a5, unsigned int *a6)
{
  return RegRtlQueryValue(a2, a3, a4, a5, a6);
}
