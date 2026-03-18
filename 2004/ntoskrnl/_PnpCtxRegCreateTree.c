/*
 * XREFs of _PnpCtxRegCreateTree @ 0x1406C46C0
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C45E0 (PipUpdateDeviceProducts.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1405DBCC4 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1405E2D68 (_CmOpenDeviceRegKeyWorker.c)
 *     PiDqOpenUserObjectRegKey @ 0x140645608 (PiDqOpenUserObjectRegKey.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1406C035C (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _PnpOpenPropertiesKey @ 0x1406C1550 (_PnpOpenPropertiesKey.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1406C28E4 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     DrvDbOpenObjectRegKey @ 0x1406C3DD8 (DrvDbOpenObjectRegKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1406C4060 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbLoadDatabaseNode @ 0x1406C4318 (DrvDbLoadDatabaseNode.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x1408B39F4 (PiDrvDbQuerySyncNodesUpdated.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x14097531C (_CmOpenDevicePanelRegKeyWorker.c)
 * Callees:
 *     _SysCtxRegCreateTree @ 0x1406C4718 (_SysCtxRegCreateTree.c)
 */

__int64 __fastcall PnpCtxRegCreateTree(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v7; // rcx

  v7 = 0LL;
  if ( a1 )
    v7 = *(_QWORD *)(a1 + 224);
  return SysCtxRegCreateTree(v7, a2, a3, a4, a5, a6);
}
