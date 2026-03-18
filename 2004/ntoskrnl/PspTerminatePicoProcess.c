/*
 * XREFs of PspTerminatePicoProcess @ 0x140908F90
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     PspTerminateProcess @ 0x1406B3CF4 (PspTerminateProcess.c)
 */

__int64 __fastcall PspTerminatePicoProcess(ULONG_PTR a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v3; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = PspTerminateProcess(a1, (struct _EX_RUNDOWN_REF *)CurrentThread, a2, 8);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v3;
}
