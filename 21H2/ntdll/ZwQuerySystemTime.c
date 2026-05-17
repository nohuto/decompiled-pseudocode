/*
 * XREFs of ZwQuerySystemTime @ 0x18009E180
 * Callers:
 *     RtlAddFunctionTable @ 0x1800690C0 (RtlAddFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x180069900 (RtlInstallFunctionTableCallback.c)
 *     RtlAddGrowableFunctionTable @ 0x180069C10 (RtlAddGrowableFunctionTable.c)
 *     RtlCreateProcessReflection @ 0x1800D5BB0 (RtlCreateProcessReflection.c)
 *     RtlRunEncodeUnicodeString @ 0x1800E7060 (RtlRunEncodeUnicodeString.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ZwQuerySystemTime(_QWORD *a1)
{
  return RtlQuerySystemTime(a1);
}
