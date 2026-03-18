/*
 * XREFs of HvLockHiveFlusherExclusive @ 0x14064CF38
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x140204810 (CmpRecheckHiveVolumePolicy.c)
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x14036BB7C (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmpDoParseKey @ 0x140619BF0 (CmpDoParseKey.c)
 *     CmpFlushHive @ 0x1406504C8 (CmpFlushHive.c)
 *     CmpTransMgrPrepare @ 0x14076032C (CmpTransMgrPrepare.c)
 *     CmpLoadHiveThread @ 0x140794830 (CmpLoadHiveThread.c)
 *     CmReplaceKey @ 0x1408701CC (CmReplaceKey.c)
 *     CmSaveMergedKeys @ 0x14087F0FC (CmSaveMergedKeys.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall HvLockHiveFlusherExclusive(__int64 a1)
{
  ExAcquirePushLockExclusiveEx(a1 + 72, 0LL);
}
