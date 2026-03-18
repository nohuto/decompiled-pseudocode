/*
 * XREFs of _PnpCtxRegCreateKey @ 0x1406B06C4
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C3720 (PipUpdateDeviceProducts.c)
 *     _PnpOpenPropertiesKey @ 0x1406AAD50 (_PnpOpenPropertiesKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1406ADCE4 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     _PnpSetPropertyWorker @ 0x14072BE70 (_PnpSetPropertyWorker.c)
 *     _CmAddDeviceToContainerWorker @ 0x140741D50 (_CmAddDeviceToContainerWorker.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x140751F84 (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmCreateOrdinalInstanceKey @ 0x1407548A8 (_CmCreateOrdinalInstanceKey.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1408B1CF8 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x1408B2298 (PiDrvDbOverlayNodeHive.c)
 *     _CmAddPanelDeviceWorker @ 0x140973000 (_CmAddPanelDeviceWorker.c)
 *     PipMigratePnpState @ 0x140A49980 (PipMigratePnpState.c)
 *     IopInitializeBootDrivers @ 0x140A56C1C (IopInitializeBootDrivers.c)
 *     PipCommitPendingOsExtensionResource @ 0x140A8E9F0 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140A8EC00 (PipCommitPendingService.c)
 * Callees:
 *     _RegRtlCreateKeyTransacted @ 0x1406AE628 (_RegRtlCreateKeyTransacted.c)
 */

__int64 __fastcall PnpCtxRegCreateKey(
        __int64 a1,
        char *a2,
        const WCHAR *a3,
        ULONG a4,
        ACCESS_MASK a5,
        void *a6,
        HANDLE *a7,
        ULONG *a8)
{
  __int64 v8; // rax
  __int64 v9; // rcx

  if ( a1 && (v8 = *(_QWORD *)(a1 + 224)) != 0 )
    v9 = *(_QWORD *)(v8 + 8);
  else
    v9 = 0LL;
  return RegRtlCreateKeyTransacted(a2, a3, a4, a5, a6, 0, a7, a8, v9);
}
