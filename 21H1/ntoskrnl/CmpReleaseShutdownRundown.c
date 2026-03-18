/*
 * XREFs of CmpReleaseShutdownRundown @ 0x1405EACA0
 * Callers:
 *     CmpTryToRundownHive @ 0x1402D2F68 (CmpTryToRundownHive.c)
 *     CmOpenKey @ 0x1405EA950 (CmOpenKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x1405F4060 (NtNotifyChangeMultipleKeys.c)
 *     CmUnloadKey @ 0x140659A98 (CmUnloadKey.c)
 *     CmpLateUnloadHiveWorker @ 0x14065AD30 (CmpLateUnloadHiveWorker.c)
 *     CmpCreateHive @ 0x140688850 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x140688F04 (CmpReorganizeHive.c)
 *     CmpSetKeySecurity @ 0x14068AE1C (CmpSetKeySecurity.c)
 *     CmLoadDifferencingKey @ 0x14068C83C (CmLoadDifferencingKey.c)
 *     CmCreateKey @ 0x14068D940 (CmCreateKey.c)
 *     NtLockRegistryKey @ 0x1407ADAB0 (NtLockRegistryKey.c)
 *     CmpAssignKeySecurity @ 0x1407BA790 (CmpAssignKeySecurity.c)
 *     CmpSaveBootControlSet @ 0x140863130 (CmpSaveBootControlSet.c)
 *     NtQueryOpenSubKeys @ 0x140863D70 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140863F90 (NtQueryOpenSubKeysEx.c)
 *     CmpLoadHiveVolatile @ 0x140878768 (CmpLoadHiveVolatile.c)
 *     CmGetSystemDriverList @ 0x140A58398 (CmGetSystemDriverList.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 */

_QWORD *CmpReleaseShutdownRundown()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9

  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v0, v1, v2);
}
