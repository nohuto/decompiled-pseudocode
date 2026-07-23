/*
 * XREFs of ZwQuerySystemTime @ 0x18009D950
 * Callers:
 *     RtlAddFunctionTable @ 0x180067AC0 (RtlAddFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x180068300 (RtlInstallFunctionTableCallback.c)
 *     RtlAddGrowableFunctionTable @ 0x180068610 (RtlAddGrowableFunctionTable.c)
 *     RtlCreateProcessReflection @ 0x1800D5A60 (RtlCreateProcessReflection.c)
 *     RtlRunEncodeUnicodeString @ 0x1800E6D50 (RtlRunEncodeUnicodeString.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __cdecl ZwQuerySystemTime(PLARGE_INTEGER SystemTime)
{
  return RtlQuerySystemTime(SystemTime);
}
