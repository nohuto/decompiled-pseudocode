/*
 * XREFs of ProcLibTraceNoPayloadEvent @ 0x1C0021488
 * Callers:
 *     ProcLibTraceHiddenProcessorDegradedOperation @ 0x1C00035DC (ProcLibTraceHiddenProcessorDegradedOperation.c)
 *     ProcLibTraceIdleStatesErrata @ 0x1C002145C (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x1C00214DC (ProcLibTracePccErrata.c)
 *     ProcLibTracePerfStatesErrata @ 0x1C0021600 (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x1C002162C (ProcLibTraceThrottleStatesErrata.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall ProcLibTraceNoPayloadEvent(PCEVENT_DESCRIPTOR EventDescriptor)
{
  BOOLEAN result; // al

  result = EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, EventDescriptor);
  if ( result )
    return EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, EventDescriptor, 0LL, 0, 0LL);
  return result;
}
