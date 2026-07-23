/*
 * XREFs of PsspDumpObject_Semaphore @ 0x180115C50
 * Callers:
 *     <none>
 * Callees:
 *     ZwQuerySemaphore @ 0x18009F9A0 (ZwQuerySemaphore.c)
 */

NTSTATUS __fastcall PsspDumpObject_Semaphore(void *a1, void *a2, unsigned int a3, ULONG *ReturnLength)
{
  *ReturnLength = 0;
  if ( a3 >= 8 )
    return ZwQuerySemaphore(a1, SemaphoreBasicInformation, a2, 8u, ReturnLength);
  else
    return -1073741789;
}
