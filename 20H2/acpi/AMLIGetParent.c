/*
 * XREFs of AMLIGetParent @ 0x1C001B0E8
 * Callers:
 *     OSNotifyCreateProcessor @ 0x1C0015FCC (OSNotifyCreateProcessor.c)
 *     IsPciDeviceWorker @ 0x1C0016480 (IsPciDeviceWorker.c)
 *     IsPciBusAsyncWorker @ 0x1C00174B0 (IsPciBusAsyncWorker.c)
 *     GetOpRegionScope @ 0x1C00179F4 (GetOpRegionScope.c)
 *     OSNotifyCreateOperationRegion @ 0x1C0018088 (OSNotifyCreateOperationRegion.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C0018240 (PciConfigSpaceHandlerWorker.c)
 *     OSNotifyCreateDevice @ 0x1C001B15C (OSNotifyCreateDevice.c)
 *     AMLIIterateParentNext @ 0x1C002EF94 (AMLIIterateParentNext.c)
 *     CmosConfigSpaceHandler @ 0x1C004F130 (CmosConfigSpaceHandler.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C0050E60 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C0051520 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C00516D0 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     OSNotifyDeviceCheck @ 0x1C0058934 (OSNotifyDeviceCheck.c)
 *     AcpiSetupNativeMethodContext @ 0x1C005B830 (AcpiSetupNativeMethodContext.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C005C8C0 (InternalRawAccessOpRegionHandler.c)
 *     ACPIRootIrpQueryPower @ 0x1C005EB20 (ACPIRootIrpQueryPower.c)
 *     ACPIRootInitialize @ 0x1C0097C9C (ACPIRootInitialize.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C00ACA10 (AcpiArblibAllocateArbiterInstance.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIGetParent(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rbx

  v2 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  if ( v3 )
  {
    dword_1C0082908 = 0;
    v3 += 120LL;
    pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v2);
  return v3;
}
