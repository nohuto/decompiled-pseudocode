/*
 * XREFs of ZwSaveMergedKeys @ 0x1403FB210
 * Callers:
 *     NtSaveMergedKeys @ 0x14086BB70 (NtSaveMergedKeys.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSaveMergedKeys(HANDLE HighPrecedenceKeyHandle, HANDLE LowPrecedenceKeyHandle, HANDLE FileHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(HighPrecedenceKeyHandle);
}
