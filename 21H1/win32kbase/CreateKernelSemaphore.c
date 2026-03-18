/*
 * XREFs of CreateKernelSemaphore @ 0x1C0021520
 * Callers:
 *     ?Initialize@CInpLockGuard@@QEAAHXZ @ 0x1C0021490 (-Initialize@CInpLockGuard@@QEAAHXZ.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C0037400 (RIMRegisterForInputWithCallbacks.c)
 *     Win32kBaseDriverEntry @ 0x1C029C0C0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C00912D0 (Win32AllocPoolNonPaged.c)
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
