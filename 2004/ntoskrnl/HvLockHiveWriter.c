/*
 * XREFs of HvLockHiveWriter @ 0x14063B368
 * Callers:
 *     CmpFlushHive @ 0x14061F888 (CmpFlushHive.c)
 *     CmpCreateHive @ 0x14063ACD0 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x14063B384 (CmpReorganizeHive.c)
 *     CmpInitCmRM @ 0x140655B64 (CmpInitCmRM.c)
 *     CmpTransMgrPrepare @ 0x14075174C (CmpTransMgrPrepare.c)
 *     CmpCreateHiveRootCell @ 0x14077B810 (CmpCreateHiveRootCell.c)
 *     CmpRefreshHive @ 0x140879EF4 (CmpRefreshHive.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall HvLockHiveWriter(__int64 a1)
{
  ExAcquirePushLockExclusiveEx(a1 + 80, 0LL);
}
