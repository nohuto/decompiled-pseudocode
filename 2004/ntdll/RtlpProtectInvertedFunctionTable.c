/*
 * XREFs of RtlpProtectInvertedFunctionTable @ 0x18010AF30
 * Callers:
 *     RtlAddGrowableFunctionTable @ 0x180068610 (RtlAddGrowableFunctionTable.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall RtlpProtectInvertedFunctionTable(int a1)
{
  LdrProtectMrdata(a1);
}
