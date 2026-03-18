/*
 * XREFs of HvlpHvToNtStatus @ 0x14054CA70
 * Callers:
 *     HvlUpdatePerformanceStateCountersForLp @ 0x14039DAE0 (HvlUpdatePerformanceStateCountersForLp.c)
 *     HvlRestoreTime @ 0x1404175E0 (HvlRestoreTime.c)
 *     HvlpReadPerfRegister @ 0x140544A28 (HvlpReadPerfRegister.c)
 *     HvlpWritePerfRegister @ 0x140545BD8 (HvlpWritePerfRegister.c)
 *     HvlDmaAllocateDeviceDomain @ 0x140545D80 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x140545E50 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaConfigureDeviceDomain @ 0x140545F70 (HvlDmaConfigureDeviceDomain.c)
 *     HvlDmaDeleteDeviceDomain @ 0x140546040 (HvlDmaDeleteDeviceDomain.c)
 *     HvlDmaDetachDeviceDomain @ 0x1405460D0 (HvlDmaDetachDeviceDomain.c)
 *     HvlDmaFlushDeviceDomain @ 0x140546150 (HvlDmaFlushDeviceDomain.c)
 *     HvlDmaGetDmaGuardEnabled @ 0x140546200 (HvlDmaGetDmaGuardEnabled.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x140546300 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1405465C0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceLogicalRange @ 0x1405467D0 (HvlDmaUnmapDeviceLogicalRange.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x140546900 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlHvDebuggerPowerHandler @ 0x140547040 (HvlHvDebuggerPowerHandler.c)
 *     HvlMapDeviceInterrupt @ 0x140547570 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyAllProcessorsStarted @ 0x140547850 (HvlNotifyAllProcessorsStarted.c)
 *     HvlRegisterDeviceId @ 0x140547D00 (HvlRegisterDeviceId.c)
 *     HvlRetargetDeviceInterrupt @ 0x140547F80 (HvlRetargetDeviceInterrupt.c)
 *     HvlSetRootFaultReportingReady @ 0x1405484D0 (HvlSetRootFaultReportingReady.c)
 *     HvlSvmAcknowledgePageRequest @ 0x1405486E0 (HvlSvmAcknowledgePageRequest.c)
 *     HvlSvmAttachPasidSpace @ 0x140548790 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmClearPrqStalled @ 0x140548880 (HvlSvmClearPrqStalled.c)
 *     HvlSvmCreatePasidSpace @ 0x1405488E0 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x140548960 (HvlSvmCreatePrQueue.c)
 *     HvlSvmDeletePrQueue @ 0x140548A40 (HvlSvmDeletePrQueue.c)
 *     HvlSvmDetachPasidSpace @ 0x140548A90 (HvlSvmDetachPasidSpace.c)
 *     HvlSvmDisablePasid @ 0x140548B10 (HvlSvmDisablePasid.c)
 *     HvlSvmEnablePasid @ 0x140548B70 (HvlSvmEnablePasid.c)
 *     HvlSvmGetDeviceCapabilities @ 0x140548C30 (HvlSvmGetDeviceCapabilities.c)
 *     HvlSvmSetDeviceEnabled @ 0x140548F40 (HvlSvmSetDeviceEnabled.c)
 *     HvlSvmSetPasidAddressSpace @ 0x140548FF0 (HvlSvmSetPasidAddressSpace.c)
 *     HvlUnblockDefaultDma @ 0x140549070 (HvlUnblockDefaultDma.c)
 *     HvlUnmapDeviceInterrupt @ 0x140549100 (HvlUnmapDeviceInterrupt.c)
 *     HvlUnregisterDeviceId @ 0x1405491B0 (HvlUnregisterDeviceId.c)
 *     HvlpAttachRootSvmDevice @ 0x140549218 (HvlpAttachRootSvmDevice.c)
 *     HvlpDetachRootSvmDevice @ 0x1405492D8 (HvlpDetachRootSvmDevice.c)
 *     HvlpAddRemovePhysicalMemory @ 0x140653AA4 (HvlpAddRemovePhysicalMemory.c)
 *     HvlChangeIsolatedMemoryVisibility @ 0x140653C40 (HvlChangeIsolatedMemoryVisibility.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x140653D68 (HvlGetSparseGpaPagesAccessState.c)
 *     HvlMapGpaPages @ 0x140653EC4 (HvlMapGpaPages.c)
 *     HvlMapSparseGpaPages @ 0x140654038 (HvlMapSparseGpaPages.c)
 *     HvlNotifyPageHeat @ 0x14065416C (HvlNotifyPageHeat.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140931378 (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlpHvToNtStatus(unsigned __int16 a1)
{
  switch ( a1 )
  {
    case 0u:
      return 0LL;
    case 0xBu:
    case 0x1Du:
      return 3221225626LL;
    case 0x59u:
      return 3473497LL;
  }
  return a1 | 0xC0350000;
}
