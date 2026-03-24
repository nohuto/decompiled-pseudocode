/*
 * XREFs of CmpDestroyHive @ 0x140728F38
 * Callers:
 *     CmpLoadKeyCommon @ 0x14036195C (CmpLoadKeyCommon.c)
 *     CmLoadKey @ 0x1406BA714 (CmLoadKey.c)
 *     CmpCreateHive @ 0x14071E618 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x140720AB8 (CmpReorganizeHive.c)
 *     CmSaveKey @ 0x140728BCC (CmSaveKey.c)
 *     CmpFreeAllMemory @ 0x14086BC98 (CmpFreeAllMemory.c)
 *     CmReplaceKey @ 0x14086D9C8 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x140870F40 (CmpFlushBackupHive.c)
 *     CmpCreateEmptyHiveClone @ 0x140872E48 (CmpCreateEmptyHiveClone.c)
 *     CmRestoreKey @ 0x14087BF30 (CmRestoreKey.c)
 *     CmSaveMergedKeys @ 0x14087CA90 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x14087CF5C (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x14087D3F8 (CmpRefreshHive.c)
 * Callees:
 *     CmpUnJoinClassOfTrust @ 0x14036173C (CmpUnJoinClassOfTrust.c)
 *     HvHiveCleanup @ 0x140709C24 (HvHiveCleanup.c)
 *     CmpDeleteHive @ 0x14071C6F4 (CmpDeleteHive.c)
 *     CmpVolumeContextDecrementRefCount @ 0x14071CA40 (CmpVolumeContextDecrementRefCount.c)
 *     CmpCmdHiveClose @ 0x14071CE14 (CmpCmdHiveClose.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x14071CF7C (CmpVERemoveHiveFromSIDMappingTable.c)
 *     CmpDestroySecurityCache @ 0x14071D074 (CmpDestroySecurityCache.c)
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
