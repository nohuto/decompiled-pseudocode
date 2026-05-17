/*
 * XREFs of RtlpProtectInvertedFunctionTable @ 0x18010AF30
 * Callers:
 *     RtlAddGrowableFunctionTable @ 0x180068610 (RtlAddGrowableFunctionTable.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall RtlpProtectInvertedFunctionTable(int a1)
{
  return LdrProtectMrdata(a1);
}
