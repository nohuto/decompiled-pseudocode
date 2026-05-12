/*
 * XREFs of StorpUninitializePerfTelemetry @ 0x1C0056BD4
 * Callers:
 *     StorpInitializePerfTelemetry @ 0x1C00515CC (StorpInitializePerfTelemetry.c)
 *     StorpUnRegisterTraceLogging @ 0x1C007AADC (StorpUnRegisterTraceLogging.c)
 * Callees:
 *     <none>
 */

void StorpUninitializePerfTelemetry()
{
  if ( P )
    ExFreePoolWithTag(P, 0x65546152u);
  if ( *(&P + 1) )
    ExFreePoolWithTag(*(&P + 1), 0x65546152u);
  if ( xmmword_1C00685F8 )
    ExFreePoolWithTag(xmmword_1C00685F8, 0x65546152u);
  if ( *(&xmmword_1C00685F8 + 1) )
    ExFreePoolWithTag(*(&xmmword_1C00685F8 + 1), 0x65546152u);
  if ( *((_QWORD *)&xmmword_1C0068610 + 1) )
    ExFreePoolWithTag(*((PVOID *)&xmmword_1C0068610 + 1), 0x65546152u);
  if ( xmmword_1C0068620 )
    ExFreePoolWithTag(xmmword_1C0068620, 0x65546152u);
  if ( *(&xmmword_1C0068620 + 1) )
    ExFreePoolWithTag(*(&xmmword_1C0068620 + 1), 0x65546152u);
  if ( xmmword_1C0068630 )
    ExFreePoolWithTag(xmmword_1C0068630, 0x65546152u);
}
