/*
 * XREFs of IoUnregisterPlugPlayNotification @ 0x14075CDC0
 * Callers:
 *     SbpWaitForVmbus @ 0x140A939C4 (SbpWaitForVmbus.c)
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x14037CC00 (PnpUnregisterPlugPlayNotification.c)
 */

NTSTATUS __stdcall IoUnregisterPlugPlayNotification(PVOID NotificationEntry)
{
  return PnpUnregisterPlugPlayNotification(NotificationEntry, 0);
}
