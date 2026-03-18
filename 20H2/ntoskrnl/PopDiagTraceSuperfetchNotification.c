/*
 * XREFs of PopDiagTraceSuperfetchNotification @ 0x140772608
 * Callers:
 *     PopDispatchSuperfetchNotification @ 0x140772634 (PopDispatchSuperfetchNotification.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14032BC04 (PopDiagTraceEventNoPayload.c)
 */

void __fastcall PopDiagTraceSuperfetchNotification(char a1)
{
  bool v1; // zf
  const EVENT_DESCRIPTOR *v2; // rcx

  v1 = a1 == 0;
  v2 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_SUPERFETCH_START;
  if ( v1 )
    v2 = &POP_ETW_EVENT_SUPERFETCH_STOP;
  PopDiagTraceEventNoPayload(v2);
}
