/*
 * XREFs of HvUnlockHiveFlusherExclusive @ 0x14068847C
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x1402E0F40 (CmpRecheckHiveVolumePolicy.c)
 *     CmpUnlockKcbStackFlusherLocksExclusive @ 0x1403690C4 (CmpUnlockKcbStackFlusherLocksExclusive.c)
 *     CmpDoParseKey @ 0x140624810 (CmpDoParseKey.c)
 *     CmpFlushHive @ 0x140664FA8 (CmpFlushHive.c)
 *     CmpTransMgrPrepare @ 0x14074D0BC (CmpTransMgrPrepare.c)
 *     CmpLoadHiveThread @ 0x140781490 (CmpLoadHiveThread.c)
 *     CmReplaceKey @ 0x140869428 (CmReplaceKey.c)
 *     CmSaveMergedKeys @ 0x14087829C (CmSaveMergedKeys.c)
 * Callees:
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 */

char __fastcall HvUnlockHiveFlusherExclusive(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 72;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 72);
  return KeAbPostRelease(v1);
}
