/*
 * XREFs of PopPreSleepNotifyWorker @ 0x1408F22D0
 * Callers:
 *     <none>
 * Callees:
 *     PopOkayToQueueNextWorkItem @ 0x14035F184 (PopOkayToQueueNextWorkItem.c)
 *     ZwUpdateWnfStateData @ 0x1403F6F80 (ZwUpdateWnfStateData.c)
 */

__int64 PopPreSleepNotifyWorker()
{
  ++PopPreSleepWnfPayload;
  ZwUpdateWnfStateData((__int64)&WNF_PO_PRESLEEP_NOTIFICATION, (__int64)&PopPreSleepWnfPayload);
  return PopOkayToQueueNextWorkItem((__int64)&PopPreSleepNotifyWorkItem);
}
