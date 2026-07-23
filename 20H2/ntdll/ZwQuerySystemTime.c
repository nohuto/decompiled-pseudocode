/*
 * XREFs of ZwQuerySystemTime @ 0x18009DBF0
 * Callers:
 *     RtlAddFunctionTable @ 0x180067BD0 (RtlAddFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x180068410 (RtlInstallFunctionTableCallback.c)
 *     RtlAddGrowableFunctionTable @ 0x180068720 (RtlAddGrowableFunctionTable.c)
 *     RtlCreateProcessReflection @ 0x1800D5E00 (RtlCreateProcessReflection.c)
 *     RtlRunEncodeUnicodeString @ 0x1800E71D0 (RtlRunEncodeUnicodeString.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __cdecl ZwQuerySystemTime(PLARGE_INTEGER SystemTime)
{
  return RtlQuerySystemTime(SystemTime);
}
