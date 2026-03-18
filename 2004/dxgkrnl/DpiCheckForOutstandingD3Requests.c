/*
 * XREFs of DpiCheckForOutstandingD3Requests @ 0x1C001E440
 * Callers:
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x1C001C6B4 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 *     ?Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x1C001E3D4 (-Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 *     DpiPdoDispatchPower @ 0x1C001F890 (DpiPdoDispatchPower.c)
 *     DpiEnterSystemDisplay @ 0x1C001FD60 (DpiEnterSystemDisplay.c)
 *     DxgkQueryConnectionChanges @ 0x1C00200B0 (DxgkQueryConnectionChanges.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z @ 0x1C00501AC (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z.c)
 *     DxgkInvalidateDeviceState @ 0x1C0051978 (DxgkInvalidateDeviceState.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C0053450 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTearDownAssociation @ 0x1C0053F08 (DpiMiracastTearDownAssociation.c)
 *     DpiIndirectCbOpmGetSrmListVersion @ 0x1C0057450 (DpiIndirectCbOpmGetSrmListVersion.c)
 *     DpiIndirectCbOpmSetSrmList @ 0x1C00575E0 (DpiIndirectCbOpmSetSrmList.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C011F39C (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiPdoDispatchPnp @ 0x1C0163780 (DpiPdoDispatchPnp.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C0164280 (DpiPdoDispatchInternalIoctl.c)
 *     DpiPdoHandleQueryDeviceRelations @ 0x1C0167EC0 (DpiPdoHandleQueryDeviceRelations.c)
 *     DpiMiracastFindDisplayAdapterFdoIhv @ 0x1C0171600 (DpiMiracastFindDisplayAdapterFdoIhv.c)
 *     DpiFdoHandleSystemPower @ 0x1C017209C (DpiFdoHandleSystemPower.c)
 *     DpiFdoStopMiracastSession @ 0x1C0172830 (DpiFdoStopMiracastSession.c)
 *     DxgkPowerOnOffMonitor @ 0x1C0173644 (DxgkPowerOnOffMonitor.c)
 *     DpiFdoHandleQueryDeviceRelations @ 0x1C0174760 (DpiFdoHandleQueryDeviceRelations.c)
 *     DpiFdoStartAdapterThreadImpl @ 0x1C0183850 (DpiFdoStartAdapterThreadImpl.c)
 *     DpiFdoHandleStartDevice @ 0x1C0191F90 (DpiFdoHandleStartDevice.c)
 *     DpiLdaValidateSystemChainStatus @ 0x1C01969C8 (DpiLdaValidateSystemChainStatus.c)
 *     DpiPdoHandleStartDevice @ 0x1C01987A0 (DpiPdoHandleStartDevice.c)
 *     DpiFdoDispatchPnp @ 0x1C0198F50 (DpiFdoDispatchPnp.c)
 *     DpiIndicateConnectorChangeWorkItem @ 0x1C02C5DD0 (DpiIndicateConnectorChangeWorkItem.c)
 *     DpiPollDisplayChildren @ 0x1C02C688C (DpiPollDisplayChildren.c)
 *     DpiPollSingleDisplayChild @ 0x1C02C6A14 (DpiPollSingleDisplayChild.c)
 *     DpiDisableMsBddFallbackDriver @ 0x1C02C7980 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C02C7B2C (DpiEnableMsBddFallbackDriver.c)
 *     DpiFdoExcludeAdapterAccess @ 0x1C02C9860 (DpiFdoExcludeAdapterAccess.c)
 *     DpiFdoHandleStopDevice @ 0x1C02CA270 (DpiFdoHandleStopDevice.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x1C02CA670 (DpiFdoHandleSurpriseRemoval.c)
 *     DpiFdoInvalidateChildWorkItem @ 0x1C02CAE30 (DpiFdoInvalidateChildWorkItem.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C02CDAC4 (DpiMiracastFindDisplayAdapterFdo.c)
 *     DxgkHandleMiracastEscape @ 0x1C02CEE38 (DxgkHandleMiracastEscape.c)
 *     DpiKsrStopAdapters @ 0x1C02D2D90 (DpiKsrStopAdapters.c)
 *     DpiFdoHandleQueryFlexibleIovInterface @ 0x1C02D3070 (DpiFdoHandleQueryFlexibleIovInterface.c)
 *     DpiFdoHandleQueryIndirectDispInterface @ 0x1C02D32C0 (DpiFdoHandleQueryIndirectDispInterface.c)
 *     DpiFdoHandleQueryPartitioningDeviceInterface @ 0x1C02D3470 (DpiFdoHandleQueryPartitioningDeviceInterface.c)
 *     DpiFdoHandleQuerySrIovInterface @ 0x1C02D3630 (DpiFdoHandleQuerySrIovInterface.c)
 *     DpiFdoHandleQueryThermalInterface @ 0x1C02D3820 (DpiFdoHandleQueryThermalInterface.c)
 *     DpiFdoThermalActiveCooling @ 0x1C02D3AF0 (DpiFdoThermalActiveCooling.c)
 *     DpiFdoThermalPassiveCooling @ 0x1C02D3C80 (DpiFdoThermalPassiveCooling.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1C02D5B84 (DpiAcpiHandleAcpiEvent.c)
 *     DpiLdaLinkDeviceToChain @ 0x1C02D7990 (DpiLdaLinkDeviceToChain.c)
 *     DpiLdaUnLinkDeviceFromChain @ 0x1C02D8180 (DpiLdaUnLinkDeviceFromChain.c)
 *     DpiPdoHandleStopDevice @ 0x1C02D8D60 (DpiPdoHandleStopDevice.c)
 *     DpiPdoPollingWorkItem @ 0x1C02D8FA0 (DpiPdoPollingWorkItem.c)
 * Callees:
 *     DpiRequestDevicePowerState @ 0x1C00509A4 (DpiRequestDevicePowerState.c)
 *     DpiEnableD3Requests @ 0x1C00E20CC (DpiEnableD3Requests.c)
 *     DpiDisableD3Requests @ 0x1C0169D94 (DpiDisableD3Requests.c)
 */

NTSTATUS __fastcall DpiCheckForOutstandingD3Requests(__int64 a1)
{
  int v2; // ebx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  DpiDisableD3Requests(*(_QWORD *)(a1 + 24));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 4072), &LockHandle);
  v2 = *(_DWORD *)(a1 + 4136);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v2 )
  {
    DpiRequestDevicePowerState(*(_QWORD *)(a1 + 24), 1LL);
    DpiEnableD3Requests(*(_QWORD *)(a1 + 24));
  }
  return KeWaitForSingleObject((PVOID)(a1 + 4088), Executive, 0, 0, 0LL);
}
