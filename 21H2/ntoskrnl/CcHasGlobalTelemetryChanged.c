/*
 * XREFs of CcHasGlobalTelemetryChanged @ 0x140254F5C
 * Callers:
 *     CcTelemetryPeriodicTimerCallback @ 0x1406DBDA0 (CcTelemetryPeriodicTimerCallback.c)
 * Callees:
 *     <none>
 */

char CcHasGlobalTelemetryChanged()
{
  char result; // al

  result = 0;
  if ( qword_140C498E0 || qword_140C498E8 || qword_140C498F0 || qword_140C498F8 || qword_140C49900 )
    return 1;
  return result;
}
