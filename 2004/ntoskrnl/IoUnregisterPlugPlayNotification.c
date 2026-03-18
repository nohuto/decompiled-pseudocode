/*
 * XREFs of IoUnregisterPlugPlayNotification @ 0x14075F270
 * Callers:
 *     SbpWaitForVmbus @ 0x140A930D4 (SbpWaitForVmbus.c)
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x14037D6C0 (PnpUnregisterPlugPlayNotification.c)
 */

NTSTATUS __stdcall IoUnregisterPlugPlayNotification(PVOID NotificationEntry)
{
  return PnpUnregisterPlugPlayNotification(NotificationEntry, 0);
}
