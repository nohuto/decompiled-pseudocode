/*
 * XREFs of RtlpProtectInvertedFunctionTable @ 0x18010B2E0
 * Callers:
 *     RtlAddGrowableFunctionTable @ 0x180069C10 (RtlAddGrowableFunctionTable.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall RtlpProtectInvertedFunctionTable(int a1)
{
  return LdrProtectMrdata(a1);
}
