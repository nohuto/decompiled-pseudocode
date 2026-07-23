/*
 * XREFs of _ZwFlushInstructionCache@12 @ 0x4B2F3800
 * Callers:
 *     _LdrpProtectAndRelocateImage@20 @ 0x4B3310B1 (_LdrpProtectAndRelocateImage@20.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwFlushInstructionCache(HANDLE ProcessHandle, PVOID BaseAddress, SIZE_T Length)
{
  return Wow64SystemServiceCall();
}
