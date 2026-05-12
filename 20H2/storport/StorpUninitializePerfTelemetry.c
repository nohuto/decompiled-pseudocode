/*
 * XREFs of StorpUninitializePerfTelemetry @ 0x1C0057A98
 * Callers:
 *     StorpInitializePerfTelemetry @ 0x1C0052490 (StorpInitializePerfTelemetry.c)
 *     StorpUnRegisterTraceLogging @ 0x1C007BFDC (StorpUnRegisterTraceLogging.c)
 * Callees:
 *     <none>
 */

void StorpUninitializePerfTelemetry()
{
  if ( P )
    ExFreePoolWithTag(P, 0x65546152u);
  if ( *(&P + 1) )
    ExFreePoolWithTag(*(&P + 1), 0x65546152u);
  if ( xmmword_1C00693F8 )
    ExFreePoolWithTag(xmmword_1C00693F8, 0x65546152u);
  if ( *(&xmmword_1C00693F8 + 1) )
    ExFreePoolWithTag(*(&xmmword_1C00693F8 + 1), 0x65546152u);
  if ( *((_QWORD *)&xmmword_1C0069410 + 1) )
    ExFreePoolWithTag(*((PVOID *)&xmmword_1C0069410 + 1), 0x65546152u);
  if ( xmmword_1C0069420 )
    ExFreePoolWithTag(xmmword_1C0069420, 0x65546152u);
  if ( *(&xmmword_1C0069420 + 1) )
    ExFreePoolWithTag(*(&xmmword_1C0069420 + 1), 0x65546152u);
  if ( xmmword_1C0069430 )
    ExFreePoolWithTag(xmmword_1C0069430, 0x65546152u);
}
