/*
 * XREFs of RtlpProtectReadOnlyHeap @ 0x18010AF3C
 * Callers:
 *     RtlAddGrowableFunctionTable @ 0x180068610 (RtlAddGrowableFunctionTable.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall RtlpProtectReadOnlyHeap(int a1)
{
  return LdrProtectMrdataHeap(a1);
}
