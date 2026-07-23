/*
 * XREFs of _RtlGetUnloadEventTraceEx@12 @ 0x4B32F530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlGetUnloadEventTraceEx(PULONG *ElementSize, PULONG *ElementCount, PVOID *EventTrace)
{
  *ElementSize = (PULONG)&RtlpUnloadEventTraceExSize;
  *ElementCount = (PULONG)&RtlpUnloadEventTraceExNumber;
  *EventTrace = &RtlpUnloadEventTraceEx;
}
