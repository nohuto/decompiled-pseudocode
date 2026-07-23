/*
 * XREFs of NtSaveKey @ 0x140864E10
 * Callers:
 *     <none>
 * Callees:
 *     NtSaveKeyEx @ 0x140714B70 (NtSaveKeyEx.c)
 */

NTSTATUS __cdecl NtSaveKey(HANDLE KeyHandle, HANDLE FileHandle)
{
  return NtSaveKeyEx(KeyHandle, FileHandle, 1u);
}
