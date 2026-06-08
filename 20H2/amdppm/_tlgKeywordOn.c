/*
 * XREFs of _tlgKeywordOn @ 0x1C0001008
 * Callers:
 *     ProcLibTraceHiddenProcessorDegradedOperation @ 0x1C000353C (ProcLibTraceHiddenProcessorDegradedOperation.c)
 *     ProcLibTraceInvalidPowerCurve @ 0x1C0037268 (ProcLibTraceInvalidPowerCurve.c)
 * Callees:
 *     <none>
 */

bool tlgKeywordOn()
{
  return (qword_1C0013078 & 0x400000000000LL) != 0 && (qword_1C0013080 & 0x400000000000LL) == qword_1C0013080;
}
