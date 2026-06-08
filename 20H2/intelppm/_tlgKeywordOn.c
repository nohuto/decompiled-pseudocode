/*
 * XREFs of _tlgKeywordOn @ 0x1C0008598
 * Callers:
 *     ProcLibTraceHiddenProcessorDegradedOperation @ 0x1C000811C (ProcLibTraceHiddenProcessorDegradedOperation.c)
 *     ProcLibTraceUnexpectedTurboDisable @ 0x1C0008524 (ProcLibTraceUnexpectedTurboDisable.c)
 *     ProcLibTraceInvalidPowerCurve @ 0x1C003DB84 (ProcLibTraceInvalidPowerCurve.c)
 * Callees:
 *     <none>
 */

bool __fastcall tlgKeywordOn(__int64 a1, __int64 a2)
{
  return (a2 & qword_1C0017048) != 0 && (a2 & qword_1C0017050) == qword_1C0017050;
}
