/*
 * XREFs of IoQueryVolumeInformation @ 0x1406EBAF0
 * Callers:
 *     MiCreatePagingFile @ 0x14079E69C (MiCreatePagingFile.c)
 * Callees:
 *     IopQueryXxxInformation @ 0x14063AACC (IopQueryXxxInformation.c)
 */

NTSTATUS __stdcall IoQueryVolumeInformation(
        PFILE_OBJECT FileObject,
        FS_INFORMATION_CLASS FsInformationClass,
        ULONG Length,
        PVOID FsInformation,
        PULONG ReturnedLength)
{
  return IopQueryXxxInformation(
           (PADAPTER_OBJECT)FileObject,
           FsInformationClass,
           Length,
           0,
           (struct _IRP *)FsInformation,
           ReturnedLength,
           0);
}
