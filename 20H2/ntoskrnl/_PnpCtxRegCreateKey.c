/*
 * XREFs of _PnpCtxRegCreateKey @ 0x1406E4DB0
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C6970 (PipUpdateDeviceProducts.c)
 *     _PnpOpenPropertiesKey @ 0x140640E90 (_PnpOpenPropertiesKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1406E5790 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     _PnpSetPropertyWorker @ 0x140735740 (_PnpSetPropertyWorker.c)
 *     _CmAddDeviceToContainerWorker @ 0x1407524B0 (_CmAddDeviceToContainerWorker.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x140765254 (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140765B80 (_CmCreateOrdinalInstanceKey.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1408B8C38 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x1408B91D8 (PiDrvDbOverlayNodeHive.c)
 *     _CmAddPanelDeviceWorker @ 0x14097A170 (_CmAddPanelDeviceWorker.c)
 *     PipMigratePnpState @ 0x140A4FA7C (PipMigratePnpState.c)
 *     IopInitializeBootDrivers @ 0x140A5D01C (IopInitializeBootDrivers.c)
 *     PipCommitPendingOsExtensionResource @ 0x140A93CE0 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140A93EF0 (PipCommitPendingService.c)
 * Callees:
 *     _RegRtlCreateKeyTransacted @ 0x1406E60D4 (_RegRtlCreateKeyTransacted.c)
 */

__int64 __fastcall PnpCtxRegCreateKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  char v11; // [rsp+28h] [rbp-30h]

  if ( a1 && (v8 = *(_QWORD *)(a1 + 224)) != 0 )
    v9 = *(_QWORD *)(v8 + 8);
  else
    v9 = 0LL;
  v11 = 0;
  return RegRtlCreateKeyTransacted(a2, a3, a4, a5, a6, v11, a7, a8, v9);
}
