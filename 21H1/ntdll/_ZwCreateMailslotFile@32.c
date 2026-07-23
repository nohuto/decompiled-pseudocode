/*
 * XREFs of _ZwCreateMailslotFile@32 @ 0x4B2F34A0
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwCreateMailslotFile(
        PHANDLE FileHandle,
        ULONG DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG CreateOptions,
        ULONG MailslotQuota,
        ULONG MaximumMessageSize,
        PLARGE_INTEGER ReadTimeout)
{
  return Wow64SystemServiceCall();
}
