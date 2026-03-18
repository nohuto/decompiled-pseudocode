/*
 * XREFs of PfLockExclusiveAcquire @ 0x1403CEC90
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1406F4480 (PfSetSuperfetchInformation.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall PfLockExclusiveAcquire(ULONG_PTR a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1, 0LL);
}
