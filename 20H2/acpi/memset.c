/*
 * XREFs of memset @ 0x1C0032180
 * Callers:
 *     RtlStringCbPrintfExW @ 0x1C00023D0 (RtlStringCbPrintfExW.c)
 *     AsyncEvalObject @ 0x1C00054D0 (AsyncEvalObject.c)
 *     CreateNameSpaceObject @ 0x1C0006360 (CreateNameSpaceObject.c)
 *     ParseCall @ 0x1C00067A0 (ParseCall.c)
 *     ParseTerm @ 0x1C00070C0 (ParseTerm.c)
 *     ParseScope @ 0x1C00084D0 (ParseScope.c)
 *     HeapAlloc @ 0x1C0008A70 (HeapAlloc.c)
 *     GetObjectPathNoLock @ 0x1C00093E0 (GetObjectPathNoLock.c)
 *     Buffer @ 0x1C000AF80 (Buffer.c)
 *     ACPIIoctlEvalPreProcessingV1 @ 0x1C000B234 (ACPIIoctlEvalPreProcessingV1.c)
 *     AcpiIoctlArgumentToPackageObjV1 @ 0x1C000BF08 (AcpiIoctlArgumentToPackageObjV1.c)
 *     ACPIGetConvertToHardwareIDWide @ 0x1C000C34C (ACPIGetConvertToHardwareIDWide.c)
 *     ACPIWakeInitializePmeRouting @ 0x1C000C798 (ACPIWakeInitializePmeRouting.c)
 *     ACPIThermalQueryCoolingInterfaces @ 0x1C000E3DC (ACPIThermalQueryCoolingInterfaces.c)
 *     LinkNodeCrackPrt @ 0x1C000E8B4 (LinkNodeCrackPrt.c)
 *     InitMutex @ 0x1C00101B0 (InitMutex.c)
 *     SetLogSize @ 0x1C0010268 (SetLogSize.c)
 *     ACPIIoctlEnumChildrenPopulateOutputBuffer @ 0x1C0013BE0 (ACPIIoctlEnumChildrenPopulateOutputBuffer.c)
 *     FindNSObj @ 0x1C0013EF0 (FindNSObj.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C00156A0 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C0015BC4 (ACPIBuildDevicePowerNodes.c)
 *     EnableDisableCMOSRegions @ 0x1C00162A0 (EnableDisableCMOSRegions.c)
 *     IsPciBusAsync @ 0x1C00173B0 (IsPciBusAsync.c)
 *     IsPciDevice @ 0x1C0017BD0 (IsPciDevice.c)
 *     PciConfigInternal @ 0x1C0017EFC (PciConfigInternal.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C0018240 (PciConfigSpaceHandlerWorker.c)
 *     ACPIDetectPdoDevices @ 0x1C00190D8 (ACPIDetectPdoDevices.c)
 *     ACPIDetectDockDevices @ 0x1C001A5A0 (ACPIDetectDockDevices.c)
 *     ACPIBuildDeviceRequest @ 0x1C001B20C (ACPIBuildDeviceRequest.c)
 *     ACPIBuildDeviceExtension @ 0x1C001B83C (ACPIBuildDeviceExtension.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C001C4FC (ACPIBuildSpecialSynchronizationRequest.c)
 *     ACPIDeviceInitializePowerRequest @ 0x1C001C784 (ACPIDeviceInitializePowerRequest.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C001F2C0 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessRunMethodPhaseRecurse @ 0x1C001F5A0 (ACPIBuildProcessRunMethodPhaseRecurse.c)
 *     Package @ 0x1C00210C0 (Package.c)
 *     PushCall @ 0x1C002176C (PushCall.c)
 *     Field @ 0x1C00218B0 (Field.c)
 *     ParseField @ 0x1C0021AD0 (ParseField.c)
 *     ParseOpcode @ 0x1C00222D0 (ParseOpcode.c)
 *     CopyObjBuffer @ 0x1C0022A08 (CopyObjBuffer.c)
 *     Processor @ 0x1C00230D0 (Processor.c)
 *     NewObjOwner @ 0x1C00233C8 (NewObjOwner.c)
 *     IndexField @ 0x1C0023590 (IndexField.c)
 *     PowerRes @ 0x1C0023950 (PowerRes.c)
 *     NewContext @ 0x1C0023D88 (NewContext.c)
 *     InitContext @ 0x1C0023E84 (InitContext.c)
 *     NewGlobalHeap @ 0x1C0024010 (NewGlobalHeap.c)
 *     ReadField @ 0x1C00241C0 (ReadField.c)
 *     ACPIDispatchAddDevice @ 0x1C0025000 (ACPIDispatchAddDevice.c)
 *     ACPIBuildRunMethodRequest @ 0x1C0025894 (ACPIBuildRunMethodRequest.c)
 *     ACPIGpeClearEventMasks @ 0x1C00259E0 (ACPIGpeClearEventMasks.c)
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C0026138 (ACPIWakeRemoveDevicesAndUpdate.c)
 *     ACPIGetProcessorIDWide @ 0x1C0027480 (ACPIGetProcessorIDWide.c)
 *     RtlStringCchPrintfExA @ 0x1C0027910 (RtlStringCchPrintfExA.c)
 *     ACPIGetConvertToCompatibleIDWide @ 0x1C0027AF8 (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIGetConvertToPnpIDWide @ 0x1C0027F80 (ACPIGetConvertToPnpIDWide.c)
 *     ACPIGetConvertToDeviceIDWide @ 0x1C0028108 (ACPIGetConvertToDeviceIDWide.c)
 *     ACPIGetConvertToInstanceIDWide @ 0x1C002840C (ACPIGetConvertToInstanceIDWide.c)
 *     Method @ 0x1C00287C0 (Method.c)
 *     RtlStringCchPrintfExW @ 0x1C0028A3C (RtlStringCchPrintfExW.c)
 *     PushTerm @ 0x1C0028CB4 (PushTerm.c)
 *     CreateXField @ 0x1C0028F48 (CreateXField.c)
 *     ACPIIoctlEvalPreProcessingV1Ex @ 0x1C0029954 (ACPIIoctlEvalPreProcessingV1Ex.c)
 *     OpRegion @ 0x1C0029C40 (OpRegion.c)
 *     NewNameSpaceObject @ 0x1C002BAD8 (NewNameSpaceObject.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C002C690 (ACPIBuildSynchronizationRequestInternal.c)
 *     ACPIInternalQueryExtendedAddress @ 0x1C002D140 (ACPIInternalQueryExtendedAddress.c)
 *     IrqLibpGetVectorInput @ 0x1C002DB30 (IrqLibpGetVectorInput.c)
 *     ACPIBuildPowerResourceRequest @ 0x1C002DD28 (ACPIBuildPowerResourceRequest.c)
 *     ACPIBuildPowerResourceExtension @ 0x1C002DDF8 (ACPIBuildPowerResourceExtension.c)
 *     ACPIBusAndFilterIrpQueryContainerId @ 0x1C002DEF8 (ACPIBusAndFilterIrpQueryContainerId.c)
 *     GetPciAddress @ 0x1C002E9AC (GetPciAddress.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C002F304 (ACPIWakeEnableDisableAsync.c)
 *     ACPIBuildThermalZoneRequest @ 0x1C002F780 (ACPIBuildThermalZoneRequest.c)
 *     ACPIBuildThermalZoneExtension @ 0x1C002F864 (ACPIBuildThermalZoneExtension.c)
 *     ACPIBuildDelayedDependencyRequest @ 0x1C0030330 (ACPIBuildDelayedDependencyRequest.c)
 *     ACPIWmiRegisterGuids @ 0x1C00308CC (ACPIWmiRegisterGuids.c)
 *     AcpiHandleDeviceFirmwareLock @ 0x1C0030C10 (AcpiHandleDeviceFirmwareLock.c)
 *     AcpiDeviceResetInterface @ 0x1C0030F20 (AcpiDeviceResetInterface.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1C004AEFC (RtlStringExHandleOtherFlagsW.c)
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1C004CFB0 (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPICMLidPowerStateCallBack @ 0x1C004ECE0 (ACPICMLidPowerStateCallBack.c)
 *     CmosConfigSpaceHandler @ 0x1C004F130 (CmosConfigSpaceHandler.c)
 *     ACPIDetectEjectDevices @ 0x1C004F470 (ACPIDetectEjectDevices.c)
 *     PerformHandlerInvocation @ 0x1C004FDB8 (PerformHandlerInvocation.c)
 *     ACPIEcOpRegionHandler @ 0x1C00533B0 (ACPIEcOpRegionHandler.c)
 *     ACPIEcCreateEcData @ 0x1C00536B8 (ACPIEcCreateEcData.c)
 *     ACPIEcLogError @ 0x1C0054148 (ACPIEcLogError.c)
 *     ACPIWriteEventLogEntry @ 0x1C0054B08 (ACPIWriteEventLogEntry.c)
 *     ACPIGetConvertToStringWide @ 0x1C0055AB8 (ACPIGetConvertToStringWide.c)
 *     ACPIGetConvertToStringWideWithPrepend @ 0x1C0055BAC (ACPIGetConvertToStringWideWithPrepend.c)
 *     RtlStringExHandleOtherFlagsA @ 0x1C0055D30 (RtlStringExHandleOtherFlagsA.c)
 *     ACPIGpeHalEnableDisableEvents @ 0x1C0055DF0 (ACPIGpeHalEnableDisableEvents.c)
 *     ACPIDeviceIdMutiStringMatchCallback @ 0x1C0055F80 (ACPIDeviceIdMutiStringMatchCallback.c)
 *     ACPIQueryGedDeviceInterface @ 0x1C00566FC (ACPIQueryGedDeviceInterface.c)
 *     ACPIInternalEvaluateOST @ 0x1C0056B24 (ACPIInternalEvaluateOST.c)
 *     ACPIIoctlEvalPreProcessingV2 @ 0x1C00577E8 (ACPIIoctlEvalPreProcessingV2.c)
 *     ACPIIoctlEvalPreProcessingV2Ex @ 0x1C0057B58 (ACPIIoctlEvalPreProcessingV2Ex.c)
 *     ACPIIoctlGetDeviceInformation @ 0x1C0057EBC (ACPIIoctlGetDeviceInformation.c)
 *     AcpiIoctlArgumentToPackageObjV2 @ 0x1C00582B4 (AcpiIoctlArgumentToPackageObjV2.c)
 *     AcpiAllocateNativeMethodOutputBuffer @ 0x1C005A6F0 (AcpiAllocateNativeMethodOutputBuffer.c)
 *     AcpiConvertPackageArgumentToPackageObj @ 0x1C005ACC8 (AcpiConvertPackageArgumentToPackageObj.c)
 *     AcpiSetupNativeMethodContext @ 0x1C005B830 (AcpiSetupNativeMethodContext.c)
 *     EnableDisableDeviceRegionSpace @ 0x1C005C6F0 (EnableDisableDeviceRegionSpace.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C005C8C0 (InternalRawAccessOpRegionHandler.c)
 *     PnpiBiosInterruptCombineToIoDescriptor @ 0x1C005E51C (PnpiBiosInterruptCombineToIoDescriptor.c)
 *     ACPIVectorGetEntry @ 0x1C0060E8C (ACPIVectorGetEntry.c)
 *     ACPIAssociateWakeInterrupt @ 0x1C0061028 (ACPIAssociateWakeInterrupt.c)
 *     ACPIWakeDisableAsync @ 0x1C006181C (ACPIWakeDisableAsync.c)
 *     AcpiRecordBlackboxInformationWorker @ 0x1C0062AB0 (AcpiRecordBlackboxInformationWorker.c)
 *     Simulator_AllocAndInitTestData @ 0x1C006368C (Simulator_AllocAndInitTestData.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C00641B8 (AMLICreateNativeNamespaceObject.c)
 *     FreeObjOwner @ 0x1C0064FEC (FreeObjOwner.c)
 *     ParseDLMObjectInternal @ 0x1C0065718 (ParseDLMObjectInternal.c)
 *     Debugger @ 0x1C0066AA8 (Debugger.c)
 *     BankField @ 0x1C0066E40 (BankField.c)
 *     InitEvent @ 0x1C00671E0 (InitEvent.c)
 *     LinkNodepRunSrsAsync @ 0x1C006C040 (LinkNodepRunSrsAsync.c)
 *     ACPIBusIrpQueryHardwareId @ 0x1C008F410 (ACPIBusIrpQueryHardwareId.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1C008F9E0 (ACPIRegReadAMLRegistryEntry.c)
 *     PcisuppInitializePciRouting @ 0x1C00904A0 (PcisuppInitializePciRouting.c)
 *     ACPIThermalBuildConstraints @ 0x1C00918C0 (ACPIThermalBuildConstraints.c)
 *     IrqArbpPrepareForTestOrConflict @ 0x1C0092040 (IrqArbpPrepareForTestOrConflict.c)
 *     IrqTranslatepQueryDeviceIrql @ 0x1C00921D4 (IrqTranslatepQueryDeviceIrql.c)
 *     IrqArbpSetDeviceProperties @ 0x1C0092268 (IrqArbpSetDeviceProperties.c)
 *     IrqArbAddAllocation @ 0x1C0092500 (IrqArbAddAllocation.c)
 *     PcisuppIsPciDevice @ 0x1C00938C0 (PcisuppIsPciDevice.c)
 *     IrqPolicyGetDevicePolicy @ 0x1C0094728 (IrqPolicyGetDevicePolicy.c)
 *     ArbBootAllocation @ 0x1C00951A0 (ArbBootAllocation.c)
 *     ArbpBuildAllocationStack @ 0x1C0095360 (ArbpBuildAllocationStack.c)
 *     MsiGetTargetInfo @ 0x1C0095554 (MsiGetTargetInfo.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C0095FF0 (ACPIBusIrpQueryDeviceId.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C00963FC (ACPIBusIrpQueryCompatibleId.c)
 *     AcpiIrqLibSetupSciInterrupt @ 0x1C0096DF4 (AcpiIrqLibSetupSciInterrupt.c)
 *     IcAddSecondaryIcInstance @ 0x1C0097628 (IcAddSecondaryIcInstance.c)
 *     ProcessorAddInstance @ 0x1C0097870 (ProcessorAddInstance.c)
 *     ACPIPccLegacyInitialize @ 0x1C0097FC0 (ACPIPccLegacyInitialize.c)
 *     AcpiQueryPciBusInterface @ 0x1C00987F0 (AcpiQueryPciBusInterface.c)
 *     ACPIFilterQueryBusD3ColdSupport @ 0x1C00989DC (ACPIFilterQueryBusD3ColdSupport.c)
 *     ACPIBusIommuBusInterface @ 0x1C00992B4 (ACPIBusIommuBusInterface.c)
 *     ACPIQueryPhysicalDeviceLocation @ 0x1C009981C (ACPIQueryPhysicalDeviceLocation.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0099BE8 (ACPIAmliEvaluateDsm.c)
 *     ACPIAmliEvaluateOsc @ 0x1C009A080 (ACPIAmliEvaluateOsc.c)
 *     ACPIThermalStartDevice @ 0x1C009A220 (ACPIThermalStartDevice.c)
 *     PnpIoResourceListToCmResourceList @ 0x1C009B7C0 (PnpIoResourceListToCmResourceList.c)
 *     PnpBiosUpdateResourceListWithSidebandResources @ 0x1C009BB8C (PnpBiosUpdateResourceListWithSidebandResources.c)
 *     ACPIInternalGrowBuffer @ 0x1C009BC68 (ACPIInternalGrowBuffer.c)
 *     PnpiGrowResourceList @ 0x1C009C8D8 (PnpiGrowResourceList.c)
 *     PnpiGrowResourceDescriptor @ 0x1C009CACC (PnpiGrowResourceDescriptor.c)
 *     PnpBiosResourcesToNtResources @ 0x1C009CBE0 (PnpBiosResourcesToNtResources.c)
 *     EnableDisableRegions @ 0x1C009D614 (EnableDisableRegions.c)
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1C009DA84 (ACPIDetectCouldExtensionBeInRelation.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C009E218 (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C009ED54 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     ACPIProcessHardwareInformation @ 0x1C009EEF4 (ACPIProcessHardwareInformation.c)
 *     AcpiSetupNativeMethodInterface @ 0x1C009F2B0 (AcpiSetupNativeMethodInterface.c)
 *     QueryExternalTranslatorInterface @ 0x1C009F5C4 (QueryExternalTranslatorInterface.c)
 *     ArbInitializeOrderingList @ 0x1C00A0270 (ArbInitializeOrderingList.c)
 *     ACPIMatchHardwareId @ 0x1C00A10FC (ACPIMatchHardwareId.c)
 *     RegisterOperationRegionHandler @ 0x1C00A1990 (RegisterOperationRegionHandler.c)
 *     ACPIBusIrpQueryInstanceId @ 0x1C00A1CE0 (ACPIBusIrpQueryInstanceId.c)
 *     ACPIInternalGetDeviceCapabilities @ 0x1C00A1F4C (ACPIInternalGetDeviceCapabilities.c)
 *     ACPICreatePhysicalDeviceLocationDescriptor @ 0x1C00A30F8 (ACPICreatePhysicalDeviceLocationDescriptor.c)
 *     WppTraceCallback @ 0x1C00AC710 (WppTraceCallback.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C00ACA10 (AcpiArblibAllocateArbiterInstance.c)
 *     ACPIEcConnectGpioInterrupt @ 0x1C00AE534 (ACPIEcConnectGpioInterrupt.c)
 *     ACPIInitMultiString @ 0x1C00AF9B4 (ACPIInitMultiString.c)
 *     EnableDisableIPMIRegions @ 0x1C00AFD70 (EnableDisableIPMIRegions.c)
 *     ACPIEvaluateSpareDsm @ 0x1C00B0000 (ACPIEvaluateSpareDsm.c)
 *     ACPIPccInitialize @ 0x1C00B0468 (ACPIPccInitialize.c)
 *     UnRegisterOperationRegionHandler @ 0x1C00B1954 (UnRegisterOperationRegionHandler.c)
 *     ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1C00B1F58 (ACPIRegGetTableFromSimulatorRegistryEntry.c)
 *     ACPIConnectWakeInterrupt @ 0x1C00B5EF4 (ACPIConnectWakeInterrupt.c)
 *     IrqLibAllocateMessageTarget @ 0x1C00B6160 (IrqLibAllocateMessageTarget.c)
 *     IrqArbpQueryConflictIsa @ 0x1C00B720C (IrqArbpQueryConflictIsa.c)
 *     IcAddGicInstance @ 0x1C00B72C0 (IcAddGicInstance.c)
 *     ArbQueryConflict @ 0x1C00B7D60 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x1C00B8140 (ArbRetestAllocation.c)
 *     DriverEntry @ 0x1C00BB81C (DriverEntry.c)
 *     AMLIInitialize @ 0x1C00BCBA0 (AMLIInitialize.c)
 *     ACPIInitReadRegistryKeys @ 0x1C00BD18C (ACPIInitReadRegistryKeys.c)
 *     IcAddApicInstance @ 0x1C00BD6D4 (IcAddApicInstance.c)
 *     OSInterruptVector @ 0x1C00BD810 (OSInterruptVector.c)
 *     InitIllegalIOAddressListFromHAL @ 0x1C00BDB60 (InitIllegalIOAddressListFromHAL.c)
 *     ProcessorInitGlobalState @ 0x1C00BEEF4 (ProcessorInitGlobalState.c)
 *     Simulator_NotifyTablesAreLoaded @ 0x1C00C056C (Simulator_NotifyTablesAreLoaded.c)
 * Callees:
 *     <none>
 */

void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  __int64 v4; // rdx
  size_t v5; // r9
  char *v6; // rcx
  size_t v7; // r8
  __m128 v8; // xmm0
  char *v9; // r8
  __m128 *v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 i; // r9
  __int64 v14; // r8

  result = a1;
  if ( Size < 8 )
  {
    for ( ; Size; --Size )
      *((char *)a1 + Size - 1) = Val;
  }
  else
  {
    v4 = 0x101010101010101LL * (unsigned __int8)Val;
    if ( Size >= 0x4F )
    {
      v8 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
      *(__m128 *)a1 = v8;
      v9 = (char *)a1 + Size;
      v10 = (__m128 *)(((unsigned __int64)a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
      v11 = v9 - (char *)v10;
      v12 = v11 >> 7;
      if ( v11 >> 7 )
      {
        do
        {
          *v10 = v8;
          v10[1] = v8;
          v10 += 8;
          v10[-6] = v8;
          v10[-5] = v8;
          --v12;
          v10[-4] = v8;
          v10[-3] = v8;
          v10[-2] = v8;
          v10[-1] = v8;
        }
        while ( v12 );
        v11 &= 0x7Fu;
      }
      for ( i = v11 >> 4; i; --i )
        *v10++ = v8;
      v14 = v11 & 0xF;
      if ( v14 )
        *(__m128 *)((char *)v10 + v14 - 16) = v8;
    }
    else
    {
      v5 = Size & 0x78;
      v6 = (char *)a1 + (Size & 0xFFFFFFFFFFFFFFF8uLL);
      do
      {
        *(_QWORD *)((char *)result + v5 - 8) = v4;
        v5 -= 8LL;
      }
      while ( v5 );
      v7 = Size & 7;
      if ( v7 )
        *(_QWORD *)&v6[v7 - 8] = v4;
    }
  }
  return result;
}
