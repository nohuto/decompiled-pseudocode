/*
 * XREFs of NtQueryInformationByName @ 0x140891740
 * Callers:
 *     <none>
 * Callees:
 *     IoQueryInformationByName @ 0x1405CF6C0 (IoQueryInformationByName.c)
 */

NTSTATUS __cdecl NtQueryInformationByName(
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  return IoQueryInformationByName(
           (__int64)ObjectAttributes,
           (__int64)IoStatusBlock,
           FileInformation,
           Length,
           FileInformationClass,
           0,
           0LL);
}
