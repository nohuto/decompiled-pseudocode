/*
 * XREFs of ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C0017CE0
 * Callers:
 *     ACPIDetectFilterDevices @ 0x1C0018DA4 (ACPIDetectFilterDevices.c)
 *     ACPIFilterIrpRemoveDevice @ 0x1C002CA30 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIFilterIrpSetPower @ 0x1C002D530 (ACPIFilterIrpSetPower.c)
 *     ACPIDockIntfDereference @ 0x1C004A480 (ACPIDockIntfDereference.c)
 *     ACPIDockIrpRemoveDevice @ 0x1C004A640 (ACPIDockIrpRemoveDevice.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C004B9D4 (ACPIBuildMissingEjectionRelations.c)
 *     AcpiDeviceResetDereference @ 0x1C00527E0 (AcpiDeviceResetDereference.c)
 *     OSNotifyCreateOperationRegionWorker @ 0x1C00588E0 (OSNotifyCreateOperationRegionWorker.c)
 *     DispatchNotificationWorker @ 0x1C005C5B0 (DispatchNotificationWorker.c)
 *     ACPIRootIrpRemoveDevice @ 0x1C005ECD0 (ACPIRootIrpRemoveDevice.c)
 *     ACPIInterfaceDereferenceDeviceExtension @ 0x1C00ADF30 (ACPIInterfaceDereferenceDeviceExtension.c)
 *     ACPIPepCleanupPlatformNotificationSupport @ 0x1C00B0A74 (ACPIPepCleanupPlatformNotificationSupport.c)
 * Callees:
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x1C0019678 (ACPIInitDereferenceDeviceExtensionLocked.c)
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
