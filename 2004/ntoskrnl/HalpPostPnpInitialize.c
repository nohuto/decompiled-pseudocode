/*
 * XREFs of HalpPostPnpInitialize @ 0x1407964E8
 * Callers:
 *     HalpAddDevice @ 0x1407963D0 (HalpAddDevice.c)
 * Callees:
 *     KeInitializeEvent @ 0x140290DE0 (KeInitializeEvent.c)
 *     IoRegisterPlugPlayNotification @ 0x1406C5580 (IoRegisterPlugPlayNotification.c)
 *     HalpInitializeSecondaryInterruptServices @ 0x140A59F4C (HalpInitializeSecondaryInterruptServices.c)
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
