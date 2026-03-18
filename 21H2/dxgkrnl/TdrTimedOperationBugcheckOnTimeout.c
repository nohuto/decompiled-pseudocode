/*
 * XREFs of TdrTimedOperationBugcheckOnTimeout @ 0x1C0052898
 * Callers:
 *     TdrTimedOperationDelay @ 0x1C00528F0 (TdrTimedOperationDelay.c)
 *     TdrTimedOperationWaitForSingleObject @ 0x1C0307060 (TdrTimedOperationWaitForSingleObject.c)
 * Callees:
 *     <none>
 */

void __noreturn TdrTimedOperationBugcheckOnTimeout()
{
  KeBugCheckEx(0xEAu, (ULONG_PTR)KeGetCurrentThread(), 0LL, 0LL, 0LL);
}
