/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C00234AC
 * Callers:
 *     ACPIDevicePowerDpc @ 0x1C000F880 (ACPIDevicePowerDpc.c)
 *     ACPIDevicePowerProcessPhase4 @ 0x1C0022A98 (ACPIDevicePowerProcessPhase4.c)
 *     ACPIDevicePowerProcessPhase3 @ 0x1C0022FAC (ACPIDevicePowerProcessPhase3.c)
 *     ACPIEnableEnterACPIMode @ 0x1C0024388 (ACPIEnableEnterACPIMode.c)
 *     ACPIDeviceDiscoverDependencies @ 0x1C0025F00 (ACPIDeviceDiscoverDependencies.c)
 *     ACPIPowerNodeDiscoverDependencies @ 0x1C0025FA8 (ACPIPowerNodeDiscoverDependencies.c)
 *     ACPIDispatchAddDevice @ 0x1C0026D30 (ACPIDispatchAddDevice.c)
 *     ACPIRangeValidatePciResources @ 0x1C0028A0C (ACPIRangeValidatePciResources.c)
 *     ACPIUnload @ 0x1C00524C0 (ACPIUnload.c)
 *     ACPIWriteEventLogEntry @ 0x1C00543C8 (ACPIWriteEventLogEntry.c)
 *     OSNotifyDeviceCheck @ 0x1C0059804 (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C0059E04 (OSNotifyDeviceWakeByGPEEvent.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x1C005A010 (OSNotifyDeviceWakeByInterrupt.c)
 *     ACPIStartNextGlobalLockRequest @ 0x1C005D54C (ACPIStartNextGlobalLockRequest.c)
 *     ACPIIgnoreResourceMapValidation @ 0x1C005E754 (ACPIIgnoreResourceMapValidation.c)
 *     ACPIRootIrpRemoveDevice @ 0x1C005FC60 (ACPIRootIrpRemoveDevice.c)
 *     ACPITableNotifyFreeObject @ 0x1C00605B0 (ACPITableNotifyFreeObject.c)
 *     ACPIVectorConnect @ 0x1C00618E0 (ACPIVectorConnect.c)
 *     ACPIVectorDisconnect @ 0x1C0061BB0 (ACPIVectorDisconnect.c)
 *     ACPIPccLegacyInitialize @ 0x1C008F4C8 (ACPIPccLegacyInitialize.c)
 *     ACPIRootInitialize @ 0x1C008F8C0 (ACPIRootInitialize.c)
 *     ACPIProcessorBuildHiddenApicIds @ 0x1C00907C8 (ACPIProcessorBuildHiddenApicIds.c)
 *     ACPIProcessHardwareInformation @ 0x1C0096E88 (ACPIProcessHardwareInformation.c)
 *     PnpiBiosAddressToIoDescriptor @ 0x1C0097330 (PnpiBiosAddressToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1C00974BC (PnpiBiosAddressQuadToIoDescriptor.c)
 *     IcCheckIrqConflict @ 0x1C00976B0 (IcCheckIrqConflict.c)
 *     PnpBiosResourcesToNtResources @ 0x1C009832C (PnpBiosResourcesToNtResources.c)
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1C009888C (PnpiBiosAddressDoubleToIoDescriptor.c)
 *     IrqArbAddAllocation @ 0x1C0099940 (IrqArbAddAllocation.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C009D25C (IrqArbpFindSuitableRangePci.c)
 *     ACPIInterruptInitialize @ 0x1C009E0C8 (ACPIInterruptInitialize.c)
 *     ACPIEnumerateTables @ 0x1C00A0698 (ACPIEnumerateTables.c)
 *     ACPIProcessorBuildBootApicIds @ 0x1C00A1560 (ACPIProcessorBuildBootApicIds.c)
 *     AcpiExternalTranslateBiosToNtResources @ 0x1C00ADE20 (AcpiExternalTranslateBiosToNtResources.c)
 *     ACPIPccInitialize @ 0x1C00AFC38 (ACPIPccInitialize.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1C00B2EAC (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpCmResourcesToBiosResources @ 0x1C00B3A40 (PnpCmResourcesToBiosResources.c)
 *     ACPIGlobalInitialize @ 0x1C00BC3C4 (ACPIGlobalInitialize.c)
 *     ACPIRegDumpAcpiTables @ 0x1C00BC660 (ACPIRegDumpAcpiTables.c)
 *     OSReadAcpiConfigurationData @ 0x1C00BC964 (OSReadAcpiConfigurationData.c)
 *     ACPILoadProcessFACS @ 0x1C00BD604 (ACPILoadProcessFACS.c)
 *     ACPIInitializeDDBs @ 0x1C00BD6E4 (ACPIInitializeDDBs.c)
 *     ACPILoadProcessRSDT @ 0x1C00BD9F8 (ACPILoadProcessRSDT.c)
 *     ACPIInitialize @ 0x1C00BE48C (ACPIInitialize.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00BE654 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 *     ACPIInitStartACPI @ 0x1C00BEC40 (ACPIInitStartACPI.c)
 *     ACPILoadProcessFADT @ 0x1C00BEF88 (ACPILoadProcessFADT.c)
 *     ACPILoadProcessDSDT @ 0x1C00BF044 (ACPILoadProcessDSDT.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
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
