/*
 * XREFs of _PnpCtxRegCreateKey @ 0x1406C3680
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C45E0 (PipUpdateDeviceProducts.c)
 *     _PnpOpenPropertiesKey @ 0x1406C1550 (_PnpOpenPropertiesKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1406C4060 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     _PnpSetPropertyWorker @ 0x140726CB0 (_PnpSetPropertyWorker.c)
 *     _CmAddDeviceToContainerWorker @ 0x1407438D0 (_CmAddDeviceToContainerWorker.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x140756614 (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140756F40 (_CmCreateOrdinalInstanceKey.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1408B3018 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x1408B35B8 (PiDrvDbOverlayNodeHive.c)
 *     _CmAddPanelDeviceWorker @ 0x1409743A0 (_CmAddPanelDeviceWorker.c)
 *     IopInitializeBootDrivers @ 0x140A4E080 (IopInitializeBootDrivers.c)
 *     PipMigratePnpState @ 0x140A6EFD4 (PipMigratePnpState.c)
 *     PipCommitPendingOsExtensionResource @ 0x140A8DFE0 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140A8E1F0 (PipCommitPendingService.c)
 * Callees:
 *     _RegRtlCreateKeyTransacted @ 0x1406C49A4 (_RegRtlCreateKeyTransacted.c)
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
