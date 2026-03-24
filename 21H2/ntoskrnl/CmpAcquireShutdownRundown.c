/*
 * XREFs of CmpAcquireShutdownRundown @ 0x140656AB0
 * Callers:
 *     CmpTryToRundownHive @ 0x140361574 (CmpTryToRundownHive.c)
 *     CmOpenKey @ 0x140655330 (CmOpenKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x140663230 (NtNotifyChangeMultipleKeys.c)
 *     CmpSetKeySecurity @ 0x14066DF0C (CmpSetKeySecurity.c)
 *     CmLoadDifferencingKey @ 0x14066E58C (CmLoadDifferencingKey.c)
 *     CmCreateKey @ 0x14066F690 (CmCreateKey.c)
 *     CmUnloadKey @ 0x140719C78 (CmUnloadKey.c)
 *     CmpLateUnloadHiveWorker @ 0x14071C570 (CmpLateUnloadHiveWorker.c)
 *     CmpCreateHive @ 0x14071E618 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x140720AB8 (CmpReorganizeHive.c)
 *     CmpLoadHiveThread @ 0x14079ED50 (CmpLoadHiveThread.c)
 *     NtLockRegistryKey @ 0x1407C2F50 (NtLockRegistryKey.c)
 *     CmpAssignKeySecurity @ 0x1407D0450 (CmpAssignKeySecurity.c)
 *     CmpSaveBootControlSet @ 0x140867A80 (CmpSaveBootControlSet.c)
 *     NtQueryOpenSubKeys @ 0x1408686D0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1408688F0 (NtQueryOpenSubKeysEx.c)
 *     CmpLoadHiveVolatile @ 0x14087CF5C (CmpLoadHiveVolatile.c)
 *     CmGetSystemDriverList @ 0x140A5F174 (CmGetSystemDriverList.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireRundownProtection_0 @ 0x14027C9B0 (ExAcquireRundownProtection_0.c)
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
