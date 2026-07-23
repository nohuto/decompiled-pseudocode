/*
 * XREFs of IoQueryFileInformation @ 0x1406745E0
 * Callers:
 *     IopParseDevice @ 0x140718340 (IopParseDevice.c)
 * Callees:
 *     IopQueryXxxInformation @ 0x140677FF8 (IopQueryXxxInformation.c)
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
