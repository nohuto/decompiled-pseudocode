/*
 * XREFs of TdrTimedOperationBugcheckOnTimeout @ 0x1C0044418
 * Callers:
 *     TdrTimedOperationDelay @ 0x1C0044470 (TdrTimedOperationDelay.c)
 *     TdrTimedOperationWaitForSingleObject @ 0x1C0265570 (TdrTimedOperationWaitForSingleObject.c)
 * Callees:
 *     <none>
 */

void __noreturn TdrTimedOperationBugcheckOnTimeout()
{
  KeBugCheckEx(0xEAu, (ULONG_PTR)KeGetCurrentThread(), 0LL, 0LL, 0LL);
}
