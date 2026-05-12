/*
 * XREFs of RaidQueueDeferredItem @ 0x1C000E5B0
 * Callers:
 *     StorPortNotification @ 0x1C000D230 (StorPortNotification.c)
 *     StorPortPauseDevice @ 0x1C000E310 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x1C000E480 (StorPortResumeDevice.c)
 *     RaidAdapterLogIoErrorDeferred @ 0x1C002BE38 (RaidAdapterLogIoErrorDeferred.c)
 *     RaidAdapterRequestAddtionalTimerDeferred @ 0x1C002CB10 (RaidAdapterRequestAddtionalTimerDeferred.c)
 *     RaidAdapterRequestTimerDeferred @ 0x1C002CCA8 (RaidAdapterRequestTimerDeferred.c)
 *     StorAsyncNotificationDeferred @ 0x1C0036D8C (StorAsyncNotificationDeferred.c)
 *     StorPortBusy @ 0x1C0037740 (StorPortBusy.c)
 *     StorPortDeviceBusy @ 0x1C0037AE0 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C0037C60 (StorPortDeviceReady.c)
 *     StorPortPause @ 0x1C0038350 (StorPortPause.c)
 *     StorPortReady @ 0x1C0038620 (StorPortReady.c)
 *     StorPortResume @ 0x1C00389D0 (StorPortResume.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RaidQueueDeferredItem(char *SystemArgument1, struct _SLIST_ENTRY *a2)
{
  ExpInterlockedPushEntrySList((PSLIST_HEADER)SystemArgument1 + 6, a2);
  return KeInsertQueueDpc((PRKDPC)(SystemArgument1 + 8), SystemArgument1, 0LL);
}
