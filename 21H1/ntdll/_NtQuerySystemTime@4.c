/*
 * XREFs of _NtQuerySystemTime@4 @ 0x4B2F2F20
 * Callers:
 *     _RtlCreateProcessReflection@24 @ 0x4B335060 (_RtlCreateProcessReflection@24.c)
 *     _RtlRunEncodeUnicodeString@8 @ 0x4B347200 (_RtlRunEncodeUnicodeString@8.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __stdcall NtQuerySystemTime(PLARGE_INTEGER SystemTime)
{
  return Wow64SystemServiceCall();
}
