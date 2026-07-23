/*
 * XREFs of RtlpProtectInvertedFunctionTable @ 0x18010B440
 * Callers:
 *     RtlAddGrowableFunctionTable @ 0x180068720 (RtlAddGrowableFunctionTable.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall RtlpProtectInvertedFunctionTable(int a1)
{
  LdrProtectMrdata(a1);
}
