/*
 * XREFs of _PnpCtxRegCreateTree @ 0x1406E5DF0
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C6970 (PipUpdateDeviceProducts.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1406405A4 (_CmOpenCommonClassRegKeyWorker.c)
 *     _PnpOpenPropertiesKey @ 0x140640E90 (_PnpOpenPropertiesKey.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1406702F4 (_CmOpenDeviceRegKeyWorker.c)
 *     PiDqOpenUserObjectRegKey @ 0x1406D39C0 (PiDqOpenUserObjectRegKey.c)
 *     DrvDbOpenObjectRegKey @ 0x1406E5508 (DrvDbOpenObjectRegKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1406E5790 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbLoadDatabaseNode @ 0x1406E5A48 (DrvDbLoadDatabaseNode.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1406E6FF4 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1406EAC9C (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x1408B9614 (PiDrvDbQuerySyncNodesUpdated.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x14097B0EC (_CmOpenDevicePanelRegKeyWorker.c)
 * Callees:
 *     _SysCtxRegCreateTree @ 0x1406E5E48 (_SysCtxRegCreateTree.c)
 */

__int64 __fastcall PnpCtxRegCreateTree(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v7; // rcx

  v7 = 0LL;
  if ( a1 )
    v7 = *(_QWORD *)(a1 + 224);
  return SysCtxRegCreateTree(v7, a2, a3, a4, a5, a6);
}
