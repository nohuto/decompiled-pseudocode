/*
 * XREFs of IoQueryFileInformation @ 0x1406E2780
 * Callers:
 *     IopParseDevice @ 0x1405FE3D0 (IopParseDevice.c)
 * Callees:
 *     IopQueryXxxInformation @ 0x140634898 (IopQueryXxxInformation.c)
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
