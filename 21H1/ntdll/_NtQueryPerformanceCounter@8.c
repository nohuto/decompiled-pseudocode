/*
 * XREFs of _NtQueryPerformanceCounter@8 @ 0x4B2F2C90
 * Callers:
 *     _LdrpGenSecurityCookie@4 @ 0x4B2B9827 (_LdrpGenSecurityCookie@4.c)
 *     _RtlQueryPerformanceCounter@4 @ 0x4B2DBC20 (_RtlQueryPerformanceCounter@4.c)
 *     _RtlHeapTrkInitialize@4 @ 0x4B364170 (_RtlHeapTrkInitialize@4.c)
 *     RtlpHeapTrkGenerateHashRandoms @ 0x4B36481D (RtlpHeapTrkGenerateHashRandoms.c)
 *     _RtlpHeapTrkInterceptor@16 @ 0x4B3648D0 (_RtlpHeapTrkInterceptor@16.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtQueryPerformanceCounter(PLARGE_INTEGER PerformanceCounter, PLARGE_INTEGER PerformanceFrequency)
{
  return Wow64SystemServiceCall();
}
