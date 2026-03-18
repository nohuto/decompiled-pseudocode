/*
 * XREFs of IoUnregisterPlugPlayNotificationEx @ 0x14077A340
 * Callers:
 *     <none>
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x14037CC00 (PnpUnregisterPlugPlayNotification.c)
 */

NTSTATUS __stdcall IoUnregisterPlugPlayNotificationEx(PVOID NotificationEntry)
{
  return PnpUnregisterPlugPlayNotification(NotificationEntry, 1);
}
