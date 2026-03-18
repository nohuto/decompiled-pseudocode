/*
 * XREFs of _PnpCtxRegCreateTree @ 0x1406AE344
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C3720 (PipUpdateDeviceProducts.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x140618394 (_CmOpenDeviceRegKeyWorker.c)
 *     PiDqOpenUserObjectRegKey @ 0x140680718 (PiDqOpenUserObjectRegKey.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1406AA2F4 (_CmOpenCommonClassRegKeyWorker.c)
 *     _PnpOpenPropertiesKey @ 0x1406AAD50 (_PnpOpenPropertiesKey.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1406AB634 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     DrvDbOpenObjectRegKey @ 0x1406ADA5C (DrvDbOpenObjectRegKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1406ADCE4 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbLoadDatabaseNode @ 0x1406ADF9C (DrvDbLoadDatabaseNode.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1406D9B04 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x1408B26D4 (PiDrvDbQuerySyncNodesUpdated.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x140973F7C (_CmOpenDevicePanelRegKeyWorker.c)
 * Callees:
 *     _SysCtxRegCreateTree @ 0x1406AE39C (_SysCtxRegCreateTree.c)
 */

__int64 __fastcall PnpCtxRegCreateTree(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v7; // rcx

  v7 = 0LL;
  if ( a1 )
    v7 = *(_QWORD *)(a1 + 224);
  return SysCtxRegCreateTree(v7, a2, a3, a4, a5, a6);
}
