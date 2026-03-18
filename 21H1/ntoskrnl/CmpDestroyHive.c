/*
 * XREFs of CmpDestroyHive @ 0x140715158
 * Callers:
 *     CmpLoadKeyCommon @ 0x1402E1B78 (CmpLoadKeyCommon.c)
 *     CmLoadKey @ 0x1405D5730 (CmLoadKey.c)
 *     CmpCreateHive @ 0x140688850 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x140688F04 (CmpReorganizeHive.c)
 *     CmSaveKey @ 0x140714DEC (CmSaveKey.c)
 *     CmpFreeAllMemory @ 0x1408672F8 (CmpFreeAllMemory.c)
 *     CmReplaceKey @ 0x140869428 (CmReplaceKey.c)
 *     CmpCreateEmptyHiveClone @ 0x14086DF88 (CmpCreateEmptyHiveClone.c)
 *     CmpFlushBackupHive @ 0x14086FC00 (CmpFlushBackupHive.c)
 *     CmRestoreKey @ 0x140877748 (CmRestoreKey.c)
 *     CmSaveMergedKeys @ 0x14087829C (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x140878768 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x140878C04 (CmpRefreshHive.c)
 * Callees:
 *     CmpUnJoinClassOfTrust @ 0x1402D2E54 (CmpUnJoinClassOfTrust.c)
 *     CmpCmdHiveClose @ 0x14065B1C8 (CmpCmdHiveClose.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x14065B320 (CmpVERemoveHiveFromSIDMappingTable.c)
 *     CmpDestroySecurityCache @ 0x14065B3D8 (CmpDestroySecurityCache.c)
 *     CmpVolumeContextDecrementRefCount @ 0x14065B488 (CmpVolumeContextDecrementRefCount.c)
 *     CmpDeleteHive @ 0x14065B4F8 (CmpDeleteHive.c)
 *     HvHiveCleanup @ 0x140698314 (HvHiveCleanup.c)
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
