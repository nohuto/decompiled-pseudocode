/*
 * XREFs of CmLockHiveSecurityExclusive @ 0x14065F024
 * Callers:
 *     CmpCreateTombstone @ 0x1404ED79C (CmpCreateTombstone.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x1405CD308 (CmpUndoDeleteKeyForTransEx.c)
 *     CmpCreateChild @ 0x14065C8F4 (CmpCreateChild.c)
 *     CmpSetKeySecurity @ 0x140662D2C (CmpSetKeySecurity.c)
 *     CmpCreateHiveRootCell @ 0x14078DDB0 (CmpCreateHiveRootCell.c)
 *     CmpAssignKeySecurity @ 0x1407D05C0 (CmpAssignKeySecurity.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall CmLockHiveSecurityExclusive(__int64 a1)
{
  ExAcquirePushLockExclusiveEx(a1 + 1776, 0LL);
}
