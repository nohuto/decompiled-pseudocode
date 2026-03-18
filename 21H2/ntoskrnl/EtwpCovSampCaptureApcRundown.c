/*
 * XREFs of EtwpCovSampCaptureApcRundown @ 0x1409EE8E0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpCovSampCaptureApcRelease @ 0x140635B34 (EtwpCovSampCaptureApcRelease.c)
 */

char __fastcall EtwpCovSampCaptureApcRundown(__int64 a1)
{
  return EtwpCovSampCaptureApcRelease(a1 - 56);
}
