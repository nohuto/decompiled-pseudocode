/*
 * XREFs of HalpPostPnpInitialize @ 0x140796738
 * Callers:
 *     HalpAddDevice @ 0x140796620 (HalpAddDevice.c)
 * Callees:
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     IoRegisterPlugPlayNotification @ 0x1406B3480 (IoRegisterPlugPlayNotification.c)
 *     HalpInitializeSecondaryInterruptServices @ 0x140A5AEAC (HalpInitializeSecondaryInterruptServices.c)
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
