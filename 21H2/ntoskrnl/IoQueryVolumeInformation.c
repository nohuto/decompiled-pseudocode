/*
 * XREFs of IoQueryVolumeInformation @ 0x140674610
 * Callers:
 *     MiCreatePagingFile @ 0x1407B6B3C (MiCreatePagingFile.c)
 * Callees:
 *     IopQueryXxxInformation @ 0x140677FF8 (IopQueryXxxInformation.c)
 */

NTSTATUS __stdcall IoQueryVolumeInformation(
        PFILE_OBJECT FileObject,
        FS_INFORMATION_CLASS FsInformationClass,
        ULONG Length,
        PVOID FsInformation,
        PULONG ReturnedLength)
{
  return IopQueryXxxInformation((PADAPTER_OBJECT)FileObject, (__int64)FsInformation, (__int64)ReturnedLength, 0);
}
