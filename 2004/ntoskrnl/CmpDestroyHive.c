/*
 * XREFs of CmpDestroyHive @ 0x1407174E8
 * Callers:
 *     CmpLoadKeyCommon @ 0x140271C20 (CmpLoadKeyCommon.c)
 *     CmpCreateHive @ 0x14063ACD0 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x14063B384 (CmpReorganizeHive.c)
 *     CmLoadKey @ 0x1406525D0 (CmLoadKey.c)
 *     CmSaveKey @ 0x14071717C (CmSaveKey.c)
 *     CmpFreeAllMemory @ 0x140868648 (CmpFreeAllMemory.c)
 *     CmReplaceKey @ 0x14086A778 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x14086DC18 (CmpFlushBackupHive.c)
 *     CmpCreateEmptyHiveClone @ 0x14086FA48 (CmpCreateEmptyHiveClone.c)
 *     CmRestoreKey @ 0x140878A38 (CmRestoreKey.c)
 *     CmSaveMergedKeys @ 0x14087958C (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x140879A58 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x140879EF4 (CmpRefreshHive.c)
 * Callees:
 *     CmpUnJoinClassOfTrust @ 0x1402725E0 (CmpUnJoinClassOfTrust.c)
 *     CmpCmdHiveClose @ 0x140643988 (CmpCmdHiveClose.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x140643AE0 (CmpVERemoveHiveFromSIDMappingTable.c)
 *     CmpDestroySecurityCache @ 0x140643B98 (CmpDestroySecurityCache.c)
 *     CmpVolumeContextDecrementRefCount @ 0x140644ADC (CmpVolumeContextDecrementRefCount.c)
 *     CmpDeleteHive @ 0x140644B4C (CmpDeleteHive.c)
 *     HvHiveCleanup @ 0x14069E3E4 (HvHiveCleanup.c)
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
