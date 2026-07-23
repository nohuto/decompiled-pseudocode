/*
 * XREFs of RtlpProtectReadOnlyHeap @ 0x18010B44C
 * Callers:
 *     RtlAddGrowableFunctionTable @ 0x180068720 (RtlAddGrowableFunctionTable.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall RtlpProtectReadOnlyHeap(int a1)
{
  LdrProtectMrdataHeap(a1);
}
