/*
 * XREFs of HvLockHiveFlusherShared @ 0x1405E2D14
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x14027262C (CmpRemoveHiveFromNamespace.c)
 *     CmpCreateTombstone @ 0x1404E83EC (CmpCreateTombstone.c)
 *     CmDeleteValueKey @ 0x1405DDB38 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x1405E3F50 (CmSetValueKey.c)
 *     CmpDoParseKey @ 0x1405EF1F0 (CmpDoParseKey.c)
 *     CmpCreateHive @ 0x14063ACD0 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x14063B384 (CmpReorganizeHive.c)
 *     CmpSetKeySecurity @ 0x14063D900 (CmpSetKeySecurity.c)
 *     CmDeleteKey @ 0x140643F58 (CmDeleteKey.c)
 *     CmpInitCmRM @ 0x140655B64 (CmpInitCmRM.c)
 *     CmEnumerateKey @ 0x140672240 (CmEnumerateKey.c)
 *     CmpCreateChild @ 0x14069CFA8 (CmpCreateChild.c)
 *     CmpTransMgrCommitUoW @ 0x140751ACC (CmpTransMgrCommitUoW.c)
 *     CmpCreateHiveRootCell @ 0x14077B810 (CmpCreateHiveRootCell.c)
 *     CmpLoadHiveThread @ 0x140786B20 (CmpLoadHiveThread.c)
 *     CmpAssignKeySecurity @ 0x1407BD900 (CmpAssignKeySecurity.c)
 *     CmSetKeyFlags @ 0x14086AA28 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14086AEE4 (CmSetLastWriteTimeKey.c)
 *     CmRestoreKey @ 0x140878A38 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x140879EF4 (CmpRefreshHive.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall HvLockHiveFlusherShared(__int64 a1)
{
  return ExAcquirePushLockSharedEx(a1 + 72, 0LL);
}
