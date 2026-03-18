/*
 * XREFs of RtlpFcInitializeDelayedUsageReportBuffer @ 0x140915AA0
 * Callers:
 *     CmFcManagerStartRuntimePhase @ 0x140A357B8 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 */

void *__fastcall RtlpFcInitializeDelayedUsageReportBuffer(void *a1)
{
  return memset(a1, 0, 0x310uLL);
}
