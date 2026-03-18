/*
 * XREFs of IoSynchronousPageWrite @ 0x14024CD90
 * Callers:
 *     SmKmStoreFileWriteHeader @ 0x14092F6A4 (SmKmStoreFileWriteHeader.c)
 * Callees:
 *     IoSynchronousPageWriteEx @ 0x14024E538 (IoSynchronousPageWriteEx.c)
 */

NTSTATUS __stdcall IoSynchronousPageWrite(
        PFILE_OBJECT FileObject,
        PMDL MemoryDescriptorList,
        PLARGE_INTEGER StartingOffset,
        PKEVENT Event,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  return IoSynchronousPageWriteEx(
           (_DWORD)FileObject,
           (_DWORD)MemoryDescriptorList,
           (_DWORD)StartingOffset,
           (_DWORD)Event,
           0,
           0LL,
           (__int64)IoStatusBlock);
}
