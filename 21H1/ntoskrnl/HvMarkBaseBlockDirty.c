/*
 * XREFs of HvMarkBaseBlockDirty @ 0x1406E6EEC
 * Callers:
 *     CmpInitCmRM @ 0x14065A51C (CmpInitCmRM.c)
 *     CmpCompleteUnloadKey @ 0x14065AE8C (CmpCompleteUnloadKey.c)
 *     HvHiveStartFileBacked @ 0x140688524 (HvHiveStartFileBacked.c)
 *     CmpCreateHive @ 0x140688850 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x140688F04 (CmpReorganizeHive.c)
 *     CmpCreateHiveRootCell @ 0x140779400 (CmpCreateHiveRootCell.c)
 *     CmShutdownSystem @ 0x140866F58 (CmShutdownSystem.c)
 *     CmCompressKey @ 0x140867860 (CmCompressKey.c)
 *     CmFreezeRegistry @ 0x14086D288 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x14086D4C8 (CmThawRegistry.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x14023F4A4 (KiQueryUnbiasedInterruptTime.c)
 *     CmpArmLazyWriter @ 0x1402E4550 (CmpArmLazyWriter.c)
 *     CmpIssueNewDirtyCallback @ 0x1406E6F60 (CmpIssueNewDirtyCallback.c)
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
