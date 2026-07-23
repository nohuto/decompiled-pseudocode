/*
 * XREFs of NtFlushBuffersFile @ 0x1406C7670
 * Callers:
 *     <none>
 * Callees:
 *     NtFlushBuffersFileEx @ 0x1406C76A0 (NtFlushBuffersFileEx.c)
 */

NTSTATUS __cdecl NtFlushBuffersFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  return NtFlushBuffersFileEx(FileHandle, 0, 0LL, 0, IoStatusBlock);
}
