/*
 * XREFs of ACPIInitReferenceDeviceExtension @ 0x1C0017CC0
 * Callers:
 *     OSNotifyCreateProcessor @ 0x1C0015FCC (OSNotifyCreateProcessor.c)
 *     OSNotifyCreateOperationRegion @ 0x1C0018088 (OSNotifyCreateOperationRegion.c)
 *     ACPIDetectFilterDevices @ 0x1C0018DA4 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C00190D8 (ACPIDetectPdoDevices.c)
 *     ACPIDetectDuplicateHID @ 0x1C001AB94 (ACPIDetectDuplicateHID.c)
 *     ACPIGpeBuildWakeMasks @ 0x1C001AD48 (ACPIGpeBuildWakeMasks.c)
 *     ACPIGetCmosInterface @ 0x1C002C250 (ACPIGetCmosInterface.c)
 *     ACPIFilterIrpRemoveDevice @ 0x1C002CA30 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIFilterIrpSetPower @ 0x1C002D530 (ACPIFilterIrpSetPower.c)
 *     DispatchNotification @ 0x1C002ECF4 (DispatchNotification.c)
 *     OSNotifyCreateThermalZone @ 0x1C002F710 (OSNotifyCreateThermalZone.c)
 *     AcpiDeviceResetInterface @ 0x1C0030F20 (AcpiDeviceResetInterface.c)
 *     ACPIFixedFeatureButtonInitialize @ 0x1C0031030 (ACPIFixedFeatureButtonInitialize.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1C00562A8 (ACPIInitDeleteDeviceExtension.c)
 *     ACPIRootInitialize @ 0x1C0097C9C (ACPIRootInitialize.c)
 *     ACPIBusReenumerateSelfInterface @ 0x1C0099E38 (ACPIBusReenumerateSelfInterface.c)
 *     ACPIDockIntfReference @ 0x1C00AB0E0 (ACPIDockIntfReference.c)
 *     ACPIInterfaceReferenceDeviceExtension @ 0x1C00ADF50 (ACPIInterfaceReferenceDeviceExtension.c)
 *     ACPIPepInitializePlatformNotificationSupport @ 0x1C00B0BC0 (ACPIPepInitializePlatformNotificationSupport.c)
 * Callees:
 *     <none>
 */

char __fastcall ACPIInitReferenceDeviceExtension(__int64 a1)
{
  if ( !*(_DWORD *)(a1 + 692) )
    return 0;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 692));
  return 1;
}
