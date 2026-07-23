/*
 * XREFs of ZwSaveMergedKeys @ 0x1403F6640
 * Callers:
 *     NtSaveMergedKeys @ 0x140866150 (NtSaveMergedKeys.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSaveMergedKeys(HANDLE HighPrecedenceKeyHandle, HANDLE LowPrecedenceKeyHandle, HANDLE FileHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(HighPrecedenceKeyHandle);
}
