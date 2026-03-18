/*
 * XREFs of IopQueryConflictList @ 0x1408B6754
 * Callers:
 *     PiControlQueryConflictList @ 0x1408B0750 (PiControlQueryConflictList.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     KeReleaseSemaphore @ 0x140327E90 (KeReleaseSemaphore.c)
 *     IopQueryConflictListInternal @ 0x1408B67EC (IopQueryConflictListInternal.c)
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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return ConflictListInternal;
}
