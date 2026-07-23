/*
 * XREFs of IoUnregisterPlugPlayNotification @ 0x140771D60
 * Callers:
 *     SbpWaitForVmbus @ 0x140A96BC4 (SbpWaitForVmbus.c)
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x14037F780 (PnpUnregisterPlugPlayNotification.c)
 */

NTSTATUS __stdcall IoUnregisterPlugPlayNotification(PVOID NotificationEntry)
{
  return PnpUnregisterPlugPlayNotification(NotificationEntry, 0);
}
