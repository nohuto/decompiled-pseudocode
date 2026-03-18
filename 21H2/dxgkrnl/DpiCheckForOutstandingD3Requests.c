/*
 * XREFs of DpiCheckForOutstandingD3Requests @ 0x1C0012BA4
 * Callers:
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x1C0020F80 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 *     ?Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x1C0021D38 (-Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 *     DpiPdoDispatchPower @ 0x1C0023630 (DpiPdoDispatchPower.c)
 *     DpiEnterSystemDisplay @ 0x1C0024930 (DpiEnterSystemDisplay.c)
 *     DxgkQueryConnectionChanges @ 0x1C0024C50 (DxgkQueryConnectionChanges.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EE@Z @ 0x1C005F2C8 (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EE@Z.c)
 *     DxgkInvalidateDeviceState @ 0x1C00600E0 (DxgkInvalidateDeviceState.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C0061EE0 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTearDownAssociation @ 0x1C0062950 (DpiMiracastTearDownAssociation.c)
 *     DpiIndirectCbOpmGetSrmListVersion @ 0x1C0064E20 (DpiIndirectCbOpmGetSrmListVersion.c)
 *     DpiIndirectCbOpmSetSrmList @ 0x1C0064FA0 (DpiIndirectCbOpmSetSrmList.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C01B445C (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiPdoDispatchPnp @ 0x1C01E4250 (DpiPdoDispatchPnp.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C01E4480 (DpiPdoDispatchInternalIoctl.c)
 *     DpiPdoHandleQueryDeviceRelations @ 0x1C01E7F40 (DpiPdoHandleQueryDeviceRelations.c)
 *     DpiMiracastFindDisplayAdapterFdoIhv @ 0x1C01EEB90 (DpiMiracastFindDisplayAdapterFdoIhv.c)
 *     DpiFdoHandleSystemPower @ 0x1C01F02DC (DpiFdoHandleSystemPower.c)
 *     DpiFdoStopMiracastSession @ 0x1C01F0830 (DpiFdoStopMiracastSession.c)
 *     DxgkPowerOnOffMonitor @ 0x1C01F0E64 (DxgkPowerOnOffMonitor.c)
 *     DpiFdoHandleQueryDeviceRelations @ 0x1C01F2F00 (DpiFdoHandleQueryDeviceRelations.c)
 *     DpiIndicateConnectorChangeWorkItem @ 0x1C01F3910 (DpiIndicateConnectorChangeWorkItem.c)
 *     DpiFdoStartAdapterThreadImpl @ 0x1C01F5298 (DpiFdoStartAdapterThreadImpl.c)
 *     DpiFdoHandleStartDevice @ 0x1C01F6B40 (DpiFdoHandleStartDevice.c)
 *     DpiLdaValidateSystemChainStatus @ 0x1C0219C24 (DpiLdaValidateSystemChainStatus.c)
 *     DpiPdoHandleStartDevice @ 0x1C021BAC0 (DpiPdoHandleStartDevice.c)
 *     DpiFdoDispatchPnp @ 0x1C021C2F0 (DpiFdoDispatchPnp.c)
 *     DpiPollDisplayChildren @ 0x1C03876C0 (DpiPollDisplayChildren.c)
 *     DpiPollSingleDisplayChild @ 0x1C0387820 (DpiPollSingleDisplayChild.c)
 *     DpiDisableMsBddFallbackDriver @ 0x1C0388570 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C0388704 (DpiEnableMsBddFallbackDriver.c)
 *     DpiFdoExcludeAdapterAccess @ 0x1C0389190 (DpiFdoExcludeAdapterAccess.c)
 *     DpiFdoHandleStopDevice @ 0x1C0389B60 (DpiFdoHandleStopDevice.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x1C0389F90 (DpiFdoHandleSurpriseRemoval.c)
 *     DpiFdoInvalidateChildWorkItem @ 0x1C038A6F0 (DpiFdoInvalidateChildWorkItem.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C038CF44 (DpiMiracastFindDisplayAdapterFdo.c)
 *     DxgkHandleMiracastEscape @ 0x1C038E208 (DxgkHandleMiracastEscape.c)
 *     DpiFdoHandleQueryFlexibleIovInterface @ 0x1C03907F0 (DpiFdoHandleQueryFlexibleIovInterface.c)
 *     DpiFdoHandleQueryIndirectDispInterface @ 0x1C0390A10 (DpiFdoHandleQueryIndirectDispInterface.c)
 *     DpiFdoHandleQueryPartitioningDeviceInterface @ 0x1C0390BA0 (DpiFdoHandleQueryPartitioningDeviceInterface.c)
 *     DpiFdoHandleQuerySrIovInterface @ 0x1C0390D30 (DpiFdoHandleQuerySrIovInterface.c)
 *     DpiFdoHandleQueryThermalInterface @ 0x1C0390EF0 (DpiFdoHandleQueryThermalInterface.c)
 *     DpiFdoThermalActiveCooling @ 0x1C0391190 (DpiFdoThermalActiveCooling.c)
 *     DpiFdoThermalPassiveCooling @ 0x1C0391310 (DpiFdoThermalPassiveCooling.c)
 *     DpiKsrStopAdapter @ 0x1C03945BC (DpiKsrStopAdapter.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1C0394794 (DpiAcpiHandleAcpiEvent.c)
 *     DpiLdaLinkDeviceToChain @ 0x1C0396364 (DpiLdaLinkDeviceToChain.c)
 *     DpiLdaUnLinkDeviceFromChain @ 0x1C0396B64 (DpiLdaUnLinkDeviceFromChain.c)
 *     DpiPdoHandleStopDevice @ 0x1C0397690 (DpiPdoHandleStopDevice.c)
 *     DpiPdoPollingWorkItem @ 0x1C03978B0 (DpiPdoPollingWorkItem.c)
 * Callees:
 *     DpiRequestDevicePowerState @ 0x1C0023FC0 (DpiRequestDevicePowerState.c)
 *     DpiEnableD3Requests @ 0x1C016E8A8 (DpiEnableD3Requests.c)
 *     DpiDisableD3Requests @ 0x1C01B4784 (DpiDisableD3Requests.c)
 */

NTSTATUS __fastcall DpiCheckForOutstandingD3Requests(__int64 a1)
{
  int v2; // ebx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  DpiDisableD3Requests(*(_QWORD *)(a1 + 24));
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 4080), &LockHandle);
  v2 = *(_DWORD *)(a1 + 4144);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v2 )
  {
    DpiRequestDevicePowerState(*(_QWORD *)(a1 + 24), 1LL);
    DpiEnableD3Requests(*(_QWORD *)(a1 + 24));
  }
  return KeWaitForSingleObject((PVOID)(a1 + 4096), Executive, 0, 0, 0LL);
}
