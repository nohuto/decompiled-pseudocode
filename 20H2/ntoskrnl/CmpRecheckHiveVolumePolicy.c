/*
 * XREFs of CmpRecheckHiveVolumePolicy @ 0x140204810
 * Callers:
 *     CmpLoadKeyCommon @ 0x140203EFC (CmpLoadKeyCommon.c)
 *     CmpCreateHive @ 0x1405DDED8 (CmpCreateHive.c)
 *     CmpFinishSystemHivesLoad @ 0x14079D1F0 (CmpFinishSystemHivesLoad.c)
 *     CmpHandlePageFileOpenNotification @ 0x1407C4A78 (CmpHandlePageFileOpenNotification.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x140343AF0 (CmpArmLazyWriter.c)
 *     CmpVolumeContextMustHiveFilePagesBeKeptLocal @ 0x1405DDB58 (CmpVolumeContextMustHiveFilePagesBeKeptLocal.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140616990 (CmpLockRegistry.c)
 *     HvLockHiveFlusherExclusive @ 0x14064CF38 (HvLockHiveFlusherExclusive.c)
 *     HvUnlockHiveFlusherExclusive @ 0x14064CF54 (HvUnlockHiveFlusherExclusive.c)
 *     HvViewMapContainsLockedPages @ 0x1406CA770 (HvViewMapContainsLockedPages.c)
 *     HvUnlockHiveFilePages @ 0x1406E2E54 (HvUnlockHiveFilePages.c)
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
