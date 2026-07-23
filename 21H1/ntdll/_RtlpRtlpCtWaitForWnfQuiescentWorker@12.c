/*
 * XREFs of _RtlpRtlpCtWaitForWnfQuiescentWorker@12 @ 0x4B369F90
 * Callers:
 *     <none>
 * Callees:
 *     _ZwWaitForSingleObject@12 @ 0x4B2F29A0 (_ZwWaitForSingleObject@12.c)
 *     _RtlpCtContextFree@4 @ 0x4B369E26 (_RtlpCtContextFree@4.c)
 */

void __stdcall RtlpRtlpCtWaitForWnfQuiescentWorker(PTP_CALLBACK_INSTANCE a1, HANDLE *BaseAddress, PTP_WORK a3)
{
  ZwWaitForSingleObject(BaseAddress[2], 0, 0);
  RtlpCtContextFree(BaseAddress);
  _InterlockedExchange(RtlpCtPublishInProgress, 0);
}
