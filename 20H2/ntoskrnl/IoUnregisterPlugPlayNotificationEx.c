/*
 * XREFs of IoUnregisterPlugPlayNotificationEx @ 0x14078AD50
 * Callers:
 *     <none>
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x14037F3F0 (PnpUnregisterPlugPlayNotification.c)
 */

NTSTATUS __stdcall IoUnregisterPlugPlayNotificationEx(PVOID NotificationEntry)
{
  return PnpUnregisterPlugPlayNotification(NotificationEntry, 1);
}
