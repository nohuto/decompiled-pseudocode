/*
 * XREFs of RtlpProtectInvertedFunctionTable @ 0x18010B2A0
 * Callers:
 *     RtlAddGrowableFunctionTable @ 0x180069C10 (RtlAddGrowableFunctionTable.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall RtlpProtectInvertedFunctionTable(int a1)
{
  LdrProtectMrdata(a1);
}
