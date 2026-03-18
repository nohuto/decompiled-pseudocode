/*
 * XREFs of AMLIGetParent @ 0x1C000A040
 * Callers:
 *     OSNotifyCreateProcessor @ 0x1C0005604 (OSNotifyCreateProcessor.c)
 *     IsPciDeviceWorker @ 0x1C0007A10 (IsPciDeviceWorker.c)
 *     AMLIIterateParentNext @ 0x1C00083A0 (AMLIIterateParentNext.c)
 *     OSNotifyCreateDevice @ 0x1C0009C54 (OSNotifyCreateDevice.c)
 *     OSNotifyCreateOperationRegion @ 0x1C000A0B4 (OSNotifyCreateOperationRegion.c)
 *     IsPciBusAsyncWorker @ 0x1C000B380 (IsPciBusAsyncWorker.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C000C920 (PciConfigSpaceHandlerWorker.c)
 *     GetOpRegionScope @ 0x1C001CE9C (GetOpRegionScope.c)
 *     CmosConfigSpaceHandler @ 0x1C004E110 (CmosConfigSpaceHandler.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C0050360 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C0050C20 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C0050DC0 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     OSNotifyDeviceCheck @ 0x1C0059804 (OSNotifyDeviceCheck.c)
 *     AcpiSetupNativeMethodContext @ 0x1C005C860 (AcpiSetupNativeMethodContext.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C005D960 (InternalRawAccessOpRegionHandler.c)
 *     ACPIRootIrpQueryPower @ 0x1C005FAC0 (ACPIRootIrpQueryPower.c)
 *     ACPIRootInitialize @ 0x1C008F8C0 (ACPIRootInitialize.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C00ABA30 (AcpiArblibAllocateArbiterInstance.c)
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
    dword_1C0081AC8 = 0;
    v3 += 120LL;
    byte_1C0081ACC = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v2);
  return v3;
}
