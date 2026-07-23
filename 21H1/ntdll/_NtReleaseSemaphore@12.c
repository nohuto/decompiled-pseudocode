/*
 * XREFs of _NtReleaseSemaphore@12 @ 0x4B2F2A00
 * Callers:
 *     _TppCallbackEpilog@4 @ 0x4B2B6183 (_TppCallbackEpilog@4.c)
 *     _RtlReleaseResource@4 @ 0x4B2EA890 (_RtlReleaseResource@4.c)
 *     _RtlConvertExclusiveToShared@4 @ 0x4B34A4B0 (_RtlConvertExclusiveToShared@4.c)
 *     _RtlConvertSharedToExclusive@4 @ 0x4B34A510 (_RtlConvertSharedToExclusive@4.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtReleaseSemaphore(HANDLE SemaphoreHandle, LONG ReleaseCount, PLONG PreviousCount)
{
  return Wow64SystemServiceCall();
}
