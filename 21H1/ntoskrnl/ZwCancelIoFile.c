/*
 * XREFs of ZwCancelIoFile @ 0x1403F2ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCancelIoFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
