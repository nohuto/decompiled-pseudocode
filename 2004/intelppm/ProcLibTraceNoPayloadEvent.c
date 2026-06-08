/*
 * XREFs of ProcLibTraceNoPayloadEvent @ 0x1C002BDAC
 * Callers:
 *     ProcLibTraceHiddenProcessorDegradedOperation @ 0x1C000812C (ProcLibTraceHiddenProcessorDegradedOperation.c)
 *     ProcLibTraceIdleStatesErrata @ 0x1C002BD80 (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x1C002BE00 (ProcLibTracePccErrata.c)
 *     ProcLibTracePerfStatesErrata @ 0x1C002C300 (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x1C002D188 (ProcLibTraceThrottleStatesErrata.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall ProcLibTraceNoPayloadEvent(PCEVENT_DESCRIPTOR EventDescriptor)
{
  BOOLEAN result; // al

  result = EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, EventDescriptor);
  if ( result )
    return EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, EventDescriptor, 0LL, 0, 0LL);
  return result;
}
