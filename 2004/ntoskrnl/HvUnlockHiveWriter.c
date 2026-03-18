/*
 * XREFs of HvUnlockHiveWriter @ 0x14063B338
 * Callers:
 *     CmpFlushHive @ 0x14061F888 (CmpFlushHive.c)
 *     CmpCreateHive @ 0x14063ACD0 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x14063B384 (CmpReorganizeHive.c)
 *     CmpInitCmRM @ 0x140655B64 (CmpInitCmRM.c)
 *     CmpTransMgrPrepare @ 0x14075174C (CmpTransMgrPrepare.c)
 *     CmpCreateHiveRootCell @ 0x14077B810 (CmpCreateHiveRootCell.c)
 *     CmpRefreshHive @ 0x140879EF4 (CmpRefreshHive.c)
 * Callees:
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
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
