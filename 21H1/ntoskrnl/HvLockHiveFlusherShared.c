/*
 * XREFs of HvLockHiveFlusherShared @ 0x140618340
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x1402D2EA0 (CmpRemoveHiveFromNamespace.c)
 *     CmpCreateTombstone @ 0x1404E7DBC (CmpCreateTombstone.c)
 *     CmEnumerateKey @ 0x1405FA160 (CmEnumerateKey.c)
 *     CmSetValueKey @ 0x140619570 (CmSetValueKey.c)
 *     CmpDoParseKey @ 0x140624810 (CmpDoParseKey.c)
 *     CmpInitCmRM @ 0x14065A51C (CmpInitCmRM.c)
 *     CmpCreateHive @ 0x140688850 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x140688F04 (CmpReorganizeHive.c)
 *     CmpSetKeySecurity @ 0x14068AE1C (CmpSetKeySecurity.c)
 *     CmDeleteKey @ 0x140692448 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1406941D8 (CmDeleteValueKey.c)
 *     CmpCreateChild @ 0x140696A68 (CmpCreateChild.c)
 *     CmpTransMgrCommitUoW @ 0x14074D43C (CmpTransMgrCommitUoW.c)
 *     CmpCreateHiveRootCell @ 0x140779400 (CmpCreateHiveRootCell.c)
 *     CmpLoadHiveThread @ 0x140781490 (CmpLoadHiveThread.c)
 *     CmpAssignKeySecurity @ 0x1407BA790 (CmpAssignKeySecurity.c)
 *     CmSetKeyFlags @ 0x1408696D8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140869B94 (CmSetLastWriteTimeKey.c)
 *     CmRestoreKey @ 0x140877748 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x140878C04 (CmpRefreshHive.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall HvLockHiveFlusherShared(__int64 a1)
{
  return ExAcquirePushLockSharedEx(a1 + 72, 0LL);
}
