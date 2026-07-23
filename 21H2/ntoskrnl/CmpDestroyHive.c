/*
 * XREFs of CmpDestroyHive @ 0x1407293E8
 * Callers:
 *     CmpLoadKeyCommon @ 0x14026D10C (CmpLoadKeyCommon.c)
 *     CmLoadKey @ 0x140619944 (CmLoadKey.c)
 *     CmpCreateHive @ 0x1406F756C (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x1406F7F2C (CmpReorganizeHive.c)
 *     CmSaveKey @ 0x14072907C (CmSaveKey.c)
 *     CmpFreeAllMemory @ 0x14086BDF8 (CmpFreeAllMemory.c)
 *     CmReplaceKey @ 0x14086DB28 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x1408710A0 (CmpFlushBackupHive.c)
 *     CmpCreateEmptyHiveClone @ 0x140872FA8 (CmpCreateEmptyHiveClone.c)
 *     CmRestoreKey @ 0x14087C090 (CmRestoreKey.c)
 *     CmSaveMergedKeys @ 0x14087CBF0 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x14087D0BC (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x14087D558 (CmpRefreshHive.c)
 * Callees:
 *     CmpUnJoinClassOfTrust @ 0x140213A50 (CmpUnJoinClassOfTrust.c)
 *     CmpDeleteHive @ 0x1405E0094 (CmpDeleteHive.c)
 *     CmpCmdHiveClose @ 0x1405E0548 (CmpCmdHiveClose.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x1405E06B0 (CmpVERemoveHiveFromSIDMappingTable.c)
 *     CmpDestroySecurityCache @ 0x1405E07A8 (CmpDestroySecurityCache.c)
 *     CmpVolumeContextDecrementRefCount @ 0x1405E0904 (CmpVolumeContextDecrementRefCount.c)
 *     HvHiveCleanup @ 0x140721004 (HvHiveCleanup.c)
 */

void __fastcall CmpDestroyHive(volatile signed __int32 *P)
{
  struct _PRIVILEGE_SET *v2; // rcx

  CmpDestroySecurityCache((__int64)P);
  CmpUnJoinClassOfTrust((__int64)P);
  CmpVERemoveHiveFromSIDMappingTable((__int64)P);
  HvHiveCleanup((__int64)P);
  CmpCmdHiveClose((__int64)P);
  v2 = (struct _PRIVILEGE_SET *)*((_QWORD *)P + 604);
  if ( v2 )
    CmpVolumeContextDecrementRefCount(v2);
  if ( _InterlockedExchangeAdd(P + 1068, 0xFFFFFFFF) == 1 )
    CmpDeleteHive(P);
}
