/*
 * XREFs of CmpDestroyHive @ 0x14065A7E0
 * Callers:
 *     CmpLoadKeyCommon @ 0x14020AABC (CmpLoadKeyCommon.c)
 *     CmSaveKey @ 0x14065A44C (CmSaveKey.c)
 *     CmpCreateHive @ 0x14068A7FC (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x14068B1C8 (CmpReorganizeHive.c)
 *     CmLoadKey @ 0x1406DD184 (CmLoadKey.c)
 *     CmRestoreKey @ 0x14090C34C (CmRestoreKey.c)
 *     CmSaveMergedKeys @ 0x14090CFF8 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x14090D4E8 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x14090D9E8 (CmpRefreshHive.c)
 *     CmpFreeAllMemory @ 0x140911BAC (CmpFreeAllMemory.c)
 *     CmReplaceKey @ 0x1409136B4 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x140917A40 (CmpFlushBackupHive.c)
 *     CmpCreateEmptyHiveClone @ 0x14091972C (CmpCreateEmptyHiveClone.c)
 * Callees:
 *     CmpUnJoinClassOfTrust @ 0x140208994 (CmpUnJoinClassOfTrust.c)
 *     CmpVolumeContextDecrementRefCount @ 0x14067BD84 (CmpVolumeContextDecrementRefCount.c)
 *     CmpCmdHiveClose @ 0x14067C24C (CmpCmdHiveClose.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x14067C3A4 (CmpVERemoveHiveFromSIDMappingTable.c)
 *     CmpDestroySecurityCache @ 0x14067C45C (CmpDestroySecurityCache.c)
 *     CmpDeleteHive @ 0x1406BBAD8 (CmpDeleteHive.c)
 *     HvHiveCleanup @ 0x14079B518 (HvHiveCleanup.c)
 */

__int64 __fastcall CmpDestroyHive(__int64 P)
{
  struct _PRIVILEGE_SET *v2; // rcx
  __int64 result; // rax

  CmpDestroySecurityCache();
  CmpUnJoinClassOfTrust(P);
  CmpVERemoveHiveFromSIDMappingTable(P);
  HvHiveCleanup(P);
  CmpCmdHiveClose(P);
  v2 = *(struct _PRIVILEGE_SET **)(P + 4792);
  if ( v2 )
    CmpVolumeContextDecrementRefCount(v2);
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(P + 4232), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return CmpDeleteHive((PVOID)P);
  return result;
}
