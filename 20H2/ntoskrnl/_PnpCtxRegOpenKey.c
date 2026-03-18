/*
 * XREFs of _PnpCtxRegOpenKey @ 0x1406E5914
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C6970 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x1405C4CD0 (DrvDbGetConfigurationSubKeyCallback.c)
 *     DrvDbOpenObjectRegKey @ 0x1406E5508 (DrvDbOpenObjectRegKey.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406E61E8 (DrvDbGetDriverPackageMappedProperty.c)
 *     PiPnpRtlInit @ 0x140798E30 (PiPnpRtlInit.c)
 *     PipMigratePnpState @ 0x140A4FA7C (PipMigratePnpState.c)
 *     PpDevCfgInit @ 0x140A50A1C (PpDevCfgInit.c)
 *     PipProcessPendingOsExtensionResources @ 0x140A51D80 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x140A51E0C (PipProcessPendingServices.c)
 *     PipResetDevices @ 0x140A52548 (PipResetDevices.c)
 *     PipHardwareConfigExists @ 0x140A933DC (PipHardwareConfigExists.c)
 *     PipMigrateCleanServiceCallback @ 0x140A93520 (PipMigrateCleanServiceCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x140A93CE0 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140A93EF0 (PipCommitPendingService.c)
 *     PipProcessPendingObjects @ 0x140A94280 (PipProcessPendingObjects.c)
 * Callees:
 *     _SysCtxRegOpenKey @ 0x14066DA70 (_SysCtxRegOpenKey.c)
 */

__int64 __fastcall PnpCtxRegOpenKey(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, __int64 a6)
{
  __int64 v7; // rcx

  v7 = 0LL;
  if ( a1 )
    v7 = *(_QWORD *)(a1 + 224);
  return SysCtxRegOpenKey(v7, a2, a3, a4, a5, a6);
}
