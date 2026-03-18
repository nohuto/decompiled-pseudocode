/*
 * XREFs of TdrTimedOperationBugcheckOnTimeout @ 0x1C0044518
 * Callers:
 *     TdrTimedOperationDelay @ 0x1C0044570 (TdrTimedOperationDelay.c)
 *     TdrTimedOperationWaitForSingleObject @ 0x1C0266550 (TdrTimedOperationWaitForSingleObject.c)
 * Callees:
 *     <none>
 */

void __noreturn TdrTimedOperationBugcheckOnTimeout()
{
  KeBugCheckEx(0xEAu, (ULONG_PTR)KeGetCurrentThread(), 0LL, 0LL, 0LL);
}
