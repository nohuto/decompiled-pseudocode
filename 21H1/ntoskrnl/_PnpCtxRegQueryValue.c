/*
 * XREFs of _PnpCtxRegQueryValue @ 0x1406B1148
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C3720 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x1405C0930 (DrvDbGetConfigurationSubKeyCallback.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406AE73C (DrvDbGetDriverPackageMappedProperty.c)
 *     PiCMCreateDevice @ 0x1408AB020 (PiCMCreateDevice.c)
 *     PipMigratePnpState @ 0x140A49980 (PipMigratePnpState.c)
 *     PpDevCfgInit @ 0x140A4A920 (PpDevCfgInit.c)
 *     PipResetDevices @ 0x140A4C1C8 (PipResetDevices.c)
 *     PipHardwareConfigExists @ 0x140A8E0EC (PipHardwareConfigExists.c)
 *     PipMigrateCleanServiceCallback @ 0x140A8E230 (PipMigrateCleanServiceCallback.c)
 *     PipProcessPendingObjects @ 0x140A8EF90 (PipProcessPendingObjects.c)
 * Callees:
 *     _RegRtlQueryValue @ 0x140617A84 (_RegRtlQueryValue.c)
 */

__int64 __fastcall PnpCtxRegQueryValue(__int64 a1, void *a2, const WCHAR *a3, _DWORD *a4, void *a5, unsigned int *a6)
{
  return RegRtlQueryValue(a2, a3, a4, a5, a6);
}
