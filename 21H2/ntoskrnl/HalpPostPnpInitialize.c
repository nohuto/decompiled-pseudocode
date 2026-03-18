/*
 * XREFs of HalpPostPnpInitialize @ 0x14081E450
 * Callers:
 *     HalpAddDevice @ 0x14081E300 (HalpAddDevice.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     IoRegisterPlugPlayNotification @ 0x140768390 (IoRegisterPlugPlayNotification.c)
 *     HalpInitializeSecondaryInterruptServices @ 0x140AF6D7C (HalpInitializeSecondaryInterruptServices.c)
 */

NTSTATUS HalpPostPnpInitialize()
{
  NTSTATUS result; // eax
  PVOID NotificationEntry; // [rsp+50h] [rbp+8h] BYREF

  NotificationEntry = 0LL;
  HalpInitializeSecondaryInterruptServices();
  KeInitializeEvent(&HalpDynamicDeviceInterfaceLock, SynchronizationEvent, 1u);
  result = IoRegisterPlugPlayNotification(
             EventCategoryDeviceInterfaceChange,
             1u,
             HalpDynamicDeviceInterfaces,
             HalpDriverObject,
             HalpDynamicDeviceInterfaceNotification,
             0LL,
             &NotificationEntry);
  HalpDynamicDevicesReady = 1;
  return result;
}
