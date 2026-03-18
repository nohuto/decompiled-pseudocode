/*
 * XREFs of HvLockHiveFlusherExclusive @ 0x14063A934
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x1402718B0 (CmpRecheckHiveVolumePolicy.c)
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x140369B9C (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmpDoParseKey @ 0x1405EF1F0 (CmpDoParseKey.c)
 *     CmpFlushHive @ 0x14061F888 (CmpFlushHive.c)
 *     CmpTransMgrPrepare @ 0x14075174C (CmpTransMgrPrepare.c)
 *     CmpLoadHiveThread @ 0x140786B20 (CmpLoadHiveThread.c)
 *     CmReplaceKey @ 0x14086A778 (CmReplaceKey.c)
 *     CmSaveMergedKeys @ 0x14087958C (CmSaveMergedKeys.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall HvLockHiveFlusherExclusive(__int64 a1)
{
  ExAcquirePushLockExclusiveEx(a1 + 72, 0LL);
}
