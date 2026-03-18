/*
 * XREFs of HvUnlockHiveFlusherExclusive @ 0x140AB41E0
 * Callers:
 *     CmpUnlockKcbStackFlusherLocksExclusive @ 0x140200008 (CmpUnlockKcbStackFlusherLocksExclusive.c)
 *     CmpRecheckHiveVolumePolicy @ 0x14020B1F8 (CmpRecheckHiveVolumePolicy.c)
 *     CmShutdownSystem1 @ 0x14053EBD8 (CmShutdownSystem1.c)
 *     CmpFlushHive @ 0x1406885A4 (CmpFlushHive.c)
 *     HvpFinishPrimaryWrite @ 0x14068F39C (HvpFinishPrimaryWrite.c)
 *     CmpUnblockHiveWrites @ 0x14071A730 (CmpUnblockHiveWrites.c)
 *     CmpUnblockTwoHiveWrites @ 0x14071A784 (CmpUnblockTwoHiveWrites.c)
 *     CmpBlockTwoHiveWrites @ 0x14071B284 (CmpBlockTwoHiveWrites.c)
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 *     CmpTransMgrPrepare @ 0x1407424F0 (CmpTransMgrPrepare.c)
 *     CmpTransMgrSyncHive @ 0x140742834 (CmpTransMgrSyncHive.c)
 *     CmpLoadHiveThread @ 0x14083C870 (CmpLoadHiveThread.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x14083D1A4 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14083D56C (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmDumpKeyToFile @ 0x14090C1BC (CmDumpKeyToFile.c)
 *     CmSaveMergedKeys @ 0x14090CFF8 (CmSaveMergedKeys.c)
 *     CmReplaceKey @ 0x1409136B4 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x140917A40 (CmpFlushBackupHive.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140919170 (CmpWaitOnHiveWriteQueue.c)
 * Callees:
 *     CmSiRWLockReleaseExclusive @ 0x14071F640 (CmSiRWLockReleaseExclusive.c)
 */

__int64 __fastcall HvUnlockHiveFlusherExclusive(__int64 a1)
{
  return CmSiRWLockReleaseExclusive((volatile signed __int64 *)(a1 + 72));
}
