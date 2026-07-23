/*
 * XREFs of _RtlGetUnloadEventTrace@0 @ 0x4B32F520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PRTL_UNLOAD_EVENT_TRACE RtlGetUnloadEventTrace(void)
{
  return (PRTL_UNLOAD_EVENT_TRACE)RtlpUnloadEventTrace;
}
