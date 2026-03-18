/*
 * XREFs of IoUnregisterPlugPlayNotificationEx @ 0x14077C750
 * Callers:
 *     <none>
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x14037D6C0 (PnpUnregisterPlugPlayNotification.c)
 */

NTSTATUS __stdcall IoUnregisterPlugPlayNotificationEx(PVOID NotificationEntry)
{
  return PnpUnregisterPlugPlayNotification(NotificationEntry, 1);
}
