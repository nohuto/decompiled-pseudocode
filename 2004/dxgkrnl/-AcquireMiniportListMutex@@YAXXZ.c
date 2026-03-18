/*
 * XREFs of ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0018650
 * Callers:
 *     DxgkMiracastEnforceInactiveMonitorPolicy @ 0x1C00185C0 (DxgkMiracastEnforceInactiveMonitorPolicy.c)
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x1C001C6B4 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 *     DpiEnterSystemDisplay @ 0x1C001FD60 (DpiEnterSystemDisplay.c)
 *     DpiMiracastInterfaceChange @ 0x1C00527B0 (DpiMiracastInterfaceChange.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C0053450 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTargetDeviceChange @ 0x1C0053A20 (DpiMiracastTargetDeviceChange.c)
 *     DpiMiracastTearDownAssociation @ 0x1C0053F08 (DpiMiracastTearDownAssociation.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C0054920 (DxgkMiracastStartMiracastSession.c)
 *     DpiIndirectCbOpmGetSrmListVersion @ 0x1C0057450 (DpiIndirectCbOpmGetSrmListVersion.c)
 *     DpiIndirectCbOpmSetSrmList @ 0x1C00575E0 (DpiIndirectCbOpmSetSrmList.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C0159E80 (DxgkMiracastStopAllMiracastSessions.c)
 *     DpiValidateDeviceName @ 0x1C015A368 (DpiValidateDeviceName.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C0171734 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiFdoStopMiracastSession @ 0x1C0172830 (DpiFdoStopMiracastSession.c)
 *     DpiAddDevice @ 0x1C017EFC0 (DpiAddDevice.c)
 *     DpiFdoStartAdapterThreadImpl @ 0x1C0183850 (DpiFdoStartAdapterThreadImpl.c)
 *     DpiInitializeEx @ 0x1C019314C (DpiInitializeEx.c)
 *     DpiLdaValidateSystemChainStatus @ 0x1C01969C8 (DpiLdaValidateSystemChainStatus.c)
 *     DpiAcpiRegisterAcpiCallbacks @ 0x1C0197674 (DpiAcpiRegisterAcpiCallbacks.c)
 *     DpiFdoHandleQueryPowerRelations @ 0x1C0198BAC (DpiFdoHandleQueryPowerRelations.c)
 *     DpiControlEtwLogging @ 0x1C02C5FEC (DpiControlEtwLogging.c)
 *     DpiCleanup @ 0x1C02C74E0 (DpiCleanup.c)
 *     DpiFdoHandleRemoveDevice @ 0x1C02C9E40 (DpiFdoHandleRemoveDevice.c)
 *     DpiFdoHandleStopDevice @ 0x1C02CA270 (DpiFdoHandleStopDevice.c)
 *     DpiFdoStopAdapter @ 0x1C02CBAD4 (DpiFdoStopAdapter.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C02CDAC4 (DpiMiracastFindDisplayAdapterFdo.c)
 *     DpiMiracastGetDeviceContextFromName @ 0x1C02CDE1C (DpiMiracastGetDeviceContextFromName.c)
 *     DxgkHandleMiracastEscape @ 0x1C02CEE38 (DxgkHandleMiracastEscape.c)
 *     ?DpIterateFdoContexts@@YAXP6AJPEAU_FDO_CONTEXT@@PEAX@Z1@Z @ 0x1C02D1A50 (-DpIterateFdoContexts@@YAXP6AJPEAU_FDO_CONTEXT@@PEAX@Z1@Z.c)
 *     ?DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LOCK@@PEAPEAU_FDO_CONTEXT@@@Z @ 0x1C02D4958 (-DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LO.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1C02D5B84 (DpiAcpiHandleAcpiEvent.c)
 *     DpiAcpiUnregisterAcpiCallbacks @ 0x1C02D6238 (DpiAcpiUnregisterAcpiCallbacks.c)
 * Callees:
 *     <none>
 */

void AcquireMiniportListMutex(void)
{
  KeWaitForSingleObject(Mutex, Executive, 0, 0, 0LL);
  _InterlockedExchange64(&qword_1C00B1B50, (__int64)KeGetCurrentThread());
}
