/*
 * XREFs of CmpRecheckHiveVolumePolicy @ 0x14020B1F8
 * Callers:
 *     CmpLoadKeyCommon @ 0x14020AABC (CmpLoadKeyCommon.c)
 *     CmpCreateHive @ 0x14068A7FC (CmpCreateHive.c)
 *     CmpFinishSystemHivesLoad @ 0x140833B80 (CmpFinishSystemHivesLoad.c)
 *     CmpHandlePageFileOpenNotification @ 0x14085A568 (CmpHandlePageFileOpenNotification.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x1402A4320 (CmpArmLazyWriter.c)
 *     CmpVolumeContextMustHiveFilePagesBeKeptLocal @ 0x14068B6FC (CmpVolumeContextMustHiveFilePagesBeKeptLocal.c)
 *     HvViewMapContainsLockedPages @ 0x14068E614 (HvViewMapContainsLockedPages.c)
 *     HvUnlockHiveFilePages @ 0x1406EA2F0 (HvUnlockHiveFilePages.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140AB41E0 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140AB41FC (HvLockHiveFlusherExclusive.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 */

__int64 __fastcall CmpRecheckHiveVolumePolicy(__int64 a1)
{
  CmpLockRegistry();
  HvLockHiveFlusherExclusive(a1);
  if ( *(_QWORD *)(a1 + 4792) )
  {
    if ( (unsigned __int8)CmpVolumeContextMustHiveFilePagesBeKeptLocal() || (*(_DWORD *)(a1 + 4112) & 0x20) != 0 )
    {
      if ( (unsigned __int8)HvViewMapContainsLockedPages(a1 + 224) )
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
