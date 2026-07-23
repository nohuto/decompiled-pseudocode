/*
 * XREFs of NtSaveKey @ 0x140866130
 * Callers:
 *     <none>
 * Callees:
 *     NtSaveKeyEx @ 0x140716F00 (NtSaveKeyEx.c)
 */

NTSTATUS __cdecl NtSaveKey(HANDLE KeyHandle, HANDLE FileHandle)
{
  return NtSaveKeyEx(KeyHandle, FileHandle, 1u);
}
