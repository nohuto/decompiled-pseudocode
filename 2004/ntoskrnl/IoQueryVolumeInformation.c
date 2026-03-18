/*
 * XREFs of IoQueryVolumeInformation @ 0x14070F520
 * Callers:
 *     MiCreatePagingFile @ 0x1407A267C (MiCreatePagingFile.c)
 * Callees:
 *     IopQueryXxxInformation @ 0x140605A8C (IopQueryXxxInformation.c)
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
