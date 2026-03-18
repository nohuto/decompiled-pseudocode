/*
 * XREFs of CmpForceFlushWorker @ 0x1408724F0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     CmpDoFlushAll @ 0x14037B05C (CmpDoFlushAll.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 */

_QWORD *CmpForceFlushWorker()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  _DWORD *v3; // r9
  __int64 v4; // r8
  _DWORD *v5; // r9
  _QWORD *result; // rax
  _OWORD v7[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v7, 0, sizeof(v7));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    CmpAttachToRegistryProcess((__int64)v7, v1, v2, v3);
    CmpDoFlushAll();
    KiUnstackDetachProcess((__int64)v7, 0LL, v4, v5);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  }
  result = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v1, v2, (__int64)v3);
  _InterlockedExchange(&CmpForceFlushPending, 0);
  return result;
}
