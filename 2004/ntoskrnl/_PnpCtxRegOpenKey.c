/*
 * XREFs of _PnpCtxRegOpenKey @ 0x1406C41E4
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C45E0 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x1405C1050 (DrvDbGetConfigurationSubKeyCallback.c)
 *     DrvDbOpenObjectRegKey @ 0x1406C3DD8 (DrvDbOpenObjectRegKey.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406C4AB8 (DrvDbGetDriverPackageMappedProperty.c)
 *     PiPnpRtlInit @ 0x14078C6F0 (PiPnpRtlInit.c)
 *     PpDevCfgInit @ 0x140A5039C (PpDevCfgInit.c)
 *     PipProcessPendingOsExtensionResources @ 0x140A51700 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x140A5178C (PipProcessPendingServices.c)
 *     PipResetDevices @ 0x140A51EC8 (PipResetDevices.c)
 *     PipMigratePnpState @ 0x140A6EFD4 (PipMigratePnpState.c)
 *     PipHardwareConfigExists @ 0x140A8D6DC (PipHardwareConfigExists.c)
 *     PipMigrateCleanServiceCallback @ 0x140A8D820 (PipMigrateCleanServiceCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x140A8DFE0 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140A8E1F0 (PipCommitPendingService.c)
 *     PipProcessPendingObjects @ 0x140A8E580 (PipProcessPendingObjects.c)
 * Callees:
 *     _SysCtxRegOpenKey @ 0x1405E1CE0 (_SysCtxRegOpenKey.c)
 */

__int64 __fastcall PnpCtxRegOpenKey(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, __int64 a6)
{
  __int64 v7; // rcx

  v7 = 0LL;
  if ( a1 )
    v7 = *(_QWORD *)(a1 + 224);
  return SysCtxRegOpenKey(v7, a2, a3, a4, a5, a6);
}
