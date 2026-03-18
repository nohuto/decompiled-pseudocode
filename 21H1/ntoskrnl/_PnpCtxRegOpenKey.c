/*
 * XREFs of _PnpCtxRegOpenKey @ 0x1406ADE68
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C3720 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x1405C0930 (DrvDbGetConfigurationSubKeyCallback.c)
 *     DrvDbOpenObjectRegKey @ 0x1406ADA5C (DrvDbOpenObjectRegKey.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406AE73C (DrvDbGetDriverPackageMappedProperty.c)
 *     PiPnpRtlInit @ 0x14078A820 (PiPnpRtlInit.c)
 *     PipMigratePnpState @ 0x140A49980 (PipMigratePnpState.c)
 *     PpDevCfgInit @ 0x140A4A920 (PpDevCfgInit.c)
 *     PipProcessPendingOsExtensionResources @ 0x140A4BAD0 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x140A4BB5C (PipProcessPendingServices.c)
 *     PipResetDevices @ 0x140A4C1C8 (PipResetDevices.c)
 *     PipHardwareConfigExists @ 0x140A8E0EC (PipHardwareConfigExists.c)
 *     PipMigrateCleanServiceCallback @ 0x140A8E230 (PipMigrateCleanServiceCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x140A8E9F0 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140A8EC00 (PipCommitPendingService.c)
 *     PipProcessPendingObjects @ 0x140A8EF90 (PipProcessPendingObjects.c)
 * Callees:
 *     _SysCtxRegOpenKey @ 0x140617E18 (_SysCtxRegOpenKey.c)
 */

__int64 __fastcall PnpCtxRegOpenKey(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, __int64 a6)
{
  __int64 v7; // rcx

  v7 = 0LL;
  if ( a1 )
    v7 = *(_QWORD *)(a1 + 224);
  return SysCtxRegOpenKey(v7, a2, a3, a4, a5, a6);
}
