/*
 * XREFs of RtlpProtectReadOnlyHeap @ 0x18010B44C
 * Callers:
 *     RtlAddGrowableFunctionTable @ 0x180068720 (RtlAddGrowableFunctionTable.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall RtlpProtectReadOnlyHeap(int a1)
{
  return LdrProtectMrdataHeap(a1);
}
