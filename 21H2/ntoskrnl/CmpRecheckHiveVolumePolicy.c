/*
 * XREFs of CmpRecheckHiveVolumePolicy @ 0x1402F73C0
 * Callers:
 *     CmpLoadKeyCommon @ 0x14026D10C (CmpLoadKeyCommon.c)
 *     CmpCreateHive @ 0x1406F756C (CmpCreateHive.c)
 *     CmpFinishSystemHivesLoad @ 0x1407A74B0 (CmpFinishSystemHivesLoad.c)
 *     CmpHandlePageFileOpenNotification @ 0x1407C9058 (CmpHandlePageFileOpenNotification.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x140362D90 (CmpArmLazyWriter.c)
 *     CmpAdjustFileCFSafety @ 0x1403F06EC (CmpAdjustFileCFSafety.c)
 *     HvUnlockHiveFilePages @ 0x140621BD4 (HvUnlockHiveFilePages.c)
 *     HvViewMapContainsLockedPages @ 0x1406644E8 (HvViewMapContainsLockedPages.c)
 *     HvUnlockHiveFlusherExclusive @ 0x1406F97EC (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x1406F9824 (HvLockHiveFlusherExclusive.c)
 *     CmpVolumeContextMustHiveFilePagesBeKeptLocal @ 0x1406F9840 (CmpVolumeContextMustHiveFilePagesBeKeptLocal.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x14070D2F0 (CmpLockRegistry.c)
 */

__int64 __fastcall CmpRecheckHiveVolumePolicy(__int64 a1)
{
  int v2; // ecx
  bool v3; // cf
  __int64 v4; // rcx
  int v5; // ebx

  CmpLockRegistry();
  HvLockHiveFlusherExclusive(a1);
  if ( *(_QWORD *)(a1 + 4832) )
  {
    if ( (unsigned __int8)CmpVolumeContextMustHiveFilePagesBeKeptLocal()
      || (v2 = *(_DWORD *)(a1 + 4152), (v2 & 0x20) != 0) )
    {
      if ( (unsigned __int8)HvViewMapContainsLockedPages(a1 + 216) )
        CmpArmLazyWriter(2LL, 0LL, 0LL);
    }
    else if ( (*(_DWORD *)(a1 + 160) & 0x8000) == 0 )
    {
      v3 = (v2 & 0x10000) != 0;
      v4 = a1;
      if ( !v3 )
      {
        HvUnlockHiveFlusherExclusive(a1);
        CmpUnlockRegistry();
        v5 = CmpAdjustFileCFSafety(*(HANDLE *)(a1 + 1536));
        CmpLockRegistry();
        HvLockHiveFlusherExclusive(a1);
        if ( v5 < 0 )
          goto LABEL_11;
        *(_DWORD *)(a1 + 4152) |= 0x10000u;
        v4 = a1;
      }
      HvUnlockHiveFilePages(v4);
    }
  }
LABEL_11:
  HvUnlockHiveFlusherExclusive(a1);
  return CmpUnlockRegistry();
}
