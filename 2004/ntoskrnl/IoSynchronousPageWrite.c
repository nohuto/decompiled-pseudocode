/*
 * XREFs of IoSynchronousPageWrite @ 0x140350700
 * Callers:
 *     SmKmStoreFileWriteHeader @ 0x14092987C (SmKmStoreFileWriteHeader.c)
 * Callees:
 *     IoSynchronousPageWriteEx @ 0x140227DC8 (IoSynchronousPageWriteEx.c)
 */

NTSTATUS __stdcall IoSynchronousPageWrite(
        PFILE_OBJECT FileObject,
        PMDL MemoryDescriptorList,
        PLARGE_INTEGER StartingOffset,
        PKEVENT Event,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  return IoSynchronousPageWriteEx(FileObject, MemoryDescriptorList, StartingOffset, Event, 0, 0LL, IoStatusBlock);
}
