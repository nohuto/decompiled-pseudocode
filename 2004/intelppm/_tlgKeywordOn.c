/*
 * XREFs of _tlgKeywordOn @ 0x1C00085A8
 * Callers:
 *     ProcLibTraceHiddenProcessorDegradedOperation @ 0x1C000812C (ProcLibTraceHiddenProcessorDegradedOperation.c)
 *     ProcLibTraceUnexpectedTurboDisable @ 0x1C0008534 (ProcLibTraceUnexpectedTurboDisable.c)
 *     ProcLibTraceInvalidPowerCurve @ 0x1C003CAF4 (ProcLibTraceInvalidPowerCurve.c)
 * Callees:
 *     <none>
 */

bool __fastcall tlgKeywordOn(__int64 a1, __int64 a2)
{
  return (a2 & qword_1C0017048) != 0 && (a2 & qword_1C0017050) == qword_1C0017050;
}
