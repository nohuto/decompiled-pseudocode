/*
 * XREFs of TdrTimedOperationBugcheckOnTimeout @ 0x1C00453A8
 * Callers:
 *     TdrTimedOperationDelay @ 0x1C0045400 (TdrTimedOperationDelay.c)
 *     TdrTimedOperationWaitForSingleObject @ 0x1C0266790 (TdrTimedOperationWaitForSingleObject.c)
 * Callees:
 *     <none>
 */

void __noreturn TdrTimedOperationBugcheckOnTimeout()
{
  KeBugCheckEx(0xEAu, (ULONG_PTR)KeGetCurrentThread(), 0LL, 0LL, 0LL);
}
