/*
 * XREFs of HvMarkBaseBlockDirty @ 0x1406BCFEC
 * Callers:
 *     CmpInitCmRM @ 0x140716078 (CmpInitCmRM.c)
 *     CmpRecordRMRecoveryMode @ 0x14071CA88 (CmpRecordRMRecoveryMode.c)
 *     CmpCreateHive @ 0x14071E618 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x140720AB8 (CmpReorganizeHive.c)
 *     HvHiveStartFileBacked @ 0x140721C68 (HvHiveStartFileBacked.c)
 *     CmpCreateHiveRootCell @ 0x14078DBF0 (CmpCreateHiveRootCell.c)
 *     CmShutdownSystem @ 0x14086B8F8 (CmShutdownSystem.c)
 *     CmCompressKey @ 0x14086C200 (CmCompressKey.c)
 *     CmFreezeRegistry @ 0x1408720F0 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x140872330 (CmThawRegistry.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x1402546F4 (KiQueryUnbiasedInterruptTime.c)
 *     CmpArmLazyWriter @ 0x140358040 (CmpArmLazyWriter.c)
 *     CmpIssueNewDirtyCallback @ 0x1406BD060 (CmpIssueNewDirtyCallback.c)
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
