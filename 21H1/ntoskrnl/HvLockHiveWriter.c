/*
 * XREFs of HvLockHiveWriter @ 0x140688EE8
 * Callers:
 *     CmpInitCmRM @ 0x14065A51C (CmpInitCmRM.c)
 *     CmpFlushHive @ 0x140664FA8 (CmpFlushHive.c)
 *     CmpCreateHive @ 0x140688850 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x140688F04 (CmpReorganizeHive.c)
 *     CmpTransMgrPrepare @ 0x14074D0BC (CmpTransMgrPrepare.c)
 *     CmpCreateHiveRootCell @ 0x140779400 (CmpCreateHiveRootCell.c)
 *     CmpRefreshHive @ 0x140878C04 (CmpRefreshHive.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall HvLockHiveWriter(__int64 a1)
{
  ExAcquirePushLockExclusiveEx(a1 + 80, 0LL);
}
