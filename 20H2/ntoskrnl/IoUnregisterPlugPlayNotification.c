/*
 * XREFs of IoUnregisterPlugPlayNotification @ 0x14076D8E0
 * Callers:
 *     SbpWaitForVmbus @ 0x140A98D34 (SbpWaitForVmbus.c)
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x14037F3F0 (PnpUnregisterPlugPlayNotification.c)
 */

NTSTATUS __stdcall IoUnregisterPlugPlayNotification(PVOID NotificationEntry)
{
  return PnpUnregisterPlugPlayNotification(NotificationEntry, 0);
}
