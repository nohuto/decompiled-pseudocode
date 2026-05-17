/*
 * XREFs of _ZwResumeProcess@4 @ 0x4B2F4130
 * Callers:
 *     _RtlpProcessReflectionStartup@4 @ 0x4B3354D0 (_RtlpProcessReflectionStartup@4.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall ZwResumeProcess(int a1)
{
  return Wow64SystemServiceCall();
}
