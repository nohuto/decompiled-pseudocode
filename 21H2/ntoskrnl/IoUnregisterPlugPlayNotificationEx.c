/*
 * XREFs of IoUnregisterPlugPlayNotificationEx @ 0x1406E7890
 * Callers:
 *     PopPolicyDeviceTargetChange @ 0x140997FD0 (PopPolicyDeviceTargetChange.c)
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x14025AA04 (PnpUnregisterPlugPlayNotification.c)
 */

NTSTATUS __stdcall IoUnregisterPlugPlayNotificationEx(PVOID NotificationEntry)
{
  return PnpUnregisterPlugPlayNotification(NotificationEntry, 1);
}
