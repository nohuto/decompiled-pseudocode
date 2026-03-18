/*
 * XREFs of HvMarkBaseBlockDirty @ 0x14070ADAC
 * Callers:
 *     HvHiveStartFileBacked @ 0x14063A9A4 (HvHiveStartFileBacked.c)
 *     CmpCreateHive @ 0x14063ACD0 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x14063B384 (CmpReorganizeHive.c)
 *     CmpCompleteUnloadKey @ 0x14064364C (CmpCompleteUnloadKey.c)
 *     CmpInitCmRM @ 0x140655B64 (CmpInitCmRM.c)
 *     CmpCreateHiveRootCell @ 0x14077B810 (CmpCreateHiveRootCell.c)
 *     CmShutdownSystem @ 0x1408682A8 (CmShutdownSystem.c)
 *     CmCompressKey @ 0x140868BB0 (CmCompressKey.c)
 *     CmFreezeRegistry @ 0x14086ED48 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x14086EF88 (CmThawRegistry.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x1402D233C (KiQueryUnbiasedInterruptTime.c)
 *     CmpArmLazyWriter @ 0x1402D7800 (CmpArmLazyWriter.c)
 *     CmpIssueNewDirtyCallback @ 0x14070AE20 (CmpIssueNewDirtyCallback.c)
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
