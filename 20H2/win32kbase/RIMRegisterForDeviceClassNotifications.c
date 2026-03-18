/*
 * XREFs of RIMRegisterForDeviceClassNotifications @ 0x1C00237BC
 * Callers:
 *     RIMDiscoverDevicesOfInputType @ 0x1C0026058 (RIMDiscoverDevicesOfInputType.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

NTSTATUS __fastcall RIMRegisterForDeviceClassNotifications(
        __int64 a1,
        __int64 a2,
        void *a3,
        struct _DRIVER_OBJECT *a4,
        __int64 a5,
        PVOID Context,
        PVOID *NotificationEntry)
{
  if ( !a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, 0LL);
  return IoRegisterPlugPlayNotification(
           EventCategoryDeviceInterfaceChange,
           1u,
           a3,
           a4,
           RIMDeviceClassNotify,
           Context,
           NotificationEntry);
}
