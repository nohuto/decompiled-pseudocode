/*
 * XREFs of NtFlushBuffersFile @ 0x1405F79C0
 * Callers:
 *     <none>
 * Callees:
 *     NtFlushBuffersFileEx @ 0x1405F79F0 (NtFlushBuffersFileEx.c)
 */

NTSTATUS __cdecl NtFlushBuffersFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  return NtFlushBuffersFileEx(FileHandle, 0, 0LL, 0, IoStatusBlock);
}
