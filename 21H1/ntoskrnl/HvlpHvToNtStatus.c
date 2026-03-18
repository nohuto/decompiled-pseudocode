/*
 * XREFs of HvlpHvToNtStatus @ 0x1404F5274
 * Callers:
 *     HvlUpdatePerformanceStateCountersForLp @ 0x14038CC40 (HvlUpdatePerformanceStateCountersForLp.c)
 *     HvlSetRootFaultReportingReady @ 0x1403EC110 (HvlSetRootFaultReportingReady.c)
 *     HvlpReadPerfRegister @ 0x1404ED964 (HvlpReadPerfRegister.c)
 *     HvlpWritePerfRegister @ 0x1404EE96C (HvlpWritePerfRegister.c)
 *     HvlDmaAllocateDeviceDomain @ 0x1404EE9F0 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x1404EEAA0 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaDeleteDeviceDomain @ 0x1404EEBB0 (HvlDmaDeleteDeviceDomain.c)
 *     HvlDmaDetachDeviceDomain @ 0x1404EEC40 (HvlDmaDetachDeviceDomain.c)
 *     HvlDmaGetDmaGuardEnabled @ 0x1404EECB0 (HvlDmaGetDmaGuardEnabled.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x1404EEDB0 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1404EF050 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceLogicalRange @ 0x1404EF260 (HvlDmaUnmapDeviceLogicalRange.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x1404EF390 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlHvDebuggerPowerHandler @ 0x1404EFA70 (HvlHvDebuggerPowerHandler.c)
 *     HvlMapDeviceInterrupt @ 0x1404EFF90 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyAllProcessorsStarted @ 0x1404F025C (HvlNotifyAllProcessorsStarted.c)
 *     HvlRegisterDeviceId @ 0x1404F06E0 (HvlRegisterDeviceId.c)
 *     HvlRetargetDeviceInterrupt @ 0x1404F08A0 (HvlRetargetDeviceInterrupt.c)
 *     HvlSvmAcknowledgePageRequest @ 0x1404F0F60 (HvlSvmAcknowledgePageRequest.c)
 *     HvlSvmAttachPasidSpace @ 0x1404F1010 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmClearPrqStalled @ 0x1404F1100 (HvlSvmClearPrqStalled.c)
 *     HvlSvmCreatePasidSpace @ 0x1404F1160 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x1404F11E0 (HvlSvmCreatePrQueue.c)
 *     HvlSvmDeletePrQueue @ 0x1404F12C0 (HvlSvmDeletePrQueue.c)
 *     HvlSvmDetachPasidSpace @ 0x1404F1310 (HvlSvmDetachPasidSpace.c)
 *     HvlSvmDisablePasid @ 0x1404F1390 (HvlSvmDisablePasid.c)
 *     HvlSvmEnablePasid @ 0x1404F13F0 (HvlSvmEnablePasid.c)
 *     HvlSvmGetDeviceCapabilities @ 0x1404F14B0 (HvlSvmGetDeviceCapabilities.c)
 *     HvlSvmSetDeviceEnabled @ 0x1404F17B0 (HvlSvmSetDeviceEnabled.c)
 *     HvlSvmSetPasidAddressSpace @ 0x1404F1860 (HvlSvmSetPasidAddressSpace.c)
 *     HvlUnmapDeviceInterrupt @ 0x1404F18E0 (HvlUnmapDeviceInterrupt.c)
 *     HvlUnregisterDeviceId @ 0x1404F1990 (HvlUnregisterDeviceId.c)
 *     HvlpAttachRootSvmDevice @ 0x1404F19F8 (HvlpAttachRootSvmDevice.c)
 *     HvlpDetachRootSvmDevice @ 0x1404F1AB0 (HvlpDetachRootSvmDevice.c)
 *     HvlpAddPhysicalMemory @ 0x1405C395C (HvlpAddPhysicalMemory.c)
 *     HvlNotifyPageHeat @ 0x1405C3A90 (HvlNotifyPageHeat.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x1405C3D0C (HvlGetSparseGpaPagesAccessState.c)
 *     HvlMapGpaPages @ 0x1405C3E64 (HvlMapGpaPages.c)
 *     HvlMapSparseGpaPages @ 0x1405C3FB8 (HvlMapSparseGpaPages.c)
 *     HvlpCondenseMicrocode @ 0x14088A528 (HvlpCondenseMicrocode.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14088A59C (HvlpDynamicUpdateMicrocode.c)
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
