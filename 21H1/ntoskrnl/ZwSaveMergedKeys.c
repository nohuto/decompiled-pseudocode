/*
 * XREFs of ZwSaveMergedKeys @ 0x1403F53B0
 * Callers:
 *     NtSaveMergedKeys @ 0x140864E30 (NtSaveMergedKeys.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSaveMergedKeys(HANDLE HighPrecedenceKeyHandle, HANDLE LowPrecedenceKeyHandle, HANDLE FileHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(HighPrecedenceKeyHandle);
}
