/*
 * XREFs of ProcLibTraceIdleStatesErrata @ 0x1C002145C
 * Callers:
 *     ProcLibTraceControlCallback @ 0x1C001E5F0 (ProcLibTraceControlCallback.c)
 *     ProcLibGlobalInit @ 0x1C00387D0 (ProcLibGlobalInit.c)
 * Callees:
 *     ProcLibTraceNoPayloadEvent @ 0x1C0021488 (ProcLibTraceNoPayloadEvent.c)
 */

__int64 __fastcall ProcLibTraceIdleStatesErrata(char a1)
{
  bool v1; // zf
  const EVENT_DESCRIPTOR *v2; // rcx

  v1 = a1 == 0;
  v2 = (const EVENT_DESCRIPTOR *)&PPM_ETW_IDLE_STATES_ERRATA;
  if ( !v1 )
    v2 = &PPM_ETW_IDLE_STATES_ERRATA_RUNDOWN;
  return ProcLibTraceNoPayloadEvent(v2);
}
