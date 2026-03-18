/*
 * XREFs of CmpReleaseShutdownRundown @ 0x14060C670
 * Callers:
 *     CmpTryToRundownHive @ 0x1402F2E7C (CmpTryToRundownHive.c)
 *     CmpCreateHive @ 0x1405DDED8 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x1405DE58C (CmpReorganizeHive.c)
 *     CmpSetKeySecurity @ 0x1405E0AE4 (CmpSetKeySecurity.c)
 *     NtNotifyChangeMultipleKeys @ 0x1405F7BF0 (NtNotifyChangeMultipleKeys.c)
 *     CmOpenKey @ 0x14060C320 (CmOpenKey.c)
 *     CmUnloadKey @ 0x1406A219C (CmUnloadKey.c)
 *     CmpLateUnloadHiveWorker @ 0x1406A2B40 (CmpLateUnloadHiveWorker.c)
 *     CmLoadDifferencingKey @ 0x1406FE1FC (CmLoadDifferencingKey.c)
 *     CmCreateKey @ 0x1406FF300 (CmCreateKey.c)
 *     CmpLoadHiveThread @ 0x140794830 (CmpLoadHiveThread.c)
 *     NtLockRegistryKey @ 0x1407BEB50 (NtLockRegistryKey.c)
 *     CmpAssignKeySecurity @ 0x1407CC190 (CmpAssignKeySecurity.c)
 *     CmpSaveBootControlSet @ 0x140869E70 (CmpSaveBootControlSet.c)
 *     NtQueryOpenSubKeys @ 0x14086AAB0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x14086ACD0 (NtQueryOpenSubKeysEx.c)
 *     CmpLoadHiveVolatile @ 0x14087F5C8 (CmpLoadHiveVolatile.c)
 *     CmGetSystemDriverList @ 0x140A5E798 (CmGetSystemDriverList.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 */

_QWORD *CmpReleaseShutdownRundown()
{
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
