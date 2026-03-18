/*
 * XREFs of IoQueryFileInformation @ 0x1406EC9F0
 * Callers:
 *     IopParseDevice @ 0x1405FDEC0 (IopParseDevice.c)
 * Callees:
 *     IopQueryXxxInformation @ 0x14063AACC (IopQueryXxxInformation.c)
 */

NTSTATUS __stdcall IoQueryFileInformation(
        PFILE_OBJECT FileObject,
        FILE_INFORMATION_CLASS FileInformationClass,
        ULONG Length,
        PVOID FileInformation,
        PULONG ReturnedLength)
{
  return IopQueryXxxInformation(
           (PADAPTER_OBJECT)FileObject,
           FileInformationClass,
           Length,
           0,
           (struct _IRP *)FileInformation,
           ReturnedLength,
           1);
}
