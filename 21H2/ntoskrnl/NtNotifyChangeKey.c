/*
 * XREFs of NtNotifyChangeKey @ 0x140657FE0
 * Callers:
 *     ExpWatchProductTypeWork @ 0x140612A40 (ExpWatchProductTypeWork.c)
 *     SepAdtRegNotificationCallback @ 0x14079E3C0 (SepAdtRegNotificationCallback.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x14079E568 (SepAdtOpenRegAndSetupNotification.c)
 *     ExpWatchLicenseInfoWork @ 0x14094C1A0 (ExpWatchLicenseInfoWork.c)
 *     ExpWatchProductTypeInitialization @ 0x140A42C04 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     NtNotifyChangeMultipleKeys @ 0x140658050 (NtNotifyChangeMultipleKeys.c)
 */

NTSTATUS __cdecl NtNotifyChangeKey(
        HANDLE KeyHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG CompletionFilter,
        BOOLEAN WatchTree,
        PVOID Buffer,
        ULONG BufferSize,
        BOOLEAN Asynchronous)
{
  return NtNotifyChangeMultipleKeys(
           KeyHandle,
           0,
           0LL,
           Event,
           ApcRoutine,
           ApcContext,
           IoStatusBlock,
           CompletionFilter,
           WatchTree,
           Buffer,
           BufferSize,
           Asynchronous);
}
