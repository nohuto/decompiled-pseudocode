/*
 * XREFs of ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C00071F0
 * Callers:
 *     ACPIDetectFilterDevices @ 0x1C0006A34 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C0006CE8 (ACPIDetectPdoDevices.c)
 *     ACPIDetectDuplicateHID @ 0x1C0009170 (ACPIDetectDuplicateHID.c)
 *     ACPIFilterIrpRemoveDevice @ 0x1C002CDC0 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIFilterIrpSetPower @ 0x1C002E2B0 (ACPIFilterIrpSetPower.c)
 *     DispatchNotificationWorker @ 0x1C0031750 (DispatchNotificationWorker.c)
 *     ACPIDockIntfDereference @ 0x1C0049070 (ACPIDockIntfDereference.c)
 *     ACPIDockIrpRemoveDevice @ 0x1C0049220 (ACPIDockIrpRemoveDevice.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C004A4D4 (ACPIBuildMissingEjectionRelations.c)
 *     AcpiDeviceResetDereference @ 0x1C0051E70 (AcpiDeviceResetDereference.c)
 *     OSNotifyCreateOperationRegionWorker @ 0x1C00597B0 (OSNotifyCreateOperationRegionWorker.c)
 *     ACPIRootIrpRemoveDevice @ 0x1C005FC60 (ACPIRootIrpRemoveDevice.c)
 *     ACPIInterfaceDereferenceDeviceExtension @ 0x1C00ACDD0 (ACPIInterfaceDereferenceDeviceExtension.c)
 *     ACPIPepCleanupPlatformNotificationSupport @ 0x1C00B0268 (ACPIPepCleanupPlatformNotificationSupport.c)
 * Callees:
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x1C0007270 (ACPIInitDereferenceDeviceExtensionLocked.c)
 */

char __fastcall ACPIInitDereferenceDeviceExtensionUnlocked(ULONG_PTR BugCheckParameter4)
{
  KIRQL v2; // di

  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
  LOBYTE(BugCheckParameter4) = ACPIInitDereferenceDeviceExtensionLocked(BugCheckParameter4);
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  KeReleaseSpinLock(&AcpiPowerLock, v2);
  return BugCheckParameter4;
}
