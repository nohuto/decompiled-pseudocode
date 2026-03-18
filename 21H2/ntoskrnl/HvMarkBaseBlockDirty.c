/*
 * XREFs of HvMarkBaseBlockDirty @ 0x1406CA514
 * Callers:
 *     CmShutdownSystem1 @ 0x14053EBD8 (CmShutdownSystem1.c)
 *     CmpCompleteUnloadKey @ 0x14067BE48 (CmpCompleteUnloadKey.c)
 *     CmpCreateHive @ 0x14068A7FC (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x14068B1C8 (CmpReorganizeHive.c)
 *     HvHiveStartFileBacked @ 0x14068B3E0 (HvHiveStartFileBacked.c)
 *     CmpCreateHiveRootCell @ 0x1406C9FA0 (CmpCreateHiveRootCell.c)
 *     CmpInitCmRM @ 0x140742E3C (CmpInitCmRM.c)
 *     CmCompressKey @ 0x1409120AC (CmCompressKey.c)
 *     CmFreezeRegistry @ 0x140918C40 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x140918E48 (CmThawRegistry.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x1402A4320 (CmpArmLazyWriter.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402F5718 (KiQueryUnbiasedInterruptTime.c)
 *     CmpIssueNewDirtyCallback @ 0x1406CA588 (CmpIssueNewDirtyCallback.c)
 */

void __fastcall HvMarkBaseBlockDirty(__int64 a1)
{
  int v2; // eax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(a1 + 195) && !*(_DWORD *)(a1 + 104) )
  {
    *(_QWORD *)(a1 + 4136) = KiQueryUnbiasedInterruptTime();
    CmpIssueNewDirtyCallback();
  }
  v2 = *(_DWORD *)(a1 + 160);
  *(_BYTE *)(a1 + 195) = 1;
  if ( (v2 & 2) == 0 )
  {
    v3 = *(_QWORD *)(a1 + 4136) + 10000000LL * (unsigned int)CmpLazyFlushIntervalInSeconds;
    CmpArmLazyWriter(0, (unsigned __int64 *)&v3, 0);
  }
}
