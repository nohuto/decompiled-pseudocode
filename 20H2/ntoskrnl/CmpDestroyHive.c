/*
 * XREFs of CmpDestroyHive @ 0x1407254A8
 * Callers:
 *     CmpLoadKeyCommon @ 0x140203EFC (CmpLoadKeyCommon.c)
 *     CmpCreateHive @ 0x1405DDED8 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x1405DE58C (CmpReorganizeHive.c)
 *     CmLoadKey @ 0x1406DAE70 (CmLoadKey.c)
 *     CmSaveKey @ 0x14072513C (CmSaveKey.c)
 *     CmpFreeAllMemory @ 0x14086E068 (CmpFreeAllMemory.c)
 *     CmReplaceKey @ 0x1408701CC (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x140873704 (CmpFlushBackupHive.c)
 *     CmpCreateEmptyHiveClone @ 0x140875598 (CmpCreateEmptyHiveClone.c)
 *     CmRestoreKey @ 0x14087E5A8 (CmRestoreKey.c)
 *     CmSaveMergedKeys @ 0x14087F0FC (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x14087F5C8 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x14087FA64 (CmpRefreshHive.c)
 * Callees:
 *     CmpUnJoinClassOfTrust @ 0x1402F2D68 (CmpUnJoinClassOfTrust.c)
 *     CmpCmdHiveClose @ 0x1406A2FD8 (CmpCmdHiveClose.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x1406A3130 (CmpVERemoveHiveFromSIDMappingTable.c)
 *     CmpDestroySecurityCache @ 0x1406A31E8 (CmpDestroySecurityCache.c)
 *     CmpVolumeContextDecrementRefCount @ 0x1406A3298 (CmpVolumeContextDecrementRefCount.c)
 *     CmpDeleteHive @ 0x1406A3308 (CmpDeleteHive.c)
 *     HvHiveCleanup @ 0x140706744 (HvHiveCleanup.c)
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
