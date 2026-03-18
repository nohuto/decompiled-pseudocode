/*
 * XREFs of PspTerminatePicoProcess @ 0x14090EBB0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     PspTerminateProcess @ 0x1406995B8 (PspTerminateProcess.c)
 */

__int64 __fastcall PspTerminatePicoProcess(ULONG_PTR a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v3; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = PspTerminateProcess(a1, (__int64)CurrentThread, a2, 8);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v3;
}
