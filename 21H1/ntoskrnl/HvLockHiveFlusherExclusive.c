/*
 * XREFs of HvLockHiveFlusherExclusive @ 0x1406884B4
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x1402E0F40 (CmpRecheckHiveVolumePolicy.c)
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x1403691DC (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmpDoParseKey @ 0x140624810 (CmpDoParseKey.c)
 *     CmpFlushHive @ 0x140664FA8 (CmpFlushHive.c)
 *     CmpTransMgrPrepare @ 0x14074D0BC (CmpTransMgrPrepare.c)
 *     CmpLoadHiveThread @ 0x140781490 (CmpLoadHiveThread.c)
 *     CmReplaceKey @ 0x140869428 (CmReplaceKey.c)
 *     CmSaveMergedKeys @ 0x14087829C (CmSaveMergedKeys.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall HvLockHiveFlusherExclusive(__int64 a1)
{
  ExAcquirePushLockExclusiveEx(a1 + 72, 0LL);
}
