/*
 * XREFs of CcHasVolumeCumulativeTelemetryChanged @ 0x14053E4A8
 * Callers:
 *     CcPostVolumeTelemetry @ 0x1402541A8 (CcPostVolumeTelemetry.c)
 * Callees:
 *     <none>
 */

char __fastcall CcHasVolumeCumulativeTelemetryChanged(_QWORD *a1)
{
  char result; // al

  result = 0;
  if ( a1[189] || a1[190] || a1[191] || a1[245] || a1[246] || a1[247] )
    return 1;
  return result;
}
