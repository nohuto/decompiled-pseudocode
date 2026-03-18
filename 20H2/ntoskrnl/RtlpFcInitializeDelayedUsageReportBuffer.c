/*
 * XREFs of RtlpFcInitializeDelayedUsageReportBuffer @ 0x14091C940
 * Callers:
 *     CmFcManagerStartRuntimePhase @ 0x140A3B7B8 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 */

void *__fastcall RtlpFcInitializeDelayedUsageReportBuffer(void *a1)
{
  return memset(a1, 0, 0x310uLL);
}
