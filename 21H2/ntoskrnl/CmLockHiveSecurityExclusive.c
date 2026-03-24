/*
 * XREFs of CmLockHiveSecurityExclusive @ 0x14066A204
 * Callers:
 *     CmpCreateTombstone @ 0x1404ED55C (CmpCreateTombstone.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x1405CD308 (CmpUndoDeleteKeyForTransEx.c)
 *     CmpCreateChild @ 0x140667AD4 (CmpCreateChild.c)
 *     CmpSetKeySecurity @ 0x14066DF0C (CmpSetKeySecurity.c)
 *     CmpCreateHiveRootCell @ 0x14078DBF0 (CmpCreateHiveRootCell.c)
 *     CmpAssignKeySecurity @ 0x1407D0450 (CmpAssignKeySecurity.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall CmLockHiveSecurityExclusive(__int64 a1)
{
  ExAcquirePushLockExclusiveEx(a1 + 1776, 0LL);
}
