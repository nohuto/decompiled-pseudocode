/*
 * XREFs of HvUnlockHiveFlusherShared @ 0x14061835C
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
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 */

char __fastcall HvUnlockHiveFlusherShared(__int64 a1)
{
  signed __int64 *v1; // rbx

  v1 = (signed __int64 *)(a1 + 72);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 72), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v1);
  return KeAbPostRelease((ULONG_PTR)v1);
}
