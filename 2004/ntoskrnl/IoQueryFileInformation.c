/*
 * XREFs of IoQueryFileInformation @ 0x1407104D0
 * Callers:
 *     IopParseDevice @ 0x140675FA0 (IopParseDevice.c)
 * Callees:
 *     IopQueryXxxInformation @ 0x140605A8C (IopQueryXxxInformation.c)
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
