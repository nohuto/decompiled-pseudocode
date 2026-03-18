/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C001D52C
 * Callers:
 *     ACPIStartNextGlobalLockRequest @ 0x1C000E720 (ACPIStartNextGlobalLockRequest.c)
 *     ACPIEnableEnterACPIMode @ 0x1C000FB4C (ACPIEnableEnterACPIMode.c)
 *     ACPIDevicePowerProcessPhase3 @ 0x1C001345C (ACPIDevicePowerProcessPhase3.c)
 *     ACPIDevicePowerDpc @ 0x1C001FDD0 (ACPIDevicePowerDpc.c)
 *     ACPIDispatchAddDevice @ 0x1C0025000 (ACPIDispatchAddDevice.c)
 *     ACPIDeviceDiscoverDependencies @ 0x1C0029414 (ACPIDeviceDiscoverDependencies.c)
 *     ACPIPowerNodeDiscoverDependencies @ 0x1C00294BC (ACPIPowerNodeDiscoverDependencies.c)
 *     ACPIRangeValidatePciResources @ 0x1C002B020 (ACPIRangeValidatePciResources.c)
 *     ACPIDevicePowerProcessPhase4 @ 0x1C002B774 (ACPIDevicePowerProcessPhase4.c)
 *     ACPIUnload @ 0x1C0052D80 (ACPIUnload.c)
 *     ACPIWriteEventLogEntry @ 0x1C0054B08 (ACPIWriteEventLogEntry.c)
 *     OSNotifyDeviceCheck @ 0x1C0058934 (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C0058DE8 (OSNotifyDeviceWakeByGPEEvent.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x1C0059008 (OSNotifyDeviceWakeByInterrupt.c)
 *     ACPIIgnoreResourceMapValidation @ 0x1C005D8B4 (ACPIIgnoreResourceMapValidation.c)
 *     ACPIRootIrpRemoveDevice @ 0x1C005ECD0 (ACPIRootIrpRemoveDevice.c)
 *     ACPITableNotifyFreeObject @ 0x1C005F630 (ACPITableNotifyFreeObject.c)
 *     ACPIVectorConnect @ 0x1C0060990 (ACPIVectorConnect.c)
 *     ACPIVectorDisconnect @ 0x1C0060C60 (ACPIVectorDisconnect.c)
 *     PnpCmResourcesToBiosResources @ 0x1C0090640 (PnpCmResourcesToBiosResources.c)
 *     ACPIProcessorBuildBootApicIds @ 0x1C0090A84 (ACPIProcessorBuildBootApicIds.c)
 *     ACPIProcessorBuildHiddenApicIds @ 0x1C0090FA4 (ACPIProcessorBuildHiddenApicIds.c)
 *     IrqArbAddAllocation @ 0x1C0092500 (IrqArbAddAllocation.c)
 *     IcCheckIrqConflict @ 0x1C0095D40 (IcCheckIrqConflict.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C00967A8 (IrqArbpFindSuitableRangePci.c)
 *     ACPIInterruptInitialize @ 0x1C0097C64 (ACPIInterruptInitialize.c)
 *     ACPIRootInitialize @ 0x1C0097C9C (ACPIRootInitialize.c)
 *     ACPIPccLegacyInitialize @ 0x1C0097FC0 (ACPIPccLegacyInitialize.c)
 *     PnpBiosResourcesToNtResources @ 0x1C009CBE0 (PnpBiosResourcesToNtResources.c)
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1C009D38C (PnpiBiosAddressDoubleToIoDescriptor.c)
 *     ACPIProcessHardwareInformation @ 0x1C009EEF4 (ACPIProcessHardwareInformation.c)
 *     PnpiBiosAddressToIoDescriptor @ 0x1C00A23D8 (PnpiBiosAddressToIoDescriptor.c)
 *     ACPIEnumerateTables @ 0x1C00A2B20 (ACPIEnumerateTables.c)
 *     AcpiExternalTranslateBiosToNtResources @ 0x1C00AEEB0 (AcpiExternalTranslateBiosToNtResources.c)
 *     ACPIPccInitialize @ 0x1C00B0468 (ACPIPccInitialize.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1C00B32DC (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1C00B3724 (PnpiBiosAddressQuadToIoDescriptor.c)
 *     ACPIInitStartACPI @ 0x1C00BB3C4 (ACPIInitStartACPI.c)
 *     ACPIGlobalInitialize @ 0x1C00BC124 (ACPIGlobalInitialize.c)
 *     OSReadAcpiConfigurationData @ 0x1C00BC24C (OSReadAcpiConfigurationData.c)
 *     ACPIRegDumpAcpiTables @ 0x1C00BC410 (ACPIRegDumpAcpiTables.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00BDE1C (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 *     ACPILoadProcessRSDT @ 0x1C00BE5D4 (ACPILoadProcessRSDT.c)
 *     ACPIInitializeDDBs @ 0x1C00BE840 (ACPIInitializeDDBs.c)
 *     ACPILoadProcessFACS @ 0x1C00BE9B8 (ACPILoadProcessFACS.c)
 *     ACPILoadProcessDSDT @ 0x1C00BEA98 (ACPILoadProcessDSDT.c)
 *     ACPILoadProcessFADT @ 0x1C00BEB5C (ACPILoadProcessFADT.c)
 *     ACPIInitialize @ 0x1C00BEBFC (ACPIInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5)
{
  unsigned __int64 v7; // rdi
  unsigned int v9; // esi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-28h]

  v7 = (unsigned __int64)a3 >> 16;
  v9 = a2;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v7 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v7),
      43LL,
      a5,
      a4,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, v9, a3, a5, v12, 0LL);
}
