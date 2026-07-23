/*
 * XREFs of NtdllpReallocateStringRoutine @ 0x1800D48D8
 * Callers:
 *     LdrpLoadDependentModule @ 0x180017BE0 (LdrpLoadDependentModule.c)
 *     LdrpAllocateFileNameBufferIfNeeded @ 0x18001A930 (LdrpAllocateFileNameBufferIfNeeded.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall NtdllpReallocateStringRoutine(SIZE_T a1, void *a2)
{
  return RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, a2, a1);
}
