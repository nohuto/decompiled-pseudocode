/*
 * XREFs of TdrTimedOperationBugcheckOnTimeout @ 0x1C00434F8
 * Callers:
 *     TdrTimedOperationDelay @ 0x1C0043550 (TdrTimedOperationDelay.c)
 *     TdrTimedOperationWaitForSingleObject @ 0x1C0262250 (TdrTimedOperationWaitForSingleObject.c)
 * Callees:
 *     <none>
 */

void __noreturn TdrTimedOperationBugcheckOnTimeout()
{
  KeBugCheckEx(0xEAu, (ULONG_PTR)KeGetCurrentThread(), 0LL, 0LL, 0LL);
}
