/*
 * XREFs of _PnpCtxRegQueryValue @ 0x1406C54FC
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C45E0 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x1405C1050 (DrvDbGetConfigurationSubKeyCallback.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406C4AB8 (DrvDbGetDriverPackageMappedProperty.c)
 *     PiCMCreateDevice @ 0x1408AC340 (PiCMCreateDevice.c)
 *     PpDevCfgInit @ 0x140A5039C (PpDevCfgInit.c)
 *     PipResetDevices @ 0x140A51EC8 (PipResetDevices.c)
 *     PipMigratePnpState @ 0x140A6EFD4 (PipMigratePnpState.c)
 *     PipHardwareConfigExists @ 0x140A8D6DC (PipHardwareConfigExists.c)
 *     PipMigrateCleanServiceCallback @ 0x140A8D820 (PipMigrateCleanServiceCallback.c)
 *     PipProcessPendingObjects @ 0x140A8E580 (PipProcessPendingObjects.c)
 * Callees:
 *     _RegRtlQueryValue @ 0x1405E194C (_RegRtlQueryValue.c)
 */

__int64 __fastcall PnpCtxRegQueryValue(__int64 a1, void *a2, const WCHAR *a3, _DWORD *a4, void *a5, unsigned int *a6)
{
  return RegRtlQueryValue(a2, a3, a4, a5, a6);
}
