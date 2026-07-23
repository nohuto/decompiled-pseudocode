/*
 * XREFs of PopPreSleepNotifyWorker @ 0x1408F7EE0
 * Callers:
 *     <none>
 * Callees:
 *     PopOkayToQueueNextWorkItem @ 0x14032FF84 (PopOkayToQueueNextWorkItem.c)
 *     ZwUpdateWnfStateData @ 0x1403FBB50 (ZwUpdateWnfStateData.c)
 */

__int64 PopPreSleepNotifyWorker()
{
  ++PopPreSleepWnfPayload;
  ZwUpdateWnfStateData(&WNF_PO_PRESLEEP_NOTIFICATION, &PopPreSleepWnfPayload, 8u, 0LL, 0LL, 0, 0);
  return PopOkayToQueueNextWorkItem((__int64)&PopPreSleepNotifyWorkItem);
}
