/*
 * XREFs of IopQueryConflictList @ 0x14095F204
 * Callers:
 *     PiControlQueryConflictList @ 0x140959490 (PiControlQueryConflictList.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseSemaphore @ 0x1402D3440 (KeReleaseSemaphore.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     IopQueryConflictListInternal @ 0x14095F29C (IopQueryConflictListInternal.c)
 */

__int64 __fastcall IopQueryConflictList(int a1, int a2, __int64 a3, int a4, int a5)
{
  struct _KTHREAD *CurrentThread; // rax
  int v9; // r8d
  unsigned int ConflictListInternal; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
  ConflictListInternal = IopQueryConflictListInternal(a1, a2, v9, a4, a5);
  KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return ConflictListInternal;
}
