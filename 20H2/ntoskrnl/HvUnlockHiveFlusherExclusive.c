/*
 * XREFs of HvUnlockHiveFlusherExclusive @ 0x14064CF54
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x140204810 (CmpRecheckHiveVolumePolicy.c)
 *     CmpUnlockKcbStackFlusherLocksExclusive @ 0x14036BA64 (CmpUnlockKcbStackFlusherLocksExclusive.c)
 *     CmpDoParseKey @ 0x140619BF0 (CmpDoParseKey.c)
 *     CmpFlushHive @ 0x1406504C8 (CmpFlushHive.c)
 *     CmpTransMgrPrepare @ 0x14076032C (CmpTransMgrPrepare.c)
 *     CmpLoadHiveThread @ 0x140794830 (CmpLoadHiveThread.c)
 *     CmReplaceKey @ 0x1408701CC (CmReplaceKey.c)
 *     CmSaveMergedKeys @ 0x14087F0FC (CmSaveMergedKeys.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 */

char __fastcall HvUnlockHiveFlusherExclusive(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 72;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 72));
  return KeAbPostRelease(v1);
}
