/*
 * XREFs of sub_180003790 @ 0x180003790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall sub_180003790(SIZE_T a1)
{
  return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
