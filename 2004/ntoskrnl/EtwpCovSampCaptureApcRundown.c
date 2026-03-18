/*
 * XREFs of EtwpCovSampCaptureApcRundown @ 0x14093EAD0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpCovSampCaptureApcRelease @ 0x1405A8FEC (EtwpCovSampCaptureApcRelease.c)
 */

__int64 __fastcall EtwpCovSampCaptureApcRundown(__int64 a1)
{
  return EtwpCovSampCaptureApcRelease(a1 - 56);
}
