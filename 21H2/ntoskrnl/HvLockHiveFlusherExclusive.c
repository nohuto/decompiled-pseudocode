/*
 * XREFs of HvLockHiveFlusherExclusive @ 0x140AB41FC
 * Callers:
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x1402001A8 (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmpRecheckHiveVolumePolicy @ 0x14020B1F8 (CmpRecheckHiveVolumePolicy.c)
 *     CmShutdownSystem1 @ 0x14053EBD8 (CmShutdownSystem1.c)
 *     CmpFlushHive @ 0x1406885A4 (CmpFlushHive.c)
 *     HvpFinishPrimaryWrite @ 0x14068F39C (HvpFinishPrimaryWrite.c)
 *     CmpBlockTwoHiveWrites @ 0x14071B284 (CmpBlockTwoHiveWrites.c)
 *     CmpBlockHiveWrites @ 0x14071B99C (CmpBlockHiveWrites.c)
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 *     CmpTransMgrPrepare @ 0x1407424F0 (CmpTransMgrPrepare.c)
 *     CmpTransMgrSyncHive @ 0x140742834 (CmpTransMgrSyncHive.c)
 *     CmpLoadHiveThread @ 0x14083C870 (CmpLoadHiveThread.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x14083D1A4 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14083D56C (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmDumpKeyToFile @ 0x14090C1BC (CmDumpKeyToFile.c)
 *     CmSaveMergedKeys @ 0x14090CFF8 (CmSaveMergedKeys.c)
 *     NtCompressKey @ 0x14090E5E0 (NtCompressKey.c)
 *     CmReplaceKey @ 0x1409136B4 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x140917A40 (CmpFlushBackupHive.c)
 * Callees:
 *     CmSiRWLockAcquireExclusive @ 0x14071F674 (CmSiRWLockAcquireExclusive.c)
 */

void __fastcall HvLockHiveFlusherExclusive(__int64 a1)
{
  CmSiRWLockAcquireExclusive(a1 + 72);
}
