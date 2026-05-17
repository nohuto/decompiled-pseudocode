/*
 * XREFs of _NtWow64CallFunction64@28 @ 0x4B2F4800
 * Callers:
 *     _RtlQueryProcessDebugInformation@12 @ 0x4B336B50 (_RtlQueryProcessDebugInformation@12.c)
 *     _RtlWow64CallFunction64@28 @ 0x4B33A130 (_RtlWow64CallFunction64@28.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtWow64CallFunction64(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  return Wow64SystemServiceCall();
}
