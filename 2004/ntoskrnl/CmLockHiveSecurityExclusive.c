/*
 * XREFs of CmLockHiveSecurityExclusive @ 0x14069CD28
 * Callers:
 *     CmpCreateTombstone @ 0x1404E83EC (CmpCreateTombstone.c)
 *     CmpSetKeySecurity @ 0x14063D900 (CmpSetKeySecurity.c)
 *     CmpCreateChild @ 0x14069CFA8 (CmpCreateChild.c)
 *     CmpCreateHiveRootCell @ 0x14077B810 (CmpCreateHiveRootCell.c)
 *     CmpAssignKeySecurity @ 0x1407BD900 (CmpAssignKeySecurity.c)
 *     CmpCreateEmptyKey @ 0x14086CAE4 (CmpCreateEmptyKey.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall CmLockHiveSecurityExclusive(__int64 a1)
{
  ExAcquirePushLockExclusiveEx(a1 + 1776, 0LL);
}
