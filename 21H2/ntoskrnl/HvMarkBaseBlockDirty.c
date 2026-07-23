/*
 * XREFs of HvMarkBaseBlockDirty @ 0x14061C16C
 * Callers:
 *     CmpRecordRMRecoveryMode @ 0x1405E08DC (CmpRecordRMRecoveryMode.c)
 *     CmpInitCmRM @ 0x1406C46C8 (CmpInitCmRM.c)
 *     CmpCreateHive @ 0x1406F756C (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x1406F7F2C (CmpReorganizeHive.c)
 *     HvHiveStartFileBacked @ 0x1406F94C0 (HvHiveStartFileBacked.c)
 *     CmpCreateHiveRootCell @ 0x14078DDB0 (CmpCreateHiveRootCell.c)
 *     CmShutdownSystem @ 0x14086BA58 (CmShutdownSystem.c)
 *     CmCompressKey @ 0x14086C360 (CmCompressKey.c)
 *     CmFreezeRegistry @ 0x140872250 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x140872490 (CmThawRegistry.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140275C64 (KiQueryUnbiasedInterruptTime.c)
 *     CmpArmLazyWriter @ 0x140362D90 (CmpArmLazyWriter.c)
 *     CmpIssueNewDirtyCallback @ 0x14061C1E0 (CmpIssueNewDirtyCallback.c)
 */

void __fastcall HvMarkBaseBlockDirty(__int64 a1)
{
  int v2; // eax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(a1 + 191) && !*(_DWORD *)(a1 + 104) )
  {
    *(_QWORD *)(a1 + 4176) = KiQueryUnbiasedInterruptTime();
    CmpIssueNewDirtyCallback();
  }
  v2 = *(_DWORD *)(a1 + 160);
  *(_BYTE *)(a1 + 191) = 1;
  if ( (v2 & 2) == 0 )
  {
    v3 = *(_QWORD *)(a1 + 4176) + 10000000LL * (unsigned int)CmpLazyFlushIntervalInSeconds;
    CmpArmLazyWriter(0, (unsigned __int64 *)&v3, 0);
  }
}
