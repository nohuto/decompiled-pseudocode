/*
 * XREFs of RtlpFcInitializeDelayedUsageReportBuffer @ 0x140916D10
 * Callers:
 *     CmFcManagerStartRuntimePhase @ 0x140A357B8 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 */

void *__fastcall RtlpFcInitializeDelayedUsageReportBuffer(void *a1)
{
  return memset(a1, 0, 0x310uLL);
}
