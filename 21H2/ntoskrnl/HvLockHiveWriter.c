/*
 * XREFs of HvLockHiveWriter @ 0x1406F7F10
 * Callers:
 *     CmpFlushHive @ 0x1406A48D8 (CmpFlushHive.c)
 *     CmpInitCmRM @ 0x1406C46C8 (CmpInitCmRM.c)
 *     CmpCreateHive @ 0x1406F756C (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x1406F7F2C (CmpReorganizeHive.c)
 *     CmpTransMgrPrepare @ 0x140768EC4 (CmpTransMgrPrepare.c)
 *     CmpCreateHiveRootCell @ 0x14078DDB0 (CmpCreateHiveRootCell.c)
 *     CmpRefreshHive @ 0x14087D558 (CmpRefreshHive.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall HvLockHiveWriter(__int64 a1)
{
  ExAcquirePushLockExclusiveEx(a1 + 80, 0LL);
}
