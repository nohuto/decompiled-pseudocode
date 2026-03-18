/*
 * XREFs of EtwpStartTrace @ 0x140713044
 * Callers:
 *     NtTraceControl @ 0x140620910 (NtTraceControl.c)
 *     EtwWmitraceWorker @ 0x14093F0F4 (EtwWmitraceWorker.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeReleaseMutex @ 0x140240290 (KeReleaseMutex.c)
 *     EtwpStartLogger @ 0x140713B28 (EtwpStartLogger.c)
 */

__int64 __fastcall EtwpStartTrace(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KMUTANT *v5; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (struct _KMUTANT *)(a1 + 4584);
  KeWaitForSingleObject((PVOID)(a1 + 4584), Executive, 0, 0, 0LL);
  LODWORD(a2) = EtwpStartLogger(a1, a2);
  KeReleaseMutex(v5, 0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)a2;
}
