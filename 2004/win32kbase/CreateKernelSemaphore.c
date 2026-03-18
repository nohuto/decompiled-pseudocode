/*
 * XREFs of CreateKernelSemaphore @ 0x1C000BAC0
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C0006400 (RIMRegisterForInputWithCallbacks.c)
 *     ?Initialize@CInpLockGuard@@QEAAHXZ @ 0x1C000BA28 (-Initialize@CInpLockGuard@@QEAAHXZ.c)
 *     Win32kBaseDriverEntry @ 0x1C02960C0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C00A5C70 (Win32AllocPoolNonPaged.c)
 */

struct _KSEMAPHORE *__fastcall CreateKernelSemaphore(LONG Count, LONG Limit)
{
  struct _KSEMAPHORE *v4; // rax
  struct _KSEMAPHORE *v5; // rbx

  v4 = (struct _KSEMAPHORE *)Win32AllocPoolNonPaged(32LL, 1934324565LL);
  v5 = v4;
  if ( v4 )
    KeInitializeSemaphore(v4, Count, Limit);
  return v5;
}
