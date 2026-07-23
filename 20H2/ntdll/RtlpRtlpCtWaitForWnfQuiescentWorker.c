/*
 * XREFs of RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x1801027E0
 * Callers:
 *     <none>
 * Callees:
 *     NtWaitForSingleObject @ 0x18009D130 (NtWaitForSingleObject.c)
 *     RtlpCtContextFree @ 0x180102668 (RtlpCtContextFree.c)
 */

void __fastcall RtlpRtlpCtWaitForWnfQuiescentWorker(PTP_CALLBACK_INSTANCE a1, HANDLE *a2, PTP_WORK a3)
{
  NtWaitForSingleObject(a2[2], 0, 0LL);
  RtlpCtContextFree((__int64)a2);
  _InterlockedExchange(&RtlpCtPublishInProgress, 0);
}
