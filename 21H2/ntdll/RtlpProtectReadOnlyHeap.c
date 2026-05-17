/*
 * XREFs of RtlpProtectReadOnlyHeap @ 0x18010B2EC
 * Callers:
 *     RtlAddGrowableFunctionTable @ 0x180069C10 (RtlAddGrowableFunctionTable.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall RtlpProtectReadOnlyHeap(int a1)
{
  return LdrProtectMrdataHeap(a1);
}
