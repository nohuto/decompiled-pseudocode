/*
 * XREFs of NtSaveKey @ 0x1408698E0
 * Callers:
 *     <none>
 * Callees:
 *     NtSaveKeyEx @ 0x140728E00 (NtSaveKeyEx.c)
 */

NTSTATUS __cdecl NtSaveKey(HANDLE KeyHandle, HANDLE FileHandle)
{
  return NtSaveKeyEx(KeyHandle, FileHandle, 1u);
}
