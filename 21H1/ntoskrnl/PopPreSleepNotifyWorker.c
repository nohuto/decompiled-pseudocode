/*
 * XREFs of PopPreSleepNotifyWorker @ 0x1408F0FE0
 * Callers:
 *     <none>
 * Callees:
 *     PopOkayToQueueNextWorkItem @ 0x1403217D4 (PopOkayToQueueNextWorkItem.c)
 *     ZwUpdateWnfStateData @ 0x1403F5CF0 (ZwUpdateWnfStateData.c)
 */

__int64 PopPreSleepNotifyWorker()
{
  ++PopPreSleepWnfPayload;
  ZwUpdateWnfStateData(&WNF_PO_PRESLEEP_NOTIFICATION, &PopPreSleepWnfPayload, 8u, 0LL, 0LL, 0, 0);
  return PopOkayToQueueNextWorkItem((__int64)&PopPreSleepNotifyWorkItem);
}
