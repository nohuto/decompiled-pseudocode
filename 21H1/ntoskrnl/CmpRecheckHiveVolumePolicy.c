/*
 * XREFs of CmpRecheckHiveVolumePolicy @ 0x1402E0F40
 * Callers:
 *     CmpLoadKeyCommon @ 0x1402E1B78 (CmpLoadKeyCommon.c)
 *     CmpCreateHive @ 0x140688850 (CmpCreateHive.c)
 *     CmpFinishSystemHivesLoad @ 0x14078E760 (CmpFinishSystemHivesLoad.c)
 *     CmpHandlePageFileOpenNotification @ 0x1407B30D8 (CmpHandlePageFileOpenNotification.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x1402E4550 (CmpArmLazyWriter.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406292D0 (CmpLockRegistry.c)
 *     HvUnlockHiveFlusherExclusive @ 0x14068847C (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x1406884B4 (HvLockHiveFlusherExclusive.c)
 *     CmpVolumeContextMustHiveFilePagesBeKeptLocal @ 0x1406884D0 (CmpVolumeContextMustHiveFilePagesBeKeptLocal.c)
 *     HvViewMapContainsLockedPages @ 0x14068E888 (HvViewMapContainsLockedPages.c)
 *     HvUnlockHiveFilePages @ 0x1406ECF14 (HvUnlockHiveFilePages.c)
 */

__int64 __fastcall CmpRecheckHiveVolumePolicy(__int64 a1)
{
  CmpLockRegistry();
  HvLockHiveFlusherExclusive(a1);
  if ( *(_QWORD *)(a1 + 4832) )
  {
    if ( (unsigned __int8)CmpVolumeContextMustHiveFilePagesBeKeptLocal() || (*(_DWORD *)(a1 + 4152) & 0x20) != 0 )
    {
      if ( (unsigned __int8)HvViewMapContainsLockedPages(a1 + 216) )
        CmpArmLazyWriter(2LL, 0LL, 0LL);
    }
    else
    {
      HvUnlockHiveFilePages(a1);
    }
  }
  HvUnlockHiveFlusherExclusive(a1);
  return CmpUnlockRegistry();
}
