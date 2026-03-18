/*
 * XREFs of CmReconcileAndValidateAllHives @ 0x140874D50
 * Callers:
 *     NtSetSystemInformation @ 0x1406F5A80 (NtSetSystemInformation.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     CmpDoFlushAll @ 0x14037DB0C (CmpDoFlushAll.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     CmpAttachToRegistryProcess @ 0x1406790E0 (CmpAttachToRegistryProcess.c)
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
    KiUnstackDetachProcess((__int64)v2, 0);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return 0LL;
}
