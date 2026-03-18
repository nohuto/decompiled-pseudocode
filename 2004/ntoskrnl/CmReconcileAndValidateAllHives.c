/*
 * XREFs of CmReconcileAndValidateAllHives @ 0x14086F200
 * Callers:
 *     NtSetSystemInformation @ 0x1406AA390 (NtSetSystemInformation.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 *     CmpDoFlushAll @ 0x14037BDDC (CmpDoFlushAll.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     CmpAttachToRegistryProcess @ 0x1405EA8E0 (CmpAttachToRegistryProcess.c)
 */

__int64 CmReconcileAndValidateAllHives()
{
  struct _KTHREAD *CurrentThread; // rax
  _OWORD v2[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v2, 0, sizeof(v2));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    CmpAttachToRegistryProcess((__int64)v2);
    CmpDoFlushAll();
    KiUnstackDetachProcess((__int64)v2, 0LL);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return 0LL;
}
