/*
 * XREFs of IoQueryFileInformation @ 0x1406C5CF0
 * Callers:
 *     IopParseDevice @ 0x140700F60 (IopParseDevice.c)
 * Callees:
 *     IopQueryXxxInformation @ 0x1406C9708 (IopQueryXxxInformation.c)
 */

NTSTATUS __stdcall IoQueryFileInformation(
        PFILE_OBJECT FileObject,
        FILE_INFORMATION_CLASS FileInformationClass,
        ULONG Length,
        PVOID FileInformation,
        PULONG ReturnedLength)
{
  return IopQueryXxxInformation((PADAPTER_OBJECT)FileObject, (__int64)FileInformation, (__int64)ReturnedLength, 1);
}
