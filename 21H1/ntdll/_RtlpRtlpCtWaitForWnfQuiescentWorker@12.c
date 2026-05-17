/*
 * XREFs of _RtlpRtlpCtWaitForWnfQuiescentWorker@12 @ 0x4B369F90
 * Callers:
 *     <none>
 * Callees:
 *     _ZwWaitForSingleObject@12 @ 0x4B2F29A0 (_ZwWaitForSingleObject@12.c)
 *     _RtlpCtContextFree@4 @ 0x4B369E26 (_RtlpCtContextFree@4.c)
 */

__int32 __stdcall RtlpRtlpCtWaitForWnfQuiescentWorker(int a1, int a2, int a3)
{
  ZwWaitForSingleObject(*(_DWORD *)(a2 + 8), 0, 0);
  RtlpCtContextFree(a2);
  return _InterlockedExchange(RtlpCtPublishInProgress, 0);
}
