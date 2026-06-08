/*
 * XREFs of _tlgKeywordOn @ 0x1C0001008
 * Callers:
 *     ProcLibTraceHiddenProcessorDegradedOperation @ 0x1C00035DC (ProcLibTraceHiddenProcessorDegradedOperation.c)
 *     ProcLibTraceInvalidPowerCurve @ 0x1C0038270 (ProcLibTraceInvalidPowerCurve.c)
 * Callees:
 *     <none>
 */

bool tlgKeywordOn()
{
  return (qword_1C0014078 & 0x400000000000LL) != 0 && (qword_1C0014080 & 0x400000000000LL) == qword_1C0014080;
}
