/*
 * XREFs of HvUnlockHiveFlusherShared @ 0x14067010C
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x1402F2DB4 (CmpRemoveHiveFromNamespace.c)
 *     CmpCreateTombstone @ 0x1404EBC7C (CmpCreateTombstone.c)
 *     CmpCreateHive @ 0x1405DDED8 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x1405DE58C (CmpReorganizeHive.c)
 *     CmpSetKeySecurity @ 0x1405E0AE4 (CmpSetKeySecurity.c)
 *     CmpDoParseKey @ 0x140619BF0 (CmpDoParseKey.c)
 *     CmDeleteValueKey @ 0x14066C6F4 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x14066E7B0 (CmSetValueKey.c)
 *     CmEnumerateKey @ 0x140677010 (CmEnumerateKey.c)
 *     CmDeleteKey @ 0x1407022EC (CmDeleteKey.c)
 *     CmpCreateChild @ 0x140704B98 (CmpCreateChild.c)
 *     CmpInitCmRM @ 0x14071037C (CmpInitCmRM.c)
 *     CmpTransMgrCommitUoW @ 0x1407606AC (CmpTransMgrCommitUoW.c)
 *     CmpCreateHiveRootCell @ 0x140789E10 (CmpCreateHiveRootCell.c)
 *     CmpLoadHiveThread @ 0x140794830 (CmpLoadHiveThread.c)
 *     CmpAssignKeySecurity @ 0x1407CC190 (CmpAssignKeySecurity.c)
 *     CmSetKeyFlags @ 0x14087047C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140870938 (CmSetLastWriteTimeKey.c)
 *     CmRestoreKey @ 0x14087E5A8 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x14087FA64 (CmpRefreshHive.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 */

char __fastcall HvUnlockHiveFlusherShared(__int64 a1)
{
  signed __int64 *v1; // rbx

  v1 = (signed __int64 *)(a1 + 72);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 72), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v1);
  return KeAbPostRelease((ULONG_PTR)v1);
}
