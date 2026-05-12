/*
 * XREFs of RaidQueueDeferredItem @ 0x1C0002E10
 * Callers:
 *     StorPortPauseDevice @ 0x1C0002950 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x1C0002CE0 (StorPortResumeDevice.c)
 *     StorPortNotification @ 0x1C000E7E0 (StorPortNotification.c)
 *     RaidAdapterLogIoErrorDeferred @ 0x1C002D244 (RaidAdapterLogIoErrorDeferred.c)
 *     RaidAdapterRequestAddtionalTimerDeferred @ 0x1C002DF28 (RaidAdapterRequestAddtionalTimerDeferred.c)
 *     RaidAdapterRequestTimerDeferred @ 0x1C002E0C0 (RaidAdapterRequestTimerDeferred.c)
 *     StorAsyncNotificationDeferred @ 0x1C003817C (StorAsyncNotificationDeferred.c)
 *     StorPortBusy @ 0x1C0038B30 (StorPortBusy.c)
 *     StorPortDeviceBusy @ 0x1C0038ED0 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C0039050 (StorPortDeviceReady.c)
 *     StorPortPause @ 0x1C0039780 (StorPortPause.c)
 *     StorPortReady @ 0x1C0039A50 (StorPortReady.c)
 *     StorPortResume @ 0x1C0039E00 (StorPortResume.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RaidQueueDeferredItem(char *SystemArgument1, struct _SLIST_ENTRY *a2)
{
  ExpInterlockedPushEntrySList((PSLIST_HEADER)SystemArgument1 + 6, a2);
  return KeInsertQueueDpc((PRKDPC)(SystemArgument1 + 8), SystemArgument1, 0LL);
}
