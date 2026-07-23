/*
 * XREFs of _NtdllpReallocateStringRoutine@8 @ 0x4B333B47
 * Callers:
 *     _LdrpPreprocessDllName@16 @ 0x4B2CB090 (_LdrpPreprocessDllName@16.c)
 *     _LdrpLoadDependentModule@24 @ 0x4B2CB610 (_LdrpLoadDependentModule@24.c)
 *     _LdrpAppendUnicodeStringToFilenameBuffer@8 @ 0x4B2CC7A7 (_LdrpAppendUnicodeStringToFilenameBuffer@8.c)
 *     _LdrpAllocateFileNameBufferIfNeeded@8 @ 0x4B2CE9A7 (_LdrpAllocateFileNameBufferIfNeeded@8.c)
 * Callees:
 *     _RtlReAllocateHeap@16 @ 0x4B2C26C0 (_RtlReAllocateHeap@16.c)
 */

PVOID __stdcall NtdllpReallocateStringRoutine(SIZE_T Size)
{
  SIZE_T _FFFFFFFC; // [esp-4h] [ebp-4h]

  LODWORD(_FFFFFFFC) = Size;
  return RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)HIDWORD(Size), _FFFFFFFC);
}
