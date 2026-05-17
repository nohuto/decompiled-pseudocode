/*
 * XREFs of _NtWow64GetCurrentProcessorNumberEx@4 @ 0x4B2F47A0
 * Callers:
 *     _RtlGetCurrentProcessorNumberEx@4 @ 0x4B2E6100 (_RtlGetCurrentProcessorNumberEx@4.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtWow64GetCurrentProcessorNumberEx(int a1)
{
  return Wow64SystemServiceCall();
}
