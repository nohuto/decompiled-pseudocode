/*
 * XREFs of _ZwQuerySemaphore@20 @ 0x4B2F3F50
 * Callers:
 *     PsspDumpObject_Semaphore @ 0x4B388020 (PsspDumpObject_Semaphore.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall ZwQuerySemaphore(int a1, int a2, int a3, int a4, int a5)
{
  return Wow64SystemServiceCall();
}
