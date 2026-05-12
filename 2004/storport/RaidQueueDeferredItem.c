/*
 * XREFs of RaidQueueDeferredItem @ 0x1C0010370
 * Callers:
 *     StorPortNotification @ 0x1C000D820 (StorPortNotification.c)
 *     StorPortPauseDevice @ 0x1C00100D0 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x1C0010240 (StorPortResumeDevice.c)
 *     RaidAdapterLogIoErrorDeferred @ 0x1C002C3EC (RaidAdapterLogIoErrorDeferred.c)
 *     RaidAdapterRequestAddtionalTimerDeferred @ 0x1C002D0C0 (RaidAdapterRequestAddtionalTimerDeferred.c)
 *     RaidAdapterRequestTimerDeferred @ 0x1C002D258 (RaidAdapterRequestTimerDeferred.c)
 *     StorAsyncNotificationDeferred @ 0x1C003730C (StorAsyncNotificationDeferred.c)
 *     StorPortBusy @ 0x1C0037CC0 (StorPortBusy.c)
 *     StorPortDeviceBusy @ 0x1C0038060 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C00381E0 (StorPortDeviceReady.c)
 *     StorPortPause @ 0x1C00388D0 (StorPortPause.c)
 *     StorPortReady @ 0x1C0038BA0 (StorPortReady.c)
 *     StorPortResume @ 0x1C0038F50 (StorPortResume.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RaidQueueDeferredItem(char *SystemArgument1, struct _SLIST_ENTRY *a2)
{
  ExpInterlockedPushEntrySList((PSLIST_HEADER)SystemArgument1 + 6, a2);
  return KeInsertQueueDpc((PRKDPC)(SystemArgument1 + 8), SystemArgument1, 0LL);
}
