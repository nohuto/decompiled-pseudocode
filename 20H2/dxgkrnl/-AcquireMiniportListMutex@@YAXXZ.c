/*
 * XREFs of ?AcquireMiniportListMutex@@YAXXZ @ 0x1C00186B0
 * Callers:
 *     DxgkMiracastEnforceInactiveMonitorPolicy @ 0x1C0018620 (DxgkMiracastEnforceInactiveMonitorPolicy.c)
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x1C001C714 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 *     DpiEnterSystemDisplay @ 0x1C001FDC0 (DpiEnterSystemDisplay.c)
 *     DpiMiracastInterfaceChange @ 0x1C00526F0 (DpiMiracastInterfaceChange.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C0053390 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTargetDeviceChange @ 0x1C0053960 (DpiMiracastTargetDeviceChange.c)
 *     DpiMiracastTearDownAssociation @ 0x1C0053E48 (DpiMiracastTearDownAssociation.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C0054860 (DxgkMiracastStartMiracastSession.c)
 *     DpiIndirectCbOpmGetSrmListVersion @ 0x1C0057390 (DpiIndirectCbOpmGetSrmListVersion.c)
 *     DpiIndirectCbOpmSetSrmList @ 0x1C0057520 (DpiIndirectCbOpmSetSrmList.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C0158CD0 (DxgkMiracastStopAllMiracastSessions.c)
 *     DpiValidateDeviceName @ 0x1C01591B8 (DpiValidateDeviceName.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C0170584 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiFdoStopMiracastSession @ 0x1C0171680 (DpiFdoStopMiracastSession.c)
 *     DpiAddDevice @ 0x1C017DE10 (DpiAddDevice.c)
 *     DpiFdoStartAdapterThreadImpl @ 0x1C01826A0 (DpiFdoStartAdapterThreadImpl.c)
 *     DpiInitializeEx @ 0x1C0191F9C (DpiInitializeEx.c)
 *     DpiLdaValidateSystemChainStatus @ 0x1C0195818 (DpiLdaValidateSystemChainStatus.c)
 *     DpiAcpiRegisterAcpiCallbacks @ 0x1C01964C4 (DpiAcpiRegisterAcpiCallbacks.c)
 *     DpiFdoHandleQueryPowerRelations @ 0x1C01979FC (DpiFdoHandleQueryPowerRelations.c)
 *     DpiControlEtwLogging @ 0x1C02C502C (DpiControlEtwLogging.c)
 *     DpiCleanup @ 0x1C02C6520 (DpiCleanup.c)
 *     DpiFdoHandleRemoveDevice @ 0x1C02C8E80 (DpiFdoHandleRemoveDevice.c)
 *     DpiFdoHandleStopDevice @ 0x1C02C92B0 (DpiFdoHandleStopDevice.c)
 *     DpiFdoStopAdapter @ 0x1C02CAB14 (DpiFdoStopAdapter.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C02CCB04 (DpiMiracastFindDisplayAdapterFdo.c)
 *     DpiMiracastGetDeviceContextFromName @ 0x1C02CCE5C (DpiMiracastGetDeviceContextFromName.c)
 *     DxgkHandleMiracastEscape @ 0x1C02CDE78 (DxgkHandleMiracastEscape.c)
 *     ?DpIterateFdoContexts@@YAXP6AJPEAU_FDO_CONTEXT@@PEAX@Z1@Z @ 0x1C02D0A90 (-DpIterateFdoContexts@@YAXP6AJPEAU_FDO_CONTEXT@@PEAX@Z1@Z.c)
 *     ?DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LOCK@@PEAPEAU_FDO_CONTEXT@@@Z @ 0x1C02D3998 (-DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LO.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1C02D4BC4 (DpiAcpiHandleAcpiEvent.c)
 *     DpiAcpiUnregisterAcpiCallbacks @ 0x1C02D5278 (DpiAcpiUnregisterAcpiCallbacks.c)
 * Callees:
 *     <none>
 */

void AcquireMiniportListMutex(void)
{
  KeWaitForSingleObject(Mutex, Executive, 0, 0, 0LL);
  _InterlockedExchange64(&qword_1C00B0B50, (__int64)KeGetCurrentThread());
}
