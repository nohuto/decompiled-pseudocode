/*
 * XREFs of CmpAcquireShutdownRundown @ 0x140695430
 * Callers:
 *     CmpTryToRundownHive @ 0x140272410 (CmpTryToRundownHive.c)
 *     NtNotifyChangeMultipleKeys @ 0x1405E2200 (NtNotifyChangeMultipleKeys.c)
 *     CmpCreateHive @ 0x14063ACD0 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x14063B384 (CmpReorganizeHive.c)
 *     CmpSetKeySecurity @ 0x14063D900 (CmpSetKeySecurity.c)
 *     CmpLateUnloadHiveWorker @ 0x1406434F0 (CmpLateUnloadHiveWorker.c)
 *     CmUnloadKey @ 0x14064FEBC (CmUnloadKey.c)
 *     CmLoadDifferencingKey @ 0x140650EAC (CmLoadDifferencingKey.c)
 *     CmCreateKey @ 0x140651FB0 (CmCreateKey.c)
 *     CmOpenKey @ 0x140693E90 (CmOpenKey.c)
 *     CmpLoadHiveThread @ 0x140786B20 (CmpLoadHiveThread.c)
 *     NtLockRegistryKey @ 0x1407B0C10 (NtLockRegistryKey.c)
 *     CmpAssignKeySecurity @ 0x1407BD900 (CmpAssignKeySecurity.c)
 *     CmpSaveBootControlSet @ 0x140864450 (CmpSaveBootControlSet.c)
 *     NtQueryOpenSubKeys @ 0x140865090 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1408652B0 (NtQueryOpenSubKeysEx.c)
 *     CmpLoadHiveVolatile @ 0x140879A58 (CmpLoadHiveVolatile.c)
 *     CmGetSystemDriverList @ 0x140A4B2CC (CmGetSystemDriverList.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 */

BOOLEAN CmpAcquireShutdownRundown()
{
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN result; // al

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !result )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return 0;
  }
  return result;
}
