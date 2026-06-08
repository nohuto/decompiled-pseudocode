/*
 * XREFs of ProcLibTraceThrottleStatesErrata @ 0x1C002E4E8
 * Callers:
 *     ProcLibTraceControlCallback @ 0x1C0027930 (ProcLibTraceControlCallback.c)
 *     ProcLibGlobalInit @ 0x1C003C8F0 (ProcLibGlobalInit.c)
 * Callees:
 *     ProcLibTraceNoPayloadEvent @ 0x1C002D10C (ProcLibTraceNoPayloadEvent.c)
 */

BOOLEAN __fastcall ProcLibTraceThrottleStatesErrata(char a1)
{
  bool v1; // zf
  const EVENT_DESCRIPTOR *v2; // rcx

  v1 = a1 == 0;
  v2 = (const EVENT_DESCRIPTOR *)&PPM_ETW_THROTTLE_STATES_ERRATA;
  if ( !v1 )
    v2 = &PPM_ETW_THROTTLE_STATES_ERRATA_RUNDOWN;
  return ProcLibTraceNoPayloadEvent(v2);
}
