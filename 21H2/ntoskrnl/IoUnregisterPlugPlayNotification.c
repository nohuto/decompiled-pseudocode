/*
 * XREFs of IoUnregisterPlugPlayNotification @ 0x140771BA0
 * Callers:
 *     SbpWaitForVmbus @ 0x140A95BC4 (SbpWaitForVmbus.c)
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x14037FC30 (PnpUnregisterPlugPlayNotification.c)
 */

NTSTATUS __stdcall IoUnregisterPlugPlayNotification(PVOID NotificationEntry)
{
  return PnpUnregisterPlugPlayNotification(NotificationEntry, 0);
}
