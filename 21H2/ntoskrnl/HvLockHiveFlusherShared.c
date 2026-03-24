/*
 * XREFs of HvLockHiveFlusherShared @ 0x1406662C4
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x140361788 (CmpRemoveHiveFromNamespace.c)
 *     CmpCreateTombstone @ 0x1404ED55C (CmpCreateTombstone.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x1405CD308 (CmpUndoDeleteKeyForTransEx.c)
 *     CmEnumerateKey @ 0x1405F4350 (CmEnumerateKey.c)
 *     CmSetValueKey @ 0x1406646C0 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x140666544 (CmDeleteValueKey.c)
 *     CmpCreateChild @ 0x140667AD4 (CmpCreateChild.c)
 *     CmDeleteKey @ 0x14066B9F4 (CmDeleteKey.c)
 *     CmpSetKeySecurity @ 0x14066DF0C (CmpSetKeySecurity.c)
 *     CmpDoParseKey @ 0x1406F9170 (CmpDoParseKey.c)
 *     CmpInitCmRM @ 0x140716078 (CmpInitCmRM.c)
 *     CmpCreateHive @ 0x14071E618 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x140720AB8 (CmpReorganizeHive.c)
 *     CmpCreateHiveRootCell @ 0x14078DBF0 (CmpCreateHiveRootCell.c)
 *     CmpLoadHiveThread @ 0x14079ED50 (CmpLoadHiveThread.c)
 *     CmpAssignKeySecurity @ 0x1407D0450 (CmpAssignKeySecurity.c)
 *     CmSetKeyFlags @ 0x14086DC78 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14086E13C (CmSetLastWriteTimeKey.c)
 *     CmRestoreKey @ 0x14087BF30 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x14087D3F8 (CmpRefreshHive.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall HvLockHiveFlusherShared(__int64 a1)
{
  return ExAcquirePushLockSharedEx(a1 + 72, 0LL);
}
