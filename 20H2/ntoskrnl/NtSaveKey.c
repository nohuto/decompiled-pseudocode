/*
 * XREFs of NtSaveKey @ 0x14086BB50
 * Callers:
 *     <none>
 * Callees:
 *     NtSaveKeyEx @ 0x140724EC0 (NtSaveKeyEx.c)
 */

NTSTATUS __cdecl NtSaveKey(HANDLE KeyHandle, HANDLE FileHandle)
{
  return NtSaveKeyEx(KeyHandle, FileHandle, 1u);
}
