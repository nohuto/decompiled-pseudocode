/*
 * XREFs of CmLockHiveSecurityExclusive @ 0x1406967E8
 * Callers:
 *     CmpCreateTombstone @ 0x1404E7DBC (CmpCreateTombstone.c)
 *     CmpSetKeySecurity @ 0x14068AE1C (CmpSetKeySecurity.c)
 *     CmpCreateChild @ 0x140696A68 (CmpCreateChild.c)
 *     CmpCreateHiveRootCell @ 0x140779400 (CmpCreateHiveRootCell.c)
 *     CmpAssignKeySecurity @ 0x1407BA790 (CmpAssignKeySecurity.c)
 *     CmpCreateEmptyKey @ 0x14086B794 (CmpCreateEmptyKey.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall CmLockHiveSecurityExclusive(__int64 a1)
{
  ExAcquirePushLockExclusiveEx(a1 + 1776, 0LL);
}
