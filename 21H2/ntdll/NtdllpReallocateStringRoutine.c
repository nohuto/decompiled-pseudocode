/*
 * XREFs of NtdllpReallocateStringRoutine @ 0x1800D4A28
 * Callers:
 *     LdrpLoadDependentModule @ 0x180017BE0 (LdrpLoadDependentModule.c)
 *     LdrpAllocateFileNameBufferIfNeeded @ 0x18001A930 (LdrpAllocateFileNameBufferIfNeeded.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NtdllpReallocateStringRoutine(__int64 a1, __int64 a2)
{
  return RtlReAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a2, a1);
}
