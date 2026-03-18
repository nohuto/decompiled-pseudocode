/*
 * XREFs of ACPIInitReferenceDeviceExtension @ 0x1C00056D8
 * Callers:
 *     ACPIFixedFeatureButtonInitialize @ 0x1C00024D0 (ACPIFixedFeatureButtonInitialize.c)
 *     OSNotifyCreateProcessor @ 0x1C0005604 (OSNotifyCreateProcessor.c)
 *     ACPIDetectFilterDevices @ 0x1C0006A34 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C0006CE8 (ACPIDetectPdoDevices.c)
 *     ACPIDetectDuplicateHID @ 0x1C0009170 (ACPIDetectDuplicateHID.c)
 *     OSNotifyCreateOperationRegion @ 0x1C000A0B4 (OSNotifyCreateOperationRegion.c)
 *     ACPIGetCmosInterface @ 0x1C0029714 (ACPIGetCmosInterface.c)
 *     AcpiDeviceResetInterface @ 0x1C002CBD0 (AcpiDeviceResetInterface.c)
 *     ACPIFilterIrpRemoveDevice @ 0x1C002CDC0 (ACPIFilterIrpRemoveDevice.c)
 *     OSNotifyCreateThermalZone @ 0x1C002D154 (OSNotifyCreateThermalZone.c)
 *     ACPIFilterIrpSetPower @ 0x1C002E2B0 (ACPIFilterIrpSetPower.c)
 *     DispatchNotification @ 0x1C0031624 (DispatchNotification.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1C00569B4 (ACPIInitDeleteDeviceExtension.c)
 *     ACPIRootInitialize @ 0x1C008F8C0 (ACPIRootInitialize.c)
 *     ACPIPepInitializePlatformNotificationSupport @ 0x1C008FED4 (ACPIPepInitializePlatformNotificationSupport.c)
 *     ACPIBusReenumerateSelfInterface @ 0x1C0090C3C (ACPIBusReenumerateSelfInterface.c)
 *     ACPIDockIntfReference @ 0x1C00AA200 (ACPIDockIntfReference.c)
 *     ACPIInterfaceReferenceDeviceExtension @ 0x1C00ACDF0 (ACPIInterfaceReferenceDeviceExtension.c)
 * Callees:
 *     <none>
 */

char __fastcall ACPIInitReferenceDeviceExtension(__int64 a1)
{
  if ( !*(_DWORD *)(a1 + 732) )
    return 0;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 732));
  return 1;
}
