/*
 * XREFs of IoQueryVolumeInformation @ 0x1406E8DF0
 * Callers:
 *     MiCreatePagingFile @ 0x14084AA8C (MiCreatePagingFile.c)
 * Callees:
 *     IopQueryXxxInformation @ 0x14071E6BC (IopQueryXxxInformation.c)
 */

NTSTATUS __stdcall IoQueryVolumeInformation(
        PFILE_OBJECT FileObject,
        FS_INFORMATION_CLASS FsInformationClass,
        ULONG Length,
        PVOID FsInformation,
        PULONG ReturnedLength)
{
  return IopQueryXxxInformation(FileObject, (__int64)FsInformation, (__int64)ReturnedLength, 0);
}
