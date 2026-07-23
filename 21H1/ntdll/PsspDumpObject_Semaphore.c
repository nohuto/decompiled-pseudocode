/*
 * XREFs of PsspDumpObject_Semaphore @ 0x4B388020
 * Callers:
 *     <none>
 * Callees:
 *     _ZwQuerySemaphore@20 @ 0x4B2F3F50 (_ZwQuerySemaphore@20.c)
 */

NTSTATUS __stdcall PsspDumpObject_Semaphore(
        HANDLE SemaphoreHandle,
        PVOID SemaphoreInformation,
        unsigned int a3,
        PULONG ReturnLength)
{
  *ReturnLength = 0;
  if ( a3 >= 8 )
    return ZwQuerySemaphore(SemaphoreHandle, SemaphoreBasicInformation, SemaphoreInformation, 8u, ReturnLength);
  else
    return -1073741789;
}
