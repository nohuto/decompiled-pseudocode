/*
 * XREFs of HvUnlockHiveWriter @ 0x1405DE540
 * Callers:
 *     CmpCreateHive @ 0x1405DDED8 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x1405DE58C (CmpReorganizeHive.c)
 *     CmpFlushHive @ 0x1406504C8 (CmpFlushHive.c)
 *     CmpInitCmRM @ 0x14071037C (CmpInitCmRM.c)
 *     CmpTransMgrPrepare @ 0x14076032C (CmpTransMgrPrepare.c)
 *     CmpCreateHiveRootCell @ 0x140789E10 (CmpCreateHiveRootCell.c)
 *     CmpRefreshHive @ 0x14087FA64 (CmpRefreshHive.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 */

char __fastcall HvUnlockHiveWriter(__int64 a1)
{
  ULONG_PTR v1; // rbx
  char v2; // al

  v1 = a1 + 80;
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 80));
  return KeAbPostRelease(v1);
}
