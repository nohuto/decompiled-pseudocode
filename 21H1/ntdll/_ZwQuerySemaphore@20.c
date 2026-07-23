/*
 * XREFs of _ZwQuerySemaphore@20 @ 0x4B2F3F50
 * Callers:
 *     PsspDumpObject_Semaphore @ 0x4B388020 (PsspDumpObject_Semaphore.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwQuerySemaphore(
        HANDLE SemaphoreHandle,
        SEMAPHORE_INFORMATION_CLASS SemaphoreInformationClass,
        PVOID SemaphoreInformation,
        ULONG SemaphoreInformationLength,
        PULONG ReturnLength)
{
  return Wow64SystemServiceCall();
}
